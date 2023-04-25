/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_barman(RPG *rpg)
{
    rpg->pnjs.barman = malloc(sizeof(stockennemie) * 5);
    for (int i = 0; i < 4; i++) {
        create_entity(&rpg->pnjs.barman[i], "./assets/pnj/barman.png",
        vecf(1, 1), veci(32, 32));
        rpg->pnjs.barman[i].z.left = 32;
        rpg->pnjs.barman[i].z.top = 64;
        sfSprite_setTextureRect(rpg->pnjs.barman[i].img_sprite,
        rpg->pnjs.barman[i].z);
        sfSprite_setScale(rpg->pnjs.barman[i].img_sprite,
        rpg->pnjs.barman[i].scale);
        rpg->pnjs.barman[i].state = 0;
        rpg->pnjs.barman[i].Clock = sfClock_create();
        rpg->pnjs.barman[i].sizeX = 96;
    }
}

void init_barman(RPG *rpg)
{
    init_all_barman(rpg);
    rpg->pnjs.barman[4].Clock = sfClock_create();
    rpg->pnjs.barman[0].pos = vecf(105, 55);
    rpg->pnjs.barman[1].pos = vecf(305, 55);
    rpg->pnjs.barman[2].pos = vecf(112, 235);
    sfSprite_setPosition(rpg->pnjs.barman[0].img_sprite,
    rpg->pnjs.barman[0].pos);
    rpg->pnjs.barman[0].draw = 5;
    sfSprite_setPosition(rpg->pnjs.barman[1].img_sprite,
    rpg->pnjs.barman[1].pos);
    rpg->pnjs.barman[1].draw = 11;
    sfSprite_setPosition(rpg->pnjs.barman[2].img_sprite,
    rpg->pnjs.barman[2].pos);
    rpg->pnjs.barman[2].draw = 13;
    rpg->pnjs.barman[2].max_life = 150;
    rpg->pnjs.barman[2].degat = 25;
    rpg->pnjs.barman[2].xp = 200;
    rpg->pnjs.barman[2].lvl = 10;
}

void actu_barman(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    float distance = 15 / rpg->gfps.fps;
    int win = 1;
    for (int i = 0; i < 3; i++) {
        sfSprite_setTextureRect(rpg->pnjs.barman[i].img_sprite,
        rpg->pnjs.barman[i].z);
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->pnjs.barman[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->zone == 13) {
            start_dialogue(rpg, "./assets/dialogue/barman.txt", 12);
            win = fight(rpg, &rpg->pnjs.barman[2]);
        }
        if (win == 0)
            start_dialogue(rpg, "./assets/dialogue/barman.txt", 9);
        if (i != 2) {
            set_paternh(&rpg->pnjs.barman[i], distance, vecf(65, 65));
            move_entity(&rpg->pnjs.barman[i], distance);
        }
    }
}

void draw_barman(RPG *rpg)
{
    for (int i = 0; i < 3; i++) {
        if (rpg->pnjs.barman[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->pnjs.barman[i].img_sprite, NULL);
    }
}
