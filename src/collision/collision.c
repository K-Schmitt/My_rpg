/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** collision
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static int teleport_hub3(RPG *rpg)
{
    if (rpg->zone == 5) {
        if (teleport_bar_col1(rpg) == 1)
            return (0);
        if (teleport_map2_col2(rpg) == 1)
            return (0);
    }
    if (rpg->zone == 6) {
        if (teleport_col2_map2_1(rpg) == 1)
            return (0);
        if (teleport_col2_map2_2(rpg) == 1)
            return (0);
    }
    return (1);
}

static int teleport_hub2(RPG *rpg)
{
    if (rpg->zone == 2)
        if (teleport_house1_map(rpg) == 1)
            return (0);
    if (rpg->zone == 3)
        if (teleport_house2_map(rpg) == 1)
            return (0);
    if (rpg->zone == 4) {
        if (teleport_map2(rpg) == 1)
            return (0);
        if (teleport_bar1(rpg) == 1)
            return (0);
        if (teleport_map1(rpg) == 1)
            return (0);
    }
    return (1);
}

static int teleport_hub1(RPG *rpg)
{
    if (rpg->zone == 1) {
        if (teleport_map_col1(rpg) == 1)
            return (0);
        if (teleport_house2(rpg) == 1)
            return (0);
        if (teleport_house1(rpg) == 1)
            return (0);
    }
    if (rpg->zone == 7) {
        if (teleport_map2_col1(rpg) == 1)
            return (0);
        if (teleport_map2_col2(rpg) == 1)
            return (0);
        if (teleport_map2_col2_2(rpg) == 1)
            return (0);
        if (teleport_map2_house3(rpg) == 1)
            return (0);
    }
    return (1);
}

static int check_entity(RPG *rpg, int direction)
{
    if (col_cat(rpg, direction) == 1)
        return (1);
    if (col_piq(rpg, direction) == 1)
        return (1);
    if (col_pnj(rpg, &rpg->pnjs.archi, direction) == 1)
        return (1);
    if (col_pnj(rpg, &rpg->pnjs.folle, direction) == 1)
        return (1);
    if (col_ennemie(rpg, &rpg->pnjs.barman[0], direction) == 1)
        return (1);
    if (col_pnj(rpg, &rpg->pnjs.cowboy, direction) == 1)
        return (1);
    if (col_pnj(rpg, &rpg->pnjs.lucas, direction) == 1)
        return (1);
    return (0);
}

int collision(RPG *rpg, int direction)
{
    sfSprite_setTexture(rpg->test_col, rpg->collision, 0);
    if (check_entity(rpg, direction) == 1)
        return (1);
    if (teleport_hub1(rpg) == 0)
        return (0);
    if (teleport_hub2(rpg) == 0)
        return (0);
    if (teleport_hub3(rpg) == 0)
        return (0);
    if (teleport_hub4(rpg) == 0)
        return (0);
    if (direction == 1)
        return (ups(rpg));
    if (direction == 2)
        return (down(rpg));
    if (direction == 3)
        return (left(rpg));
    return (right(rpg));
}
