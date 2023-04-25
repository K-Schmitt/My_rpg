/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** delete pos
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

static void delete_item_5(RPG *rpg)
{
    if (del13) {
        rpg->inv.select = 0;
        rpg->inv.options = 13;
        rpg->inv.select_x = 105.2;
        rpg->inv.select_y = 6;
    }
    if (del14) {
        rpg->inv.select = 0;
        rpg->inv.options = 14;
        rpg->inv.select_x = 84.5;
        rpg->inv.select_y = 6;
    }
    if (del15) {
        rpg->inv.select = 0;
        rpg->inv.options = 15;
        rpg->inv.select_x = 63.8;
        rpg->inv.select_y = 6;
    }
    delete_item_6(rpg);
}

static void delete_item_4(RPG *rpg)
{
    if (del10) {
        rpg->inv.select = 0;
        rpg->inv.options = 10;
        rpg->inv.select_x = 43.1;
        rpg->inv.select_y = 27;
    }
    if (del11) {
        rpg->inv.select = 0;
        rpg->inv.options = 11;
        rpg->inv.select_x = 147;
        rpg->inv.select_y = 6;
    }
    if (del12) {
        rpg->inv.select = 0;
        rpg->inv.options = 12;
        rpg->inv.select_x = 126;
        rpg->inv.select_y = 6;
    }
    delete_item_5(rpg);
}

static void delete_item_3(RPG *rpg)
{
    if (del7) {
        rpg->inv.select = 0;
        rpg->inv.options = 7;
        rpg->inv.select_x = 105.2;
        rpg->inv.select_y = 27;
    }
    if (del8) {
        rpg->inv.select = 0;
        rpg->inv.options = 8;
        rpg->inv.select_x = 84.5;
        rpg->inv.select_y = 27;
    }
    if (del9) {
        rpg->inv.select = 0;
        rpg->inv.options = 9;
        rpg->inv.select_x = 63.8;
        rpg->inv.select_y = 27;
    }
    delete_item_4(rpg);
}

static void delete_item_2(RPG *rpg)
{
    if (del1) {
        rpg->inv.select = 0;
        rpg->inv.options = 1;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 87;
    }
    if (del5) {
        rpg->inv.select = 0;
        rpg->inv.options = 5;
        rpg->inv.select_x = 147;
        rpg->inv.select_y = 27;
    }
    if (del6) {
        rpg->inv.select = 0;
        rpg->inv.options = 6;
        rpg->inv.select_x = 126;
        rpg->inv.select_y = 27;
    }
    delete_item_3(rpg);
}

void delete_item(RPG *rpg)
{
    if (del4) {
        rpg->inv.select = 0;
        rpg->inv.options = 4;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 24.8;
    }
    if (del3) {
        rpg->inv.select = 0;
        rpg->inv.options = 3;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 45.6;
    }
    if (del2) {
        rpg->inv.select = 0;
        rpg->inv.options = 2;
        rpg->inv.select_x = 212;
        rpg->inv.select_y = 66.35;
    }
    delete_item_2(rpg);
}
