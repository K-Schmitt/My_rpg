/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** spider.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_spider4(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.spider[6].img_sprite,
    rpg->adv.spider[6].pos);
    rpg->adv.spider[6].draw = 6;
    rpg->adv.spider[6].degat = 14;
    rpg->adv.spider[6].xp = 39;
    rpg->adv.spider[6].lvl = 5;
    rpg->adv.spider[6].max_life = 50;
}

static void init_spider3(RPG *rpg)
{
    rpg->adv.spider[3].xp = 33;
    rpg->adv.spider[3].lvl = 2;
    rpg->adv.spider[3].max_life = 30;
    sfSprite_setPosition(rpg->adv.spider[4].img_sprite,
    rpg->adv.spider[4].pos);
    rpg->adv.spider[4].draw = 6;
    rpg->adv.spider[4].degat = 13;
    rpg->adv.spider[4].xp = 39;
    rpg->adv.spider[4].lvl = 5;
    rpg->adv.spider[4].max_life = 40;
    sfSprite_setPosition(rpg->adv.spider[5].img_sprite,
    rpg->adv.spider[5].pos);
    rpg->adv.spider[5].draw = 6;
    rpg->adv.spider[5].degat = 13;
    rpg->adv.spider[5].xp = 43;
    rpg->adv.spider[5].lvl = 4;
    rpg->adv.spider[5].max_life = 35;
    init_spider4(rpg);
}

static void init_spider2(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.spider[1].img_sprite,
    rpg->adv.spider[1].pos);
    rpg->adv.spider[1].draw = 4;
    rpg->adv.spider[1].degat = 9;
    rpg->adv.spider[1].xp = 33;
    rpg->adv.spider[1].lvl = 2;
    rpg->adv.spider[1].max_life = 30;
    sfSprite_setPosition(rpg->adv.spider[2].img_sprite,
    rpg->adv.spider[2].pos);
    rpg->adv.spider[2].draw = 4;
    rpg->adv.spider[2].degat = 11;
    rpg->adv.spider[2].xp = 45;
    rpg->adv.spider[2].lvl = 5;
    rpg->adv.spider[2].max_life = 32;
    sfSprite_setPosition(rpg->adv.spider[3].img_sprite,
    rpg->adv.spider[3].pos);
    rpg->adv.spider[3].draw = 4;
    rpg->adv.spider[3].degat = 9;
    init_spider3(rpg);
}

void init_spider(RPG *rpg)
{
    init_all_spider(rpg);
    rpg->adv.spider[7].Clock = sfClock_create();
    rpg->adv.spider[0].pos = vecf(500, 995);
    rpg->adv.spider[1].pos = vecf(720, 760);
    rpg->adv.spider[2].pos = vecf(780, 1000);
    rpg->adv.spider[3].pos = vecf(980, 480);
    rpg->adv.spider[4].pos = vecf(380, 300);
    rpg->adv.spider[5].pos = vecf(220, 260);
    rpg->adv.spider[6].pos = vecf(520, 260);
    sfSprite_setPosition(rpg->adv.spider[0].img_sprite,
    rpg->adv.spider[0].pos);
    rpg->adv.spider[0].draw = 4;
    rpg->adv.spider[0].degat = 8;
    rpg->adv.spider[0].xp = 30;
    rpg->adv.spider[0].lvl = 1;
    rpg->adv.spider[0].max_life = 25;
    init_spider2(rpg);
}
