/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** dialogue.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_dialogue2(RPG *rpg, char *path, int nb, sfFloatRect size)
{
    rpg->dial.tete.pos = vecf(rpg->perso.pos.x - 130, rpg->perso.pos.y + 75);
    sfSprite_setPosition(rpg->dial.tete.img_sprite, rpg->dial.tete.pos);
    rpg->dial.dial_clock = sfClock_create();
    rpg->dial.dial_song = sfMusic_createFromFile(recup_info(2, path));
    sfMusic_setLoop(rpg->dial.dial_song, sfTrue);
    sfMusic_setVolume(rpg->dial.dial_song, 100);
    rpg->dial.nb = nb;
    rpg->dial.bob = NULL;
    rpg->dial.str = recup_info(nb, path);

    create_text(&rpg->dial.name, NULL, my_atoi(recup_info(3, path)),
    vecf(rpg->dial.dialogue.pos.x + (size.width / 10),
    rpg->dial.dialogue.pos.y - (size.height / 5)));
    sfText_setScale(rpg->dial.name.text, vecf(0.5, 0.5));
    rpg->dial.name.font = sfFont_createFromFile(recup_info(1, path));
    sfText_setFont(rpg->dial.name.text, rpg->dial.name.font);
    sfText_setString(rpg->dial.name.text, recup_info(4, path));
}

void init_dialogue(RPG *rpg, char *path, int nb)
{
    rpg->inv.is_press = false;
    create_sprite(&rpg->dial.dialogue, "./assets/fonts/dialog_box.png",
    vecf(1, 1));
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->dial.dialogue.img_sprite);
    rpg->dial.dialogue.pos = vecf(rpg->perso.pos.x - 80, rpg->perso.pos.y + 75);
    sfSprite_setPosition(rpg->dial.dialogue.img_sprite, rpg->dial.dialogue.pos);
    create_text(&rpg->dial.dialog_text, NULL, my_atoi(recup_info(3, path)),
    vecf(rpg->dial.dialogue.pos.x + (size.width / 10),
    rpg->dial.dialogue.pos.y + (size.height / 10)));
    sfText_setScale(rpg->dial.dialog_text.text, vecf(0.5, 0.5));
    rpg->dial.dialog_text.font = sfFont_createFromFile(recup_info(1, path));
    sfText_setFont(rpg->dial.dialog_text.text, rpg->dial.dialog_text.font);
    create_sprite(&rpg->dial.tete, recup_info(0, path),
    vecf(2.5, 2.5));
    init_dialogue2(rpg, path, nb, size);
}

int dialogue_next(RPG *rpg, char *path)
{
    sfRenderWindow_drawSprite(rw, rpg->dial.dialogue.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->dial.tete.img_sprite, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.dialog_text.text, NULL);
    sfRenderWindow_drawText(rw, rpg->dial.name.text, NULL);
    sfRenderWindow_display(rw);
    if (get(times(rpg->dial.dial_clock)) * 20 > my_strlen(rpg->dial.str))
        sfMusic_pause(rpg->dial.dial_song);
    if (MyKeyinter && get(times(rpg->dial.dial_clock)) * 20 >
    my_strlen(rpg->dial.str)) {
        rpg->dial.nb++;
        rpg->dial.bob = recup_info(rpg->dial.nb, path);
        if (my_strcmp("//", rpg->dial.bob) == 0) {
            sfClock_restart(rpg->dial.dial_clock);
            rpg->dial.str = my_strdup(rpg->dial.bob);
            free(rpg->dial.bob);
            sfMusic_play(rpg->dial.dial_song);
        } else
            return (1);
    }
    return (0);
}

void start_dialogue(RPG *rpg, char *path, int nb)
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
        if (dialogue_next(rpg, path) == 1)
            break;
    }
    sfSprite_destroy(rpg->dial.dialogue.img_sprite);
    sfText_destroy(rpg->dial.dialog_text.text);
    sfMusic_destroy(rpg->dial.dial_song);
}

void start_dialogue_anime(RPG *rpg)
{
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->dial.dialogue.img_sprite);
    rpg->dial.dialogue.pos = vecf(ARCHI.x - 80, ARCHI.y + 75);
    rpg->dial.tete.pos = vecf(ARCHI.x - 130, ARCHI.y + 75);
    sfSprite_setPosition(rpg->dial.dialogue.img_sprite, rpg->dial.dialogue.pos);
    sfSprite_setPosition(rpg->dial.tete.img_sprite, rpg->dial.tete.pos);
    sfText_setPosition(rpg->dial.dialog_text.text,
    vecf(rpg->dial.dialogue.pos.x +
    (size.width / 10), rpg->dial.dialogue.pos.y + (size.height / 10)));
    if (sfMusic_getStatus(rpg->dial.dial_song) == sfStopped &&
    ((get(times(rpg->dial.dial_clock)) * 20) - 20) < my_strlen(rpg->dial.str))
        sfMusic_play(rpg->dial.dial_song);
    if (((get(times(rpg->dial.dial_clock)) * 20) - 20) <
    my_strlen(rpg->dial.str)){
        rpg->animes.nstr = my_strncpy(rpg->animes.nstr, rpg->dial.str,
        get(times(rpg->dial.dial_clock)) * 20 - 20);
        sfText_setString(rpg->dial.dialog_text.text, rpg->animes.nstr);
    }
    if (((get(times(rpg->dial.dial_clock)) * 20)  - 20) >
    my_strlen(rpg->dial.str))
        sfMusic_pause(rpg->dial.dial_song);
}
