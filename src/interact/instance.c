/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** instance interact
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void interact_instance(RPG *rpg)
{
    if (rpg->zone == 1)
        interact_zone1(rpg);
    if (rpg->zone == 2)
        interact_zone2(rpg);
    if (rpg->zone == 3)
        interact_zone3(rpg);
    if (rpg->zone == 4)
        interact_zone4(rpg);
    if (rpg->zone == 5)
        interact_zone5(rpg);
    if (rpg->zone == 6)
        interact_zone6(rpg);
    if (rpg->zone == 10)
        interact_zone10(rpg);
    if (rpg->zone == 11)
        interact_zone11(rpg);
}
