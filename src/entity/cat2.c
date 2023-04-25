/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_chat4(RPG *rpg)
{
    sfSprite_setPosition(rpg->pnjs.cat[24].img_sprite, vecf(445, 75));
    rpg->pnjs.cat[24].draw = 11;
    sfSprite_setPosition(rpg->pnjs.cat[25].img_sprite, vecf(380, 180));
    rpg->pnjs.cat[25].draw = 11;
    sfSprite_setPosition(rpg->pnjs.cat[26].img_sprite, vecf(304, 256));
    rpg->pnjs.cat[26].draw = 12;
    sfSprite_setPosition(rpg->pnjs.cat[27].img_sprite, vecf(720, 496));
    rpg->pnjs.cat[27].draw = 12;
    sfSprite_setPosition(rpg->pnjs.cat[28].img_sprite, vecf(272, 576));
    rpg->pnjs.cat[28].draw = 12;
}

static void init_chat3(RPG *rpg)
{
    sfSprite_setPosition(rpg->pnjs.cat[18].img_sprite, vecf(1392, 1120));
    rpg->pnjs.cat[18].draw = 7;
    sfSprite_setPosition(rpg->pnjs.cat[19].img_sprite, vecf(160, 25));
    rpg->pnjs.cat[19].draw = 8;
    sfSprite_setPosition(rpg->pnjs.cat[20].img_sprite, vecf(64, 176));
    rpg->pnjs.cat[20].draw = 8;
    sfSprite_setPosition(rpg->pnjs.cat[21].img_sprite, vecf(960, 416));
    rpg->pnjs.cat[21].draw = 10;
    sfSprite_setPosition(rpg->pnjs.cat[22].img_sprite, vecf(1040, 320));
    rpg->pnjs.cat[22].draw = 10;
    sfSprite_setPosition(rpg->pnjs.cat[23].img_sprite, vecf(1208, 135));
    rpg->pnjs.cat[23].draw = 10;
    init_chat4(rpg);
}

void init_chat2(RPG *rpg)
{
    sfSprite_setPosition(rpg->pnjs.cat[9].img_sprite, vecf(290, 150));
    rpg->pnjs.cat[9].draw = 5;
    sfSprite_setPosition(rpg->pnjs.cat[10].img_sprite, vecf(125, 86));
    rpg->pnjs.cat[10].draw = 5;
    sfSprite_setPosition(rpg->pnjs.cat[11].img_sprite, vecf(1280, 992));
    rpg->pnjs.cat[11].draw = 7;
    sfSprite_setPosition(rpg->pnjs.cat[12].img_sprite, vecf(1344, 832));
    rpg->pnjs.cat[12].draw = 7;
    sfSprite_setPosition(rpg->pnjs.cat[13].img_sprite, vecf(360, 1295));
    rpg->pnjs.cat[13].draw = 6;
    sfSprite_setPosition(rpg->pnjs.cat[14].img_sprite, vecf(1060, 1335));
    rpg->pnjs.cat[14].draw = 6;
    sfSprite_setPosition(rpg->pnjs.cat[15].img_sprite, vecf(375, 945));
    rpg->pnjs.cat[15].draw = 6;
    sfSprite_setPosition(rpg->pnjs.cat[16].img_sprite, vecf(640, 250));
    rpg->pnjs.cat[16].draw = 6;
    sfSprite_setPosition(rpg->pnjs.cat[17].img_sprite, vecf(220, 220));
    rpg->pnjs.cat[17].draw = 6;
    init_chat3(rpg);
}
