/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** dialogue_fight.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void draw_dial(RPG *rpg)
{
    draw_all(rpg);
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.tete.img_sprite, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text.text, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue_non.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue_oui.img_sprite, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text1.text, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text2.text, NULL);
    sfRenderWindow_display(rw);
}

void init_dialogue_opt2(RPG *rpg)
{
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->dial.dialogue.img_sprite);
    create_text(&rpg->dial.dialog_text1, "oui", 10,
    vecf(rpg->dial.dialogue_oui.pos.x + (size.width / 13),
    rpg->dial.dialogue_oui.pos.y + (size.height / 50)));
    create_text(&rpg->dial.dialog_text2, "non", 10,
    vecf(rpg->dial.dialogue_non.pos.x + (size.width / 13),
    rpg->dial.dialogue_non.pos.y + (size.height / 50)));
    sfClock_restart(rpg->dial.dial_clock);
    sfText_setFillColor(rpg->dial.dialog_text1.text, sfBlue);
}

static void opt_dial(RPG *rpg, int (*fonc)(RPG *))
{
    init_dialogue_opt(rpg);
    int oui = 1;
    while (sfRenderWindow_isOpen(rw)) {
        actuwindow(rpg);
        if (kbp(rpg->stat.up_k)) {
            sfText_setFillColor(rpg->dial.dialog_text1.text, sfBlue);
            sfText_setFillColor(rpg->dial.dialog_text2.text, sfBlack);
            oui = 1;
        }
        if (kbp(rpg->stat.down_k)) {
            sfText_setFillColor(rpg->dial.dialog_text1.text, sfBlack);
            sfText_setFillColor(rpg->dial.dialog_text2.text, sfBlue);
            oui = 0;
        }
        draw_dial(rpg);
        if (MyKeyinter && get(times(rpg->dial.dial_clock)) > 0.5) {
            (oui == 1) ? (*fonc)(rpg) : 0;
            break;
        }
    }
}

static void destroy_dial(RPG *rpg)
{
    sfSprite_destroy(rpg->dial.dialogue.img_sprite);
    sfText_destroy(rpg->dial.dialog_text.text);
    sfMusic_destroy(rpg->dial.dial_song);
}

void start_dialogue_action(RPG *rpg, char *path, int nb, int (*fonc)(RPG *))
{
    init_dialogue(rpg, path, nb);
    char *nstr = NULL;
    while (sfRenderWindow_isOpen(rw)) {
        actuwindow(rpg);
        draw_all(rpg);
        if (sfMusic_getStatus(rpg->dial.dial_song) == sfStopped)
            sfMusic_play(rpg->dial.dial_song);
        nstr = malloc(sizeof(char) * my_strlen(rpg->dial.str) + 1);
        if (get(times(rpg->dial.dial_clock)) * 20 < my_strlen(rpg->dial.str)) {
            nstr = my_strncpy(nstr, rpg->dial.str,
            get(times(rpg->dial.dial_clock)) * 20);
            sfText_setString(rpg->dial.dialog_text.text, nstr);
        }
        free(nstr);
        if (dialogue_next(rpg, path) == 1) {
            opt_dial(rpg, (*fonc));
            break;
        }
    }
    destroy_dial(rpg);
}
