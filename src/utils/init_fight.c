/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** init_fight
*/

#include "../../include/csfmlib.h"
#include <stdlib.h>

void init_sprite(RPG *rpg)
{
    create_sprite(&rpg->fight->equip_bar, \
    "./assets/fight/equip.png", vecf(2, 2));
    create_sprite(&rpg->fight->equip_unusable, \
    "./assets/fight/equip_unusable.png", vecf(2, 2));
    create_sprite(&rpg->fight->equip_unusable_block, \
    "./assets/fight/equip_unusable_block.png", vecf(2, 2));
    create_sprite(&rpg->fight->select_bar, \
    "./assets/fight/select.png", vecf(2, 2));
    create_sprite(&rpg->fight->background, \
    "./assets/fight/background/volc.png", vecf(0.4, 0.4));
    rpg->fight->convex.sizeX = 576;
    create_perso(&rpg->fight->convex, \
    "./assets/fight/convex.png", vecf(0.5, 0.5), veci(64, 64));
}

void init_fight(RPG *rpg) {
    rpg->fight = malloc(sizeof(fight_t));
    init_sprite(rpg);
    for (int i = 0; i < 4; i++)
        rpg->fight->slot[i] = 0;
    rpg->fight->clock = sfClock_create();
    rpg->fight->state_player = PLAYER;
    rpg->fight->anim = malloc(sizeof(anim_fight_t));
    rpg->fight->anim->circle = sfCircleShape_create();
    rpg->fight->anim->clock = sfClock_create();
    rpg->fight->anim->duration = 3;
    rpg->fight->anim->radius = 0;
    rpg->fight->anim->time = 0;
    rpg->fight->convex.r = 0;
}
