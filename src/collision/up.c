/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** up
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static int up_3(RPG *rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 25, pos_y + 25 - 9);
    if (colo.r == 1 && colo.g == 8 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 25 - 17, pos_y + 25 - 9);
    if (colo.r == 1 && colo.g == 8 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 25, pos_y + 25 - 9);
    if (colo.r == 1 && colo.g == 229 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 5, pos_y + 25 - 9);
    if (colo.r == 1 && colo.g == 229 && colo.b == 251 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14, pos_y + 25 - 10);
    if (colo.r == 148 && colo.g == 1 && colo.b == 251 && colo.a == 255)
        return (1);
    return (0);
}

static int up_2(RPG *rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 14, pos_y + 25 - 8);
    if (colo.r == 248 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 5, pos_y + 25 - 8);
    if (colo.r == 248 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 25, pos_y + 25 - 8);
    if (colo.r == 248 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 14, pos_y + 25 - 15);
    if (colo.r == 249 && colo.g == 11 && colo.b == 11 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 25, pos_y + 25 - 15);
    if (colo.r == 249 && colo.g == 11 && colo.b == 11 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 4, pos_y + 25 - 15);
    if (colo.r == 249 && colo.g == 11 && colo.b == 11 && colo.a == 255)
        return (1);
    return (up_3(rpg));
}

int ups(RPG *rpg)
{
    colo = sfImage_getPixel(rpg->image, pos_x + 10, pos_y + 25 - 6);
    if (colo.r == 0 && colo.g == 0 && colo.b == 0 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 10, pos_y + 25 - 2);
    if (colo.r == 168 && colo.g == 201 && colo.b == 170 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 10, pos_y + 25 - 12);
    if (colo.r == 251 && colo.g == 155 && colo.b == 1 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 20, pos_y + 25 - 12);
    if (colo.r == 251 && colo.g == 155 && colo.b == 1 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 10, pos_y + 25 - 10);
    if (colo.r == 201 && colo.g == 168 && colo.b == 184 && colo.a == 255)
        return (1);
    colo = sfImage_getPixel(rpg->image, pos_x + 10, pos_y + 25 - 10);
    if (colo.r == 48 && colo.g == 251 && colo.b == 0 && colo.a == 255)
        return (1);
    return (up_2(rpg));
}
