/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** weapons
*/

#include "../../../include/csfmlib.h"

void use_pistol(RPG *rpg)
{
    if (check_in_inv(rpg, 4) == 0) {
        return;
    }
    remove_in_inv(rpg, 4);
    float test = calc_damage(20, 60);
    rpg->fight->ennemy->life -= test * (rpg->stat.attack * 1.25);
    rpg->fight->my_round = sfFalse;
}

void use_spell(RPG *rpg)
{
    float test = calc_damage(40, 15);
    rpg->fight->ennemy->life -= test * (rpg->stat.attack * 1.25);
    rpg->fight->my_round = sfFalse;
}
