/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** update potion
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void update_effect(RPG *rpg)
{
    if (get(times(rpg->stat.clock_speed)) > 30 && rpg->stat.nb_speed != 0) {
        rpg->stat.nb_speed--;
        sfClock_restart(rpg->stat.clock_speed);
        rpg->stat.speed -= 0.5;
    }
    if (get(times(rpg->stat.clock_resist)) > 45 && rpg->stat.nb_resist != 0) {
        rpg->stat.nb_resist--;
        sfClock_restart(rpg->stat.clock_resist);
        rpg->stat.resist -= 0.5;
    }
    if (get(times(rpg->stat.clock_attack)) > 45 && rpg->stat.nb_attack != 0) {
        rpg->stat.nb_attack--;
        sfClock_restart(rpg->stat.clock_attack);
        rpg->stat.attack -= 0.5;
    }
}
