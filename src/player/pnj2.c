/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** pnj
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void actu_pnj(stocksprite *pnj)
{
    sfSprite_setTextureRect(pnj->img_sprite, pnj->z);
    sfSprite_setScale(pnj->img_sprite, pnj->scale);
    sfSprite_setPosition(pnj->img_sprite, pnj->pos);
}

static void move_brouillard(stockennemie *bob, float distance)
{
    if (bob->state == 0)
        sfSprite_move(bob->img_sprite, vecf(distance, 0));
    if (bob->state == 3)
        sfSprite_move(bob->img_sprite, vecf(- distance, - distance));
    if (bob->state == 4)
        sfSprite_move(bob->img_sprite, vecf(distance, distance));
}

static void move_pnj2(RPG *rpg)
{
    if (rpg->zone == 11) {
        rpg->pnjs.lucas.z.top = 64;
        rpg->pnjs.folle.z.top = 64;
        rpg->pnjs.lucas.pos = vecf(299, 170);
        rpg->pnjs.lucas.draw = 11;
        rpg->pnjs.folle.pos = vecf(248, 40);
        rpg->pnjs.folle.draw = 11;
    }
    if (rpg->zone == 12) {
        rpg->pnjs.lucas.z.top = 0;
        rpg->pnjs.lucas.pos = vecf(350, 170);
        rpg->pnjs.lucas.draw = 12;
    }
    actu_pnj(&rpg->pnjs.lucas);
    actu_pnj(&rpg->pnjs.archi);
    actu_pnj(&rpg->pnjs.folle);
    actu_pnj(&rpg->pnjs.cowboy);
    dialogue_pnj(rpg);
    set_paternh(&rpg->animes.brouillard, 10 / rpg->gfps.fps, vecf(40, 40));
    move_brouillard(&rpg->animes.brouillard, 10 / rpg->gfps.fps);
}

void move_pnj(RPG *rpg)
{
    rpg->pnjs.lucas.z.top = 32;
    rpg->pnjs.lucas.z.left = 32;
    rpg->pnjs.archi.z.left = 32;
    rpg->pnjs.cowboy.z.left = 32;
    rpg->pnjs.cowboy.z.top = 32;

    rpg->pnjs.folle.z.left = 32;
    if (rpg->zone == 3) {
        rpg->pnjs.archi.pos = vecf(90, 186);
        rpg->pnjs.lucas.pos = vecf(225, 28);
        rpg->pnjs.lucas.draw = 3;
    }
    if (rpg->zone == 5) {
        rpg->pnjs.lucas.pos = vecf(245, 42);
        rpg->pnjs.lucas.draw = 5;
    }
    move_pnj2(rpg);
}
