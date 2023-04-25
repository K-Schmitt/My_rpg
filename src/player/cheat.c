/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** cheat.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void tpp(RPG *rpg, char *path, sfTexture *map, sfTexture *map2)
{
    rpg->collision =
    sfTexture_createFromFile(path, NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, map, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, map2, 0);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
}

static void cheat_mod_tp3(RPG *rpg)
{
    if (kbp(sfKeyF5)) {
        tpp(rpg, "./assets/collission/cave-a_col.png", rpg->cave1_b,
        rpg->cave1_h);
        sfView_setCenter(rpg->area, vecf(280, 950));
        rpg->zone = 4;
        change_music(rpg);
    }
    if (kbp(sfKeyF6)) {
        tpp(rpg, "./assets/collission/cave-b_col.png", rpg->cave2_b,
        rpg->cave2_h);
        sfView_setCenter(rpg->area, vecf(80, 1280));
        rpg->zone = 6;
        change_music(rpg);
    }
    cheat_mod_tp4(rpg);
}

static void cheat_mod_tp2(RPG *rpg)
{
    if (kbp(sfKeyF3)) {
        tpp(rpg, "./assets/collission/collision.png", rpg->map_princ_b,
        rpg->map_princ_h);
        sfView_setCenter(rpg->area, vecf(420, 1050));
        rpg->zone = 1;
        change_music(rpg);
    }
    if (kbp(sfKeyF4)) {
        tpp(rpg, "./assets/collission/bar_col.png", rpg->bar_b, rpg->bar_h);
        sfView_setCenter(rpg->area, vecf(380, 110));
        rpg->zone = 5;
        change_music(rpg);
    }
    cheat_mod_tp3(rpg);
}

static void cheat_mod_tp(RPG *rpg)
{
    if (rpg->cheat == 1) {
        if (kbp(sfKeyF1)) {
            tpp(rpg, "./assets/collission/house-a_col.png", rpg->house1_b,
            rpg->house1_h);
            sfView_setCenter(rpg->area, vecf(170, 110));
            rpg->zone = 2;
            change_music(rpg);
        }
        if (kbp(sfKeyF2)) {
            tpp(rpg, "./assets/collission/house-b_col.png", rpg->house2_b,
            rpg->house2_h);
            sfView_setCenter(rpg->area, vecf(60, 210));
            rpg->zone = 3;
            change_music(rpg);
        }
        cheat_mod_tp2(rpg);
    }
}

void cheat_mod(RPG *rpg)
{
    if (kbp(sfKeyS) && kbp(sfKeySpace) && kbp(sfKeyEnter)) {
        rpg->stat.speed = 4;
        rpg->cheat = 1;
        rpg->size = rectf(0, 0, sfRenderWindow_getSize(rw).x / 2,
        sfRenderWindow_getSize(rw).y / 2);
    }
    if (kbp(sfKeyQ)) {
        rpg->stat.speed = 1;
        rpg->cheat = 0;
        rpg->size = rectf(0, 0, 480, 270);
    }
    sfView_setSize(rpg->area, vecf(rpg->size.width, rpg->size.height));
    cheat_mod_tp(rpg);
}
