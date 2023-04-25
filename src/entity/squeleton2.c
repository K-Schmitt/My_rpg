/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_squel4(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.squel[5].img_sprite,
    rpg->adv.squel[5].pos);
    rpg->adv.squel[5].draw = 6;
    rpg->adv.squel[5].max_life = 70;
    rpg->adv.squel[5].degat = 16;
    rpg->adv.squel[5].xp = 40;
    rpg->adv.squel[5].lvl = 5;
}

static void init_squel3(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.squel[4].img_sprite,
    rpg->adv.squel[4].pos);
    rpg->adv.squel[4].draw = 6;
    rpg->adv.squel[4].max_life = 75;
    rpg->adv.squel[4].degat = 18;
    rpg->adv.squel[4].xp = 43;
    rpg->adv.squel[4].lvl = 6;
    sfSprite_setPosition(rpg->adv.squel[3].img_sprite,
    rpg->adv.squel[3].pos);
    rpg->adv.squel[3].draw = 6;
    rpg->adv.squel[3].max_life = 80;
    rpg->adv.squel[3].degat = 20;
    rpg->adv.squel[3].xp = 55;
    rpg->adv.squel[3].lvl = 7;
    init_squel4(rpg);
}

static void init_squel2(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.squel[1].img_sprite,
    rpg->adv.squel[1].pos);
    rpg->adv.squel[1].draw = 7;
    rpg->adv.squel[1].max_life = 65;
    rpg->adv.squel[1].degat = 15;
    rpg->adv.squel[1].xp = 43;
    rpg->adv.squel[1].lvl = 4;
    sfSprite_setPosition(rpg->adv.squel[2].img_sprite,
    rpg->adv.squel[2].pos);
    rpg->adv.squel[2].draw = 7;
    rpg->adv.squel[2].max_life = 75;
    rpg->adv.squel[2].degat = 18;
    rpg->adv.squel[2].xp = 40;
    rpg->adv.squel[2].lvl = 6;
    init_squel3(rpg);
}

void init_squel(RPG *rpg)
{
    init_all_squel(rpg);
    rpg->adv.squel[7].Clock = sfClock_create();
    rpg->adv.squel[0].pos = vecf(1240, 920);
    rpg->adv.squel[1].pos = vecf(986, 1048);
    rpg->adv.squel[2].pos = vecf(1146, 1146);
    rpg->adv.squel[3].pos = vecf(200, 920);
    rpg->adv.squel[4].pos = vecf(80, 740);
    rpg->adv.squel[5].pos = vecf(1014, 920);
    sfSprite_setPosition(rpg->adv.squel[0].img_sprite,
    rpg->adv.squel[0].pos);
    rpg->adv.squel[0].draw = 7;
    rpg->adv.squel[0].max_life = 60;
    rpg->adv.squel[0].degat = 13;
    rpg->adv.squel[0].xp = 40;
    rpg->adv.squel[0].lvl = 2;
    init_squel2(rpg);
}
