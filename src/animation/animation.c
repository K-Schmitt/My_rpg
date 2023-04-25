/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** animation
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_animation(RPG *rpg)
{
    rpg->pnjs.archi.z.left = 32;
    rpg->pnjs.archi.z.top = 32;
    rpg->animes.anime_clock = sfClock_create();
    init_dialogue(rpg, "./assets/dialogue/archi.txt", 6);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    rpg->animes.nstr = malloc(sizeof(char) * my_strlen(rpg->dial.str) + 1);
    sfRenderWindow_setFramerateLimit(rw, 100);
    cut_music(rpg);
    sfMusic_play(rpg->music.intro);
    rpg->music.music_s = 1;
    rpg->animes.end = 0;
}

void move_archi(RPG *rpg, sfVector2f time, sfVector2f distance, int sen)
{
    if (rpg->animes.time > time.x && rpg->animes.time < time.y) {
        rpg->pnjs.archi.z.top = sen;
        sfView_move(rpg->area, distance);
        animate(&rpg->pnjs.archi, 3, 32);
    }
}

static void center_archi(RPG *rpg)
{
    sfSprite_setTextureRect(rpg->pnjs.archi.img_sprite, rpg->pnjs.archi.z);
    sfSprite_setScale(rpg->pnjs.archi.img_sprite, rpg->pnjs.archi.scale);
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->pnjs.archi.img_sprite);
    rpg->pnjs.archi.pos = sfRenderWindow_mapPixelToCoords(rw,
    veci(((sfRenderWindow_getSize(rw).x / 2) - size.width * 2),
    ((sfRenderWindow_getSize(rw).y / 2) - size.height)), rpg->area);
    sfSprite_setPosition(rpg->pnjs.archi.img_sprite, rpg->pnjs.archi.pos);
}

static void actu_anime(RPG *rpg)
{
    actuwindow(rpg);
    center_archi(rpg);
    float distance = -100 / rpg->gfps.fps;
    rpg->animes.time = get(times(rpg->animes.anime_clock));
    move_archi(rpg, vecf(1, 2.2), vecf(distance, 0), 32);
    move_archi(rpg, vecf(2.2, 2.5), vecf(0, -distance), 0);
    move_archi(rpg, vecf(2.5, 3.3), vecf(distance, 0), 32);
    move_archi(rpg, vecf(3.3, 3.6), vecf(0, -distance), 0);
    move_archi(rpg, vecf(3.6, 3.8), vecf(distance, 0), 32);
    move_archi(rpg, vecf(3.8, 4), vecf(0, -distance), 0);
    move_archi(rpg, vecf(4, 4.2), vecf(distance, 0), 32);
    move_archi(rpg, vecf(4.2, 4.4), vecf(0, -distance), 0);
    move_archi(rpg, vecf(4.4, 4.6), vecf(distance, 0), 32);
    move_archi(rpg, vecf(4.6, 4.8), vecf(0, -distance), 0);
    move_archi(rpg, vecf(4.8, 5.7), vecf(distance, 0), 32);
    move_archi(rpg, vecf(5.7, 6.7), vecf(0, -distance), 0);
    move_archi(rpg, vecf(6.7, 7.6), vecf(distance, 0), 32);
    move_archi(rpg, vecf(7.6, 8), vecf(0, distance), 96);
    actu_anime2(rpg, distance);
}

void animation(RPG *rpg)
{
    init_animation(rpg);
    while (sfRenderWindow_isOpen(rw) && rpg->animes.end != 1) {
        actu_anime(rpg);
        draw_all(rpg);
        if (rpg->animes.time > 2 && rpg->animes.time < 7) {
            sfRenderWindow_drawSprite(rw, rpg->dial.dialogue.img_sprite, NULL);
            sfRenderWindow_drawSprite(rw, rpg->dial.tete.img_sprite, NULL);
            sfRenderWindow_drawText(rw, rpg->dial.dialog_text.text, NULL);
        }
        if (rpg->animes.time < 8)
            sfRenderWindow_drawSprite(rw, rpg->pnjs.archi.img_sprite, NULL);
        sfRenderWindow_display(rw);
    }
}
