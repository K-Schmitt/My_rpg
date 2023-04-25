/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** inventory active
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

void delete_item_6(RPG *rpg)
{
    if (del16) {
        rpg->inv.select = 0;
        rpg->inv.options = 16;
        rpg->inv.select_x = 43.1;
        rpg->inv.select_y = 6;
    }
}

static void case_click_active_next(RPG *rpg)
{
    if (slot4) {
        rpg->inv.select = 1;
        rpg->inv.options = 0;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 87;
    }
}

void case_click_active(RPG *rpg)
{
    if (slot1) {
        rpg->inv.select = 4;
        rpg->inv.options = 0;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 24.8;
    }
    if (slot2) {
        rpg->inv.select = 3;
        rpg->inv.options = 0;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 45.6;
    }
    if (slot3) {
        rpg->inv.select = 2;
        rpg->inv.options = 0;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 66.3;
    }
    case_click_active_next(rpg);
}
