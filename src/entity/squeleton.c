/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_squel(RPG *rpg)
{
    rpg->adv.squel = malloc(sizeof(stockennemie) * 9);
    for (int i = 0; i < 6; i++) {
        create_entity(&rpg->adv.squel[i], "./assets/enemy/squel.png",
        vecf(1, 1), veci(32, 32));
        rpg->adv.squel[i].z.left = 0;
        rpg->adv.squel[i].z.top = 32 * 0;
        sfSprite_setTextureRect(rpg->adv.squel[i].img_sprite,
        rpg->adv.squel[i].z);
        sfSprite_setScale(rpg->adv.squel[i].img_sprite,
        rpg->adv.squel[i].scale);
        rpg->adv.squel[i].state = 0;
        rpg->adv.squel[i].Clock = sfClock_create();
        rpg->adv.squel[i].sizeX = 96;
    }
}

void actu_squel(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    float distance = 30 / rpg->gfps.fps;
    for (int i = 0; i < 6; i++) {
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->adv.squel[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->adv.squel[i].draw == rpg->zone) {
            fight(rpg, &rpg->adv.squel[i]);
        }
        set_patern(&rpg->adv.squel[i], distance, vecf(48, 48),
        rpg->adv.squel[7].Clock);
        move_entity(&rpg->adv.squel[i], distance);
    }
}

void draw_squel(RPG *rpg)
{
    for (int i = 0; i < 6; i++) {
        if (rpg->adv.squel[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->adv.squel[i].img_sprite, NULL);
    }
}
