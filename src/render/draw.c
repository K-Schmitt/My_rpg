/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** draw
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void draw_all(RPG *rpg)
{
    sfRenderWindow_drawSprite(rw, rpg->map_b.img_sprite, NULL);
    if (kbp(sfKeyA) && rpg->cheat == 1)
        sfRenderWindow_drawSprite(rw, rpg->test_col, NULL);
    if (kbp(rpg->stat.left_k) || kbp(rpg->stat.down_k) || kbp(rpg->stat.up_k)
    || kbp(rpg->stat.right_k))
        display_footprint(rpg);
    draw_pnj(rpg);
    sfRenderWindow_drawSprite(rw, rpg->perso.img_sprite, NULL);
    draw_sword(rpg);
    sfRenderWindow_drawSprite(rw, rpg->map_h.img_sprite, NULL);
    if (rpg->pnjs.cat[10].draw == rpg->zone)
        sfRenderWindow_drawSprite(rw, rpg->pnjs.cat[10].img_sprite, NULL);
    if (rpg->zone == 10)
        display_snow(rpg);
    if (rpg->animes.brouillard.draw == rpg->zone)
        sfRenderWindow_drawSprite(rw, rpg->animes.brouillard.img_sprite, NULL);
    display_inventory(rpg);
}
