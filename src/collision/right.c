/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** right
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static int right_4(RPG* rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25);
    if (colo.r == 148 && colo.g == 1 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 31);
    if (colo.r == 148 && colo.g == 1 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 16);
    if (colo.r == 148 && colo.g == 1 && colo.b == 251 && colo.a == 255)
        return (1);
    return (0);
}

static int right_3(RPG* rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25);
    if (colo.r == 1 && colo.g == 8 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25 - 8);
    if (colo.r == 1 && colo.g == 8 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25 + 8);
    if (colo.r == 1 && colo.g == 8 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25);
    if (colo.r == 1 && colo.g == 229 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25 + 6);
    if (colo.r == 1 && colo.g == 229 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25 - 8);
    if (colo.r == 1 && colo.g == 229 && colo.b == 251 && colo.a == 255)
        return (1);
    return (right_4(rpg));
}

static int right_2(RPG* rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 8, pos_y + 25);
    if (colo.r == 248 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 8, pos_y + 30);
    if (colo.r == 248 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 8, pos_y + 15);
    if (colo.r == 248 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25);
    if (colo.r == 249 && colo.g == 11 && colo.b == 11 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25 + 8);
    if (colo.r == 249 && colo.g == 11 && colo.b == 11 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 10, pos_y + 25 - 8);
    if (colo.r == 249 && colo.g == 11 && colo.b == 11 && colo.a == 255)
        return (1);
    return (right_3(rpg));
}

int right(RPG *rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 29, pos_y + 25);
    if (colo.r == 0 && colo.g == 0 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 18, pos_y + 25);
    if (colo.r == 168 && colo.g == 201 && colo.b == 170 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14 + 8, pos_y + 25);
    if (colo.r == 251 && colo.g == 155 && colo.b == 1 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 40, pos_y + 25);
    if (colo.r == 201 && colo.g == 168 && colo.b == 184 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 10 + 10, pos_y + 32);
    if (colo.r == 48 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 10 + 10, pos_y + 20);
    if (colo.r == 48 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    return (right_2(rpg));
}
