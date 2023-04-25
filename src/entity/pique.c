/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** pique.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_pos_pique(RPG *rpg)
{
    sfSprite_setPosition(rpg->quete.pique[0].img_sprite, vecf(520, 1260));
    rpg->quete.pique[0].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[1].img_sprite, vecf(520, 1280));
    rpg->quete.pique[1].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[2].img_sprite, vecf(1040, 1040));
    rpg->quete.pique[2].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[3].img_sprite, vecf(1060, 1040));
    rpg->quete.pique[3].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[4].img_sprite, vecf(1080, 1040));
    rpg->quete.pique[4].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[5].img_sprite, vecf(1100, 1040));
    rpg->quete.pique[5].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[6].img_sprite, vecf(840, 640));
    rpg->quete.pique[6].draw = 6;
    sfSprite_setPosition(rpg->quete.pique[7].img_sprite, vecf(860, 640));
    rpg->quete.pique[7].draw = 6;
    init_pos_pique2(rpg);
}

void init_pique(RPG *rpg)
{
    rpg->quete.pique = malloc(sizeof(stocksprite) * 12);
    for (int i = 0; i < 12; i++) {
        create_perso(&rpg->quete.pique[i], "./assets/obj/pique.png", vecf(1, 1),
        veci(20, 20));
        rpg->quete.pique[i].z.left = 0;
        rpg->quete.pique[i].z.top = 0;
        sfSprite_setTextureRect(rpg->quete.pique[i].img_sprite,
        rpg->quete.pique[i].z);
        sfSprite_setScale(rpg->quete.pique[i].img_sprite,
        rpg->quete.pique[i].scale);
    }
    init_pos_pique(rpg);
}

static void actu_pique2(RPG *rpg)
{
    if (rpg->quete.b1_p3 == 1 && rpg->quete.b2_p3 == 1 &&
    rpg->quete.b3_p3 == 1) {
        rpg->quete.pique[8].z.top = 20;
        rpg->quete.pique[9].z.top = 20;
    }
    if (rpg->quete.lucas == 1) {
        rpg->quete.pique[10].z.top = 20;
        rpg->quete.pique[11].z.top = 20;
        sfSprite_setTextureRect(rpg->quete.pique[10].img_sprite,
        rpg->quete.pique[10].z);
        sfSprite_setTextureRect(rpg->quete.pique[11].img_sprite,
        rpg->quete.pique[11].z);
    }
}

void actu_pique(RPG *rpg)
{
    if (rpg->quete.b1_p1 == 1 && rpg->quete.b2_p1 == 1 &&
    rpg->quete.b3_p1 == 1) {
        rpg->quete.pique[0].z.top = 20;
        rpg->quete.pique[1].z.top = 20;
    }
    if (rpg->quete.b1_p2 == 1 && rpg->quete.b2_p2 == 1 &&
    rpg->quete.b3_p2 == 1) {
        rpg->quete.pique[2].z.top = 20;
        rpg->quete.pique[3].z.top = 20;
        rpg->quete.pique[4].z.top = 20;
        rpg->quete.pique[5].z.top = 20;
    }
    if (rpg->quete.boss1 == 1) {
        rpg->quete.pique[6].z.top = 20;
        rpg->quete.pique[7].z.top = 20;
    }
    actu_pique2(rpg);
}

void draw_pique(RPG *rpg)
{
    for (int i = 0; i < 10; i++) {
        if (rpg->quete.pique[i].draw == rpg->zone) {
            sfSprite_setTextureRect(rpg->quete.pique[i].img_sprite,
            rpg->quete.pique[i].z);
            sfRenderWindow_drawSprite(rw, rpg->quete.pique[i].img_sprite, NULL);
        }
    }
}
