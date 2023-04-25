/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** animation2
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void center_perso(RPG *rpg)
{
    sfSprite_setTextureRect(rpg->perso.img_sprite, rpg->perso.z);
    sfSprite_setScale(rpg->perso.img_sprite, rpg->perso.scale);
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    rpg->perso.pos = sfRenderWindow_mapPixelToCoords(rw,
    veci(((sfRenderWindow_getSize(rw).x / 2) - size.width * 2),
    ((sfRenderWindow_getSize(rw).y / 2) - size.height)), rpg->area);
    sfSprite_setPosition(rpg->perso.img_sprite, rpg->perso.pos);
}

void actu_anime3(RPG *rpg)
{
    if (rpg->animes.time > 10) {
        center_perso(rpg);
        rpg->perso.z.top = 0;
        rpg->size = rectf(0, 0, 480, 270);
        sfView_setSize(rpg->area, vecf(rpg->size.width, rpg->size.height));
        tpp(rpg, "./assets/collission/house-a_col.png", rpg->house1_b,
        rpg->house1_h);
        sfView_setCenter(rpg->area, vecf(175, 160));
        rpg->zone = 2;
    }
}

void actu_anime2(RPG *rpg, float distance)
{
    move_archi(rpg, vecf(8.3, 9.2), vecf(-distance, 0), 64);
    move_archi(rpg, vecf(9.2, 10.5), vecf(0, distance), 96);
    if (rpg->animes.time > 2 && rpg->animes.time < 7) {
            start_dialogue_anime(rpg);
        rpg->size.width -= 0.0720 * 3;
        rpg->size.height -= 0.0405 * 3;
        sfView_setSize(rpg->area, vecf(rpg->size.width, rpg->size.height));
    }
    if (rpg->animes.time > 7 && rpg->animes.time < 7.2)
        init_dialogue(rpg, "./assets/dialogue/archi.txt", 6);
    if (rpg->animes.time > 13) {
        cut_music(rpg);
        rpg->animes.end = 1;
        rpg->intro = 1;
        rpg->pnjs.archi.z.top = 0;
    }
    actu_anime3(rpg);
}
