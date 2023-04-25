/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** rpg
*/

#include "../include/csfmlib.h"
#include "../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void cut_music(RPG *rpg)
{
    if (rpg->music.music_s == 1) {
        if (sfMusic_getStatus(rpg->music.main) == sfPlaying)
            sfMusic_stop(rpg->music.main);
        if (sfMusic_getStatus(rpg->music.grotte) == sfPlaying)
            sfMusic_stop(rpg->music.grotte);
        if (sfMusic_getStatus(rpg->music.desert) == sfPlaying)
            sfMusic_stop(rpg->music.desert);
        if (sfMusic_getStatus(rpg->music.bar) == sfPlaying)
            sfMusic_stop(rpg->music.bar);
        if (sfMusic_getStatus(rpg->music.shop) == sfPlaying)
            sfMusic_stop(rpg->music.shop);
        if (sfMusic_getStatus(rpg->music.fight) == sfPlaying)
            sfMusic_stop(rpg->music.fight);
        if (sfMusic_getStatus(rpg->music.neige) == sfPlaying)
            sfMusic_stop(rpg->music.neige);
        if (sfMusic_getStatus(rpg->music.intro) == sfPlaying)
            sfMusic_stop(rpg->music.intro);
        rpg->music.music_s = 0;
    }
}

void change_music(RPG *rpg)
{
    cut_music(rpg);
    if (rpg->music.music_s == 0) {
        if (rpg->zone == 1 || rpg->zone == 2 || rpg->zone == 3
        || rpg->zone == 8)
            sfMusic_play(rpg->music.main);
        if (rpg->zone == 4 || rpg->zone == 6)
            sfMusic_play(rpg->music.grotte);
        if (rpg->zone == 5 || rpg->zone == 11)
            sfMusic_play(rpg->music.bar);
        if (rpg->zone == 7 || rpg->zone == 12 || rpg->zone == 13)
            sfMusic_play(rpg->music.desert);
        if (rpg->zone == 10)
            sfMusic_play(rpg->music.neige);
        rpg->music.music_s = 1;
    }
}

void game(RPG *rpg)
{
    sfRenderWindow_setFramerateLimit(rw, 144);
    rpg->size = rectf(0, 0, 480, 270);
    rpg->music.music_s = 0;
    if (rpg->intro == 0)
        animation(rpg);
    change_music(rpg);
    sfView_setSize(rpg->area, vecf(rpg->size.width, rpg->size.height));
    while (sfRenderWindow_isOpen(rw)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape) || rpg->ech == true)
            echpmenu(rpg);
        else {
            actu_all(rpg);
            draw_all(rpg);
        }
        sfRenderWindow_display(rw);
    }
    save_game(rpg);
}
