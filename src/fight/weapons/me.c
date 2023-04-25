/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** me
*/

#include "../../../include/csfmlib.h"

void use_whisky2(RPG *rpg)
{
    if (check_in_inv(rpg, 6) == 0)
        return;
    remove_in_inv(rpg, 6);
    rpg->stat.life += 60;
    if (rpg->stat.life > rpg->stat.max_life)
        rpg->stat.life = rpg->stat.max_life;
    rpg->fight->my_round = sfFalse;
}

void use_cactus2(RPG *rpg)
{
    if (check_in_inv(rpg, 7) == 0)
        return;
    remove_in_inv(rpg, 7);
    rpg->fight->my_round = sfFalse;
}

void use_mushroom2(RPG *rpg)
{
    if (check_in_inv(rpg, 8) == 0)
        return;
    remove_in_inv(rpg, 8);
    rpg->fight->my_round = sfFalse;
}

void use_potion2(RPG *rpg)
{
    if (check_in_inv(rpg, 9) == 0)
        return;
    remove_in_inv(rpg, 9);
    rpg->fight->my_round = sfFalse;
}
