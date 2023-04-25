/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_snowman(RPG *rpg)
{
    rpg->adv.snowman = malloc(sizeof(stockennemie) * 5);
    for (int i = 0; i < 4; i++) {
        create_entity(&rpg->adv.snowman[i], "./assets/enemy/snowman.png",
        vecf(1, 1), veci(32, 32));
        rpg->adv.snowman[i].z.left = 0;
        rpg->adv.snowman[i].z.top = 32 * 0;
        sfSprite_setTextureRect(rpg->adv.snowman[i].img_sprite,
        rpg->adv.snowman[i].z);
        sfSprite_setScale(rpg->adv.snowman[i].img_sprite,
        rpg->adv.snowman[i].scale);
        rpg->adv.snowman[i].state = 0;
        rpg->adv.snowman[i].Clock = sfClock_create();
        rpg->adv.snowman[i].sizeX = 96;
    }
}

static void init_snowman2(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.snowman[2].img_sprite,
    rpg->adv.snowman[2].pos);
    rpg->adv.snowman[2].draw = 10;
    rpg->adv.snowman[2].max_life = 160;
    rpg->adv.snowman[2].degat = 24;
    rpg->adv.snowman[2].xp = 89;
    rpg->adv.snowman[2].lvl = 8;
}

void init_snowman(RPG *rpg)
{
    init_all_snowman(rpg);
    rpg->adv.snowman[4].Clock = sfClock_create();
    rpg->adv.snowman[0].pos = vecf(1114, 160);
    rpg->adv.snowman[1].pos = vecf(1202, 272);
    rpg->adv.snowman[2].pos = vecf(1290, 378);
    sfSprite_setPosition(rpg->adv.snowman[0].img_sprite,
    rpg->adv.snowman[0].pos);
    rpg->adv.snowman[0].draw = 10;
    rpg->adv.snowman[0].max_life = 90;
    rpg->adv.snowman[0].degat = 23;
    rpg->adv.snowman[0].xp = 58;
    rpg->adv.snowman[0].lvl = 6;
    sfSprite_setPosition(rpg->adv.snowman[1].img_sprite,
    rpg->adv.snowman[1].pos);
    rpg->adv.snowman[1].draw = 10;
    rpg->adv.snowman[1].max_life = 100;
    rpg->adv.snowman[1].degat = 24;
    rpg->adv.snowman[1].xp = 62;
    rpg->adv.snowman[1].lvl = 8;
    init_snowman2(rpg);
}

void actu_snowman(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    float distance = 13 / rpg->gfps.fps;
    for (int i = 0; i < 3; i++) {
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->adv.snowman[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->adv.snowman[i].draw == rpg->zone) {
            fight(rpg, &rpg->adv.snowman[i]);
        }
        set_patern(&rpg->adv.snowman[i], distance, vecf(48, 48),
        rpg->adv.snowman[4].Clock);
        move_entity(&rpg->adv.snowman[i], distance);
    }
}

void draw_snowman(RPG *rpg)
{
    for (int i = 0; i < 3; i++) {
        if (rpg->adv.snowman[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->adv.snowman[i].img_sprite, NULL);
    }
}
