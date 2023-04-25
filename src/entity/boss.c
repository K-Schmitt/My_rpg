/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_boss(RPG *rpg)
{
    rpg->adv.boss = malloc(sizeof(stockennemie) * 5);
    for (int i = 0; i < 3; i++) {
        create_entity(&rpg->adv.boss[i], "./assets/enemy/boss1.png",
        vecf(1, 1), veci(32, 32));
        rpg->adv.boss[i].z.left = 32;
        rpg->adv.boss[i].z.top = 0;
        sfSprite_setTextureRect(rpg->adv.boss[i].img_sprite,
        rpg->adv.boss[i].z);
        sfSprite_setScale(rpg->adv.boss[i].img_sprite,
        rpg->adv.boss[i].scale);
        rpg->adv.boss[i].state = 0;
        rpg->adv.boss[i].Clock = sfClock_create();
        rpg->adv.boss[i].sizeX = 96;
    }
}

void init_boss(RPG *rpg)
{
    init_all_boss(rpg);
    rpg->adv.boss[0].pos = vecf(940, 800);
    sfSprite_setPosition(rpg->adv.boss[0].img_sprite,
    rpg->adv.boss[0].pos);
    rpg->adv.boss[0].draw = 6;
    rpg->adv.boss[0].max_life = 150;
    rpg->adv.boss[0].degat = 18;
    rpg->adv.boss[0].xp = 160;
    rpg->adv.boss[0].lvl = 8;
}

void actu_boss(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    for (int i = 0; i < 1; i++) {
        int fightres = 1;
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->adv.boss[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->adv.boss[i].draw == rpg->zone) {
            fightres = fight(rpg, &rpg->adv.boss[i]) == 0;
        }
        if (fightres == 1) {
            rpg->quete.boss1 = 1;
        }
    }
}

void draw_boss(RPG *rpg)
{
    for (int i = 0; i < 1; i++) {
        if (rpg->adv.boss[i].draw == rpg->zone && rpg->quete.boss1 == 0)
            sfRenderWindow_drawSprite(rw, rpg->adv.boss[i].img_sprite, NULL);
    }
}
