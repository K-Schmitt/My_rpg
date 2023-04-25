/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** use potion
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void use_whisky(RPG *rpg)
{
    rpg->stat.life += 60;
    if (rpg->stat.life > rpg->stat.max_life)
        rpg->stat.life = rpg->stat.max_life;
    rpg->fight->my_round = sfFalse;
}

void use_cactus(RPG *rpg)
{
    sfClock_restart(rpg->stat.clock_speed);
    rpg->stat.speed += 0.5;
    rpg->stat.nb_speed++;
    rpg->fight->my_round = sfFalse;
}

void use_mushroom(RPG *rpg)
{
    sfClock_restart(rpg->stat.clock_resist);
    rpg->stat.resist += 1;
    rpg->stat.nb_resist++;
    rpg->fight->my_round = sfFalse;
}

void use_potion(RPG *rpg)
{
    sfClock_restart(rpg->stat.clock_attack);
    rpg->stat.attack += 1;
    rpg->stat.nb_attack++;
    rpg->fight->my_round = sfFalse;
}
