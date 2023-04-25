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

static void change_style(sfClock *cur, sfText *text)
{
    if (get(times(cur)) < 0.5)
        sfText_setStyle(text, sfTextItalic);
    else
        sfText_setStyle(text, sfTextRegular);
}

static void is_over_3(RPG *rpg)
{
    if (over5) {
        if (rpg->stat.coin >= 5)
            sfText_setFillColor(rpg->shop.price_5.text, sfGreen);
        else
            sfText_setFillColor(rpg->shop.price_5.text, sfRed);
    } else if (get(times(rpg->shop.c_shop5)) >= 0.5)
        sfText_setFillColor(rpg->shop.price_5.text, sfWhite);
    change_style(rpg->shop.c_shop5, rpg->shop.price_5.text);
}

static void is_over_2(RPG *rpg)
{
    if (over3) {
        if (rpg->stat.coin >= 10)
            sfText_setFillColor(rpg->shop.price_3.text, sfGreen);
        else
            sfText_setFillColor(rpg->shop.price_3.text, sfRed);
    } else if (get(times(rpg->shop.c_shop3)) >= 0.5)
        sfText_setFillColor(rpg->shop.price_3.text, sfWhite);
    change_style(rpg->shop.c_shop3, rpg->shop.price_3.text);

    if (over4) {
        if (rpg->stat.coin >= 10)
            sfText_setFillColor(rpg->shop.price_4.text, sfGreen);
        else
            sfText_setFillColor(rpg->shop.price_4.text, sfRed);
    } else if (get(times(rpg->shop.c_shop4)) >= 0.5)
        sfText_setFillColor(rpg->shop.price_4.text, sfWhite);
    change_style(rpg->shop.c_shop4, rpg->shop.price_4.text);
    is_over_3(rpg);
}

void is_over(RPG *rpg)
{
    if (over1) {
        if (rpg->stat.coin >= 10)
            sfText_setFillColor(rpg->shop.price_1.text, sfGreen);
        else
            sfText_setFillColor(rpg->shop.price_1.text, sfRed);
    } else if (get(times(rpg->shop.c_shop1)) >= 0.5)
        sfText_setFillColor(rpg->shop.price_1.text, sfWhite);
    change_style(rpg->shop.c_shop1, rpg->shop.price_1.text);

    if (over2) {
        if (rpg->stat.coin >= 10)
            sfText_setFillColor(rpg->shop.price_2.text, sfGreen);
        else
            sfText_setFillColor(rpg->shop.price_2.text, sfRed);
    } else if (get(times(rpg->shop.c_shop2)) >= 0.5)
        sfText_setFillColor(rpg->shop.price_2.text, sfWhite);
    change_style(rpg->shop.c_shop2, rpg->shop.price_2.text);
    is_over_2(rpg);
}
