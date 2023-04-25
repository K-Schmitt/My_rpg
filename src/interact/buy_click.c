/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** click shop
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

static void buy_click_next(RPG *rpg)
{
    if (buy4)
        if (rpg->stat.coin >= 10) {
            push_in_inventory(rpg, 7);
            sfClock_restart(rpg->shop.c_shop4);
            rpg->stat.coin -= 10;
        }
    if (buy5)
        if (rpg->stat.coin >= 5) {
            push_in_inventory(rpg, 4);
            sfClock_restart(rpg->shop.c_shop5);
            rpg->stat.coin -= 5;
        }
}

void buy_click(RPG *rpg)
{
    if (buy1)
        if (rpg->stat.coin >= 10) {
            push_in_inventory(rpg, 9);
            sfClock_restart(rpg->shop.c_shop1);
            rpg->stat.coin -= 10;
        }
    if (buy2)
        if (rpg->stat.coin >= 10) {
            push_in_inventory(rpg, 6);
            sfClock_restart(rpg->shop.c_shop2);
            rpg->stat.coin -= 10;
        }
    if (buy3)
        if (rpg->stat.coin >= 10) {
            push_in_inventory(rpg, 8);
            sfClock_restart(rpg->shop.c_shop3);
            rpg->stat.coin -= 10;
        }
    buy_click_next(rpg);
}
