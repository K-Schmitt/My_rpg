/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_mage(RPG *rpg)
{
    rpg->adv.mage = malloc(sizeof(stockennemie) * 5);
    for (int i = 0; i < 4; i++) {
        create_entity(&rpg->adv.mage[i], "./assets/enemy/mage.png",
        vecf(1, 1), veci(32, 32));
        rpg->adv.mage[i].z.left = 0;
        rpg->adv.mage[i].z.top = 32 * 0;
        sfSprite_setTextureRect(rpg->adv.mage[i].img_sprite,
        rpg->adv.mage[i].z);
        sfSprite_setScale(rpg->adv.mage[i].img_sprite,
        rpg->adv.mage[i].scale);
        rpg->adv.mage[i].state = 0;
        rpg->adv.mage[i].Clock = sfClock_create();
        rpg->adv.mage[i].sizeX = 96;
    }
}

static void init_mage2(RPG *rpg)
{
    rpg->adv.mage[1].lvl = 8;
    sfSprite_setPosition(rpg->adv.mage[2].img_sprite,
    rpg->adv.mage[2].pos);
    rpg->adv.mage[2].draw = 12;
    rpg->adv.mage[2].max_life = 110;
    rpg->adv.mage[2].degat = 24;
    rpg->adv.mage[2].xp = 80;
    rpg->adv.mage[2].lvl = 7;
    sfSprite_setPosition(rpg->adv.mage[3].img_sprite,
    rpg->adv.mage[3].pos);
    rpg->adv.mage[3].draw = 12;
    rpg->adv.mage[3].max_life = 130;
    rpg->adv.mage[3].degat = 26;
    rpg->adv.mage[3].xp = 100;
    rpg->adv.mage[3].lvl = 8;
}

void init_mage(RPG *rpg)
{
    init_all_mage(rpg);
    rpg->adv.mage[4].Clock = sfClock_create();
    rpg->adv.mage[0].pos = vecf(1200, 1184);
    rpg->adv.mage[1].pos = vecf(410, 670);
    rpg->adv.mage[2].pos = vecf(550, 278);
    rpg->adv.mage[3].pos = vecf(630, 438);
    sfSprite_setPosition(rpg->adv.mage[0].img_sprite,
    rpg->adv.mage[0].pos);
    rpg->adv.mage[0].draw = 7;
    rpg->adv.mage[0].max_life = 100;
    rpg->adv.mage[0].degat = 23;
    rpg->adv.mage[0].xp = 65;
    rpg->adv.mage[0].lvl = 5;
    sfSprite_setPosition(rpg->adv.mage[1].img_sprite,
    rpg->adv.mage[1].pos);
    rpg->adv.mage[1].draw = 6;
    rpg->adv.mage[1].max_life = 120;
    rpg->adv.mage[1].degat = 26;
    rpg->adv.mage[1].xp = 100;
    init_mage2(rpg);
}

void actu_mage(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    float distance = 15 / rpg->gfps.fps;
    for (int i = 0; i < 4; i++) {
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->adv.mage[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->adv.mage[i].draw == rpg->zone) {
            fight(rpg, &rpg->adv.mage[i]);
        }
        if (i <= 1)
            set_patern(&rpg->adv.mage[i], distance, vecf(30, 30),
            rpg->adv.mage[4].Clock);
        if (i > 1 && i <= 3)
            set_patern(&rpg->adv.mage[i], distance, vecf(45, 45),
            rpg->adv.mage[4].Clock);
        move_entity(&rpg->adv.mage[i], distance);
    }
}

void draw_mage(RPG *rpg)
{
    for (int i = 0; i < 4; i++) {
        if (rpg->adv.mage[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->adv.mage[i].img_sprite, NULL);
    }
}
