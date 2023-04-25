/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** dialogue2.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void draw_dial(RPG *rpg)
{
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.tete.img_sprite, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text.text, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue_non.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue_oui.img_sprite, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text1.text, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text2.text, NULL);
    sfRenderWindow_display(rw);
}

int init_dialogue_opt(RPG *rpg)
{
    create_sprite(&rpg->dial.dialogue_oui, "./assets/fonts/dialog_box.png",
    vecf(0.2, 0.3));
    create_sprite(&rpg->dial.dialogue_non, "./assets/fonts/dialog_box.png",
    vecf(0.2, 0.3));
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->dial.dialogue.img_sprite);
    rpg->dial.dialogue_oui.pos = vecf(rpg->dial.dialogue.pos.x + size.width /
    6 * 4.3, rpg->dial.dialogue.pos.y + 10);
    rpg->dial.dialogue_non.pos = vecf(rpg->dial.dialogue.pos.x + size.width /
    6 * 4.3, rpg->dial.dialogue.pos.y + 30);
    sfSprite_setPosition(rpg->dial.dialogue_non.img_sprite,
    rpg->dial.dialogue_non.pos);
    sfSprite_setPosition(rpg->dial.dialogue_oui.img_sprite,
    rpg->dial.dialogue_oui.pos);
    init_dialogue_opt2(rpg);
    return (1);
}

static void destroy_dial(RPG *rpg)
{
    sfSprite_destroy(rpg->dial.dialogue.img_sprite);
    sfText_destroy(rpg->dial.dialog_text.text);
    sfMusic_destroy(rpg->dial.dial_song);
}

static void opt_dial(RPG *rpg, int *quete)
{
    int oui = init_dialogue_opt(rpg);
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
        draw_all(rpg);
        draw_dial(rpg);
        if (MyKeyinter && get(times(rpg->dial.dial_clock)) > 0.5) {
            *quete += oui;
            break;
        }
    }
}

void start_dialogue_opt(RPG *rpg, char *path, int nb, int *quete)
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
            opt_dial(rpg, quete);
            break;
        }
    }
    destroy_dial(rpg);
}
