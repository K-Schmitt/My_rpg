/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** weapons
*/

#include "../../../include/csfmlib.h"

float calc_damage(float damage, int pourcent)
{
    float calc = (rand() % pourcent) / 100.0;

    if (rand() % 2) {
        damage = damage + (damage * calc);
    } else {
        damage = damage - (damage * calc);
    }
    return (damage);
}

void use_stick(RPG *rpg)
{
    float test = calc_damage(8, 30);
    rpg->fight->ennemy->life -= test * (rpg->stat.attack * 1.25);
    rpg->fight->my_round = sfFalse;
}

void use_sword(RPG *rpg)
{
    float test = calc_damage(30, 30);
    rpg->fight->ennemy->life -= test * (rpg->stat.attack * 1.25);
    rpg->fight->my_round = sfFalse;
}

void use_hand(RPG *rpg)
{
    float test = calc_damage(2, 70);
    rpg->fight->ennemy->life -= test * (rpg->stat.attack * 1.25);
    rpg->fight->my_round = sfFalse;
}
