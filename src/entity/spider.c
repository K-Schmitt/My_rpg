/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** spider.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_spider(RPG *rpg)
{
    rpg->adv.spider = malloc(sizeof(stockennemie) * 8);
    char *colorSP[4] = {"./assets/enemy/spiderO.png",
    "./assets/enemy/spiderV.png", "./assets/enemy/spiderR.png",
    "./assets/enemy/spiderB.png"};
    for (int i = 0; i < 8; i++) {
        create_entity(&rpg->adv.spider[i], colorSP[rand() % 4],
        vecf(0.5, 0.5), veci(64, 64));
        rpg->adv.spider[i].z.left = 0;
        rpg->adv.spider[i].z.top = 64 * 12;
        sfSprite_setTextureRect(rpg->adv.spider[i].img_sprite,
        rpg->adv.spider[i].z);
        sfSprite_setScale(rpg->adv.spider[i].img_sprite,
        rpg->adv.spider[i].scale);
        rpg->adv.spider[i].state = 0;
        rpg->adv.spider[i].Clock = sfClock_create();
        rpg->adv.spider[i].sizeX = 512;
    }
}

void actu_spider(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    float distance = 30 / rpg->gfps.fps;
    for (int i = 0; i < 7; i++) {
        sfSprite_setScale(rpg->adv.spider[i].img_sprite, vecf(0.5, 0.5));
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->adv.spider[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->adv.spider[i].draw == rpg->zone && rpg->cheat == 0) {
            fight(rpg, &rpg->adv.spider[i]);
        }
        if (i <= 2)
            set_patern(&rpg->adv.spider[i], distance, vecf(45, 45),
            rpg->adv.spider[7].Clock);
        if (i > 2 && i <= 6)
            set_patern(&rpg->adv.spider[i], distance, vecf(15, 15),
            rpg->adv.spider[7].Clock);
        move_entity2(&rpg->adv.spider[i], distance);
    }
}

void draw_spider(RPG *rpg)
{
    for (int i = 0; i < 7; i++) {
        if (rpg->adv.spider[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->adv.spider[i].img_sprite, NULL);
    }
}
