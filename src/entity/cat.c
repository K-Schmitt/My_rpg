/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_all_chat(RPG *rpg)
{
    int x = 0;
    int y = 0;
    rpg->pnjs.cat = malloc(sizeof(stocksprite) * 45);
    for (int i = 0; i < 32; i++) {
        create_perso(&rpg->pnjs.cat[i], "./assets/pnj/cat.png", vecf(0.6, 0.6),
        veci(32, 32));
        if (x >= 15) {
            x = 0;
            y++;
        }
        rpg->pnjs.cat[i].z.left = 32 * x;
        rpg->pnjs.cat[i].z.top = 32 * y;
        x++;
        sfSprite_setPosition(rpg->pnjs.cat[i].img_sprite, rpg->pnjs.cat[i].pos);
        sfSprite_setTextureRect(rpg->pnjs.cat[i].img_sprite,
        rpg->pnjs.cat[i].z);
        sfSprite_setScale(rpg->pnjs.cat[i].img_sprite, rpg->pnjs.cat[i].scale);
    }
}

void init_chat(RPG *rpg)
{
    init_all_chat(rpg);
    sfSprite_setPosition(rpg->pnjs.cat[0].img_sprite, vecf(320, 832));
    rpg->pnjs.cat[0].draw = 1;
    sfSprite_setPosition(rpg->pnjs.cat[1].img_sprite, vecf(704, 1184));
    rpg->pnjs.cat[1].draw = 1;
    sfSprite_setPosition(rpg->pnjs.cat[2].img_sprite, vecf(368, 1080));
    rpg->pnjs.cat[2].draw = 1;
    sfSprite_setPosition(rpg->pnjs.cat[3].img_sprite, vecf(48, 48));
    rpg->pnjs.cat[3].draw = 2;
    sfSprite_setPosition(rpg->pnjs.cat[4].img_sprite, vecf(186, 96));
    rpg->pnjs.cat[4].draw = 2;
    sfSprite_setPosition(rpg->pnjs.cat[5].img_sprite, vecf(96, 80));
    rpg->pnjs.cat[5].draw = 3;
    sfSprite_setPosition(rpg->pnjs.cat[6].img_sprite, vecf(174, 43));
    rpg->pnjs.cat[6].draw = 3;
    sfSprite_setPosition(rpg->pnjs.cat[7].img_sprite, vecf(820, 1030));
    rpg->pnjs.cat[7].draw = 4;
    sfSprite_setPosition(rpg->pnjs.cat[8].img_sprite, vecf(975, 485));
    rpg->pnjs.cat[8].draw = 4;
    init_chat2(rpg);
}

void actu_cat(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    for (int i = 0; i < 29; i++) {
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->pnjs.cat[i].img_sprite);
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        MyKeyinter && rpg->pnjs.cat[i].draw == rpg->zone) {
            rpg->pnjs.cat[i].draw = 0;
            sfMusic_stop(rpg->music.meow);
            sfMusic_play(rpg->music.meow);
            push_in_inventory(rpg, 10);
        }
    }
}

void draw_cat(RPG *rpg)
{
    for (int i = 0; i < 29; i++) {
        if (rpg->pnjs.cat[i].draw == rpg->zone)
            sfRenderWindow_drawSprite(rw, rpg->pnjs.cat[i].img_sprite, NULL);
    }
}
