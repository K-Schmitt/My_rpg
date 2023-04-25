/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** collision
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static int teleport_hub5(RPG *rpg)
{
    if (rpg->zone == 11) {
        if (teleport_bar3_map3(rpg) == 1)
            return (0);
        if (teleport_bar3_map4(rpg) == 1)
            return (0);
    }
    if (rpg->zone == 13)
        if (teleport_volcan_map4(rpg) == 1)
            return (0);
    return (1);
}

int teleport_hub4(RPG *rpg)
{
    if (rpg->zone == 7)
        if (teleport_map2_map3(rpg) == 1)
            return (0);
    if (rpg->zone == 8)
        if (teleport_house3_map2(rpg) == 1)
            return (0);
    if (rpg->zone == 10) {
        if (teleport_map3_bar3(rpg) == 1)
            return (0);
        if (teleport_map3_map2(rpg) == 1)
            return (0);
    }
    if (rpg->zone == 12) {
        if (teleport_map4_bar3(rpg) == 1)
            return (0);
        if (teleport_map4_volcan(rpg) == 1)
            return (0);
    }
    teleport_hub5(rpg);
    return (1);
}
