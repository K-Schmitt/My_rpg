/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** actu_quete.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static int cat_to_gold(RPG *rpg)
{
    for (int i = 0; i < 16; i++) {
        if (rpg->inv.id_item[i] == 10) {
            int nb_chat = rpg->inv.nb_item[i];
            rpg->inv.nb_item[i] = 0;
            rpg->inv.occup[i] = 0;
            rpg->stat.coin += nb_chat * 10;
        }
    }
    return (0);
}

void init_quete(RPG *rpg)
{
    rpg->quete.cowboy = 0;
    rpg->quete.quete_chat = 0;
    rpg->quete.boss1 = 0;
    rpg->quete.sortie_epee = 0;
    rpg->quete.b1_p1 = 0;
    rpg->quete.b2_p1 = 0;
    rpg->quete.b3_p1 = 0;
    rpg->quete.b1_p2 = 0;
    rpg->quete.b2_p2 = 0;
    rpg->quete.b3_p2 = 0;
    rpg->quete.b1_p3 = 0;
    rpg->quete.b2_p3 = 0;
    rpg->quete.b3_p3 = 0;
    rpg->perso.r = 0;
    rpg->quete.lucas = 0;
}

static void actu_quete_chat(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(rpg->pnjs.folle.img_sprite);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.folle.draw == rpg->zone && MyKeyinter &&
    rpg->quete.quete_chat == 1)
        start_dialogue_action(rpg, "./assets/dialogue/folle.txt", 9,
        &cat_to_gold);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.folle.draw == rpg->zone && MyKeyinter &&
    rpg->quete.quete_chat == 0)
        start_dialogue_opt(rpg, "./assets/dialogue/folle.txt", 6,
        &rpg->quete.quete_chat);
}

static void actu_quete_cowboy(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(rpg->pnjs.cowboy.img_sprite);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.cowboy.draw == rpg->zone && MyKeyinter && rpg->quete.cowboy == 0)
        start_dialogue_opt(rpg, "./assets/dialogue/cowboy.txt", 7,
        &rpg->quete.cowboy);
    if (rpg->adv.spider[0].draw == 0 && rpg->adv.spider[1].draw == 0 &&
    rpg->adv.spider[2].draw == 0 && rpg->adv.spider[3].draw == 0 &&
    rpg->quete.cowboy == 1)
        rpg->quete.cowboy = 2;
}

void actu_quete(RPG *rpg)
{
    actu_quete_chat(rpg);
    actu_quete_cowboy(rpg);
}
