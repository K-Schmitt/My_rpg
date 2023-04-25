/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_dsquel(RPG *rpg)
{
    rpg->adv.dsquel = malloc(sizeof(stockennemie) * 6);
    for (int i = 0; i < 5; i++) {
        create_entity(&rpg->adv.dsquel[i], "./assets/enemy/darksquel.png",
        vecf(1, 1), veci(32, 32));
        rpg->adv.dsquel[i].z.left = 0;
        rpg->adv.dsquel[i].z.top = 32 * 0;
        sfSprite_setTextureRect(rpg->adv.dsquel[i].img_sprite,
        rpg->adv.dsquel[i].z);
        sfSprite_setScale(rpg->adv.dsquel[i].img_sprite,
        rpg->adv.dsquel[i].scale);
        rpg->adv.dsquel[i].state = 0;
        rpg->adv.dsquel[i].Clock = sfClock_create();
        rpg->adv.dsquel[i].sizeX = 96;
    }
}

void init_dsquel(RPG *rpg)
{
    init_all_dsquel(rpg);
    rpg->adv.dsquel[5].Clock = sfClock_create();
    rpg->adv.dsquel[0].pos = vecf(100, 230);
    rpg->adv.dsquel[1].pos = vecf(770, 100);
    rpg->adv.dsquel[2].pos = vecf(16, 138);
    rpg->adv.dsquel[3].pos = vecf(304, 304);
    rpg->adv.dsquel[4].pos = vecf(464, 176);
    sfSprite_setPosition(rpg->adv.dsquel[0].img_sprite,
    rpg->adv.dsquel[0].pos);
    rpg->adv.dsquel[0].draw = 6;
    rpg->adv.dsquel[0].max_life = 80;
    rpg->adv.dsquel[0].degat = 22;
    rpg->adv.dsquel[0].xp = 55;
    rpg->adv.dsquel[0].lvl = 3;
    init_dsquel2(rpg);
}

void actu_dsquel(RPG *rpg)
{
    float distance = 15 / rpg->gfps.fps;
    for (int i = 0; i < 5; i++) {
        sfSprite_setTextureRect(rpg->adv.dsquel[i].img_sprite,
        rpg->adv.dsquel[i].z);
        action_dsquel(rpg, rpg->adv.dsquel[i], i);
        (i == 0) ? set_paternv(&rpg->adv.dsquel[i], distance, vecf(150, 150),
            rpg->adv.dsquel[5].Clock) : 0;
        (i == 1 || 2) ? set_paternh(&rpg->adv.dsquel[i], distance,
        vecf(150, 150)) : 0;
        move_entity(&rpg->adv.dsquel[i], distance);
    }
}

void draw_dsquel(RPG *rpg)
{
    for (int i = 0; i < 5; i++) {
        if (rpg->adv.dsquel[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->adv.dsquel[i].img_sprite, NULL);
    }
}
