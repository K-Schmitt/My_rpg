/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** chat.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>


void init_dsquel3(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.dsquel[3].img_sprite,
    rpg->adv.dsquel[3].pos);
    rpg->adv.dsquel[3].draw = 12;
    rpg->adv.dsquel[3].max_life = 120;
    rpg->adv.dsquel[3].degat = 23;
    rpg->adv.dsquel[3].xp = 83;
    rpg->adv.dsquel[3].lvl = 7;
    sfSprite_setPosition(rpg->adv.dsquel[4].img_sprite,
    rpg->adv.dsquel[4].pos);
    rpg->adv.dsquel[4].draw = 12;
    rpg->adv.dsquel[4].max_life = 120;
    rpg->adv.dsquel[4].degat = 23;
    rpg->adv.dsquel[4].xp = 83;
    rpg->adv.dsquel[4].lvl = 7;
}

void init_dsquel2(RPG *rpg)
{
    sfSprite_setPosition(rpg->adv.dsquel[1].img_sprite,
    rpg->adv.dsquel[1].pos);
    rpg->adv.dsquel[1].draw = 6;
    rpg->adv.dsquel[1].max_life = 100;
    rpg->adv.dsquel[1].degat = 20;
    rpg->adv.dsquel[1].xp = 60;
    rpg->adv.dsquel[1].lvl = 4;
    sfSprite_setPosition(rpg->adv.dsquel[2].img_sprite,
    rpg->adv.dsquel[2].pos);
    rpg->adv.dsquel[2].draw = 8;
    rpg->adv.dsquel[2].max_life = 110;
    rpg->adv.dsquel[2].degat = 21;
    rpg->adv.dsquel[2].xp = 60;
    rpg->adv.dsquel[2].lvl = 5;
    init_dsquel3(rpg);
}

void action_dsquel(RPG *rpg, stockennemie bob, int i)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(
    bob.img_sprite);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    bob.draw == rpg->zone) {
        (i == 2) ? start_dialogue(rpg, "./assets/dialogue/dsquel.txt", 6)
        : 0;
        fight(rpg, &rpg->adv.dsquel[i]);
    }
}
