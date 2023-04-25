/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** pique.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_pos_pique2(RPG *rpg)
{
    sfSprite_setPosition(rpg->quete.pique[8].img_sprite, vecf(260, 640));
    rpg->quete.pique[8].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[9].img_sprite, vecf(280, 640));
    rpg->quete.pique[9].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[10].img_sprite, vecf(336, 544));
    rpg->quete.pique[10].draw = 12;
    sfSprite_setPosition(rpg->quete.pique[11].img_sprite, vecf(352, 544));
    rpg->quete.pique[11].draw = 12;
}
