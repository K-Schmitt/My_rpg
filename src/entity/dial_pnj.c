/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** entity.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

static void dialogue_pnj2(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(rpg->pnjs.lucas.img_sprite);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.lucas.draw == 11 && MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/lucas.txt", 18);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.lucas.draw == 12 && MyKeyinter && rpg->quete.lucas == 0) {
        start_dialogue(rpg, "./assets/dialogue/lucas.txt", 21);
        push_in_inventory(rpg, 5);
        rpg->quete.lucas = 1;
    }
}

void dialogue_pnj(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(rpg->pnjs.cowboy.img_sprite);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.cowboy.draw == rpg->zone && MyKeyinter && rpg->quete.cowboy == 1)
        start_dialogue(rpg, "./assets/dialogue/cowboy.txt", 11);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.cowboy.draw == rpg->zone && MyKeyinter &&
    rpg->quete.cowboy == 2) {
        start_dialogue(rpg, "./assets/dialogue/cowboy.txt", 14);
        push_in_inventory(rpg, 3);
        rpg->quete.cowboy++;
    }
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->pnjs.cowboy.draw == rpg->zone && MyKeyinter && rpg->quete.cowboy == 3)
        start_dialogue(rpg, "./assets/dialogue/cowboy.txt", 17);
    dialogue_pnj2(rpg);
}
