/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** geston_item.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static char *get_name_item2(int item)
{
    if (item == 7)
        return ("une potion verte \0");
    if (item == 8)
        return ("un champignion \0");
    if (item == 9)
        return ("une potion orange \0");
    if (item == 10)
        return ("un chat \0");
    return (NULL);
}

char *get_name_item(int item)
{
    if (item == 1)
        return ("un petit baton \0");
    if (item == 2)
        return ("une epee de legende \0");
    if (item == 3)
        return ("un revolver \0");
    if (item == 4)
        return ("une munition \0");
    if (item == 5)
        return ("un sort de feu \0");
    if (item == 6)
        return ("du whisky \0");
    return (get_name_item2(item));
}
