/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** pnj
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_pnj2(RPG *rpg)
{
    create_perso(&rpg->pnjs.folle, "./assets/pnj/folle.png", vecf(1, 1),
    veci(32, 32));
    rpg->pnjs.folle.draw = 4;
    rpg->pnjs.folle.pos = vecf(695, 340);
    create_perso(&rpg->pnjs.cowboy, "./assets/pnj/cowboy.png", vecf(1, 1),
    veci(32, 32));
    rpg->pnjs.cowboy.draw = 5;
    rpg->pnjs.cowboy.pos = vecf(86, 147);
    init_chat(rpg);
    init_spider(rpg);
    init_squel(rpg);
    init_mage(rpg);
    init_boss(rpg);
    init_dsquel(rpg);
    init_snowman(rpg);
    init_sword(rpg);
    init_barman(rpg);
}

void init_pnj(RPG *rpg)
{
    create_perso(&rpg->pnjs.archi, "./assets/pnj/archi.png", vecf(1, 1),
    veci(32, 32));
    rpg->pnjs.archi.draw = 3;
    rpg->pnjs.archi.sizeX = 96;
    rpg->pnjs.archi.pos = vecf(90, 200);
    rpg->pnjs.archi.r = 0;
    create_perso(&rpg->pnjs.lucas, "./assets/pnj/paul1.png", vecf(1, 1),
    veci(32, 32));
    rpg->pnjs.lucas.draw = 3;
    rpg->pnjs.lucas.pos = vecf(225, 28);
    init_pnj2(rpg);
}

static void draw_pnj2(RPG *rpg)
{
    draw_cat(rpg);
    draw_pique(rpg);
    draw_spider(rpg);
    draw_squel(rpg);
    draw_mage(rpg);
    draw_boss(rpg);
    draw_dsquel(rpg);
    draw_snowman(rpg);
    draw_barman(rpg);
}

void draw_pnj(RPG *rpg)
{
    if (rpg->zone == 3) {
        sfRenderWindow_drawSprite(rw, rpg->pnjs.lucas.img_sprite, NULL);
        sfRenderWindow_drawSprite(rw, rpg->pnjs.archi.img_sprite, NULL);
    }
    if (rpg->zone == 4) {
        sfRenderWindow_drawSprite(rw, rpg->pnjs.folle.img_sprite, NULL);
    }
    if (rpg->zone == 5) {
        sfRenderWindow_drawSprite(rw, rpg->pnjs.lucas.img_sprite, NULL);
        sfRenderWindow_drawSprite(rw, rpg->pnjs.cowboy.img_sprite, NULL);
    }
    if (rpg->zone == 11) {
        sfRenderWindow_drawSprite(rw, rpg->pnjs.lucas.img_sprite, NULL);
        sfRenderWindow_drawSprite(rw, rpg->pnjs.folle.img_sprite, NULL);
    }
    if (rpg->zone == 12)
        sfRenderWindow_drawSprite(rw, rpg->pnjs.lucas.img_sprite, NULL);
    draw_pnj2(rpg);
}
