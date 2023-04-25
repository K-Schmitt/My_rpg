/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** rec_mouvement.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfRectangleShape *create_up(void)
{
    sfRectangleShape *up = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1220, 305};
    sfRectangleShape_setSize(up, size);
    sfRectangleShape_setPosition(up, position);
    sfRectangleShape_setFillColor(up, sfTransparent);
    return (up);
}

sfRectangleShape *create_down(void)
{
    sfRectangleShape *down = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1200, 405};
    sfRectangleShape_setSize(down, size);
    sfRectangleShape_setPosition(down, position);
    sfRectangleShape_setFillColor(down, sfTransparent);
    return (down);
}

sfRectangleShape *create_left(void)
{
    sfRectangleShape *left = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1260, 505};
    sfRectangleShape_setSize(left, size);
    sfRectangleShape_setPosition(left, position);
    sfRectangleShape_setFillColor(left, sfTransparent);
    return (left);
}

sfRectangleShape *create_right(void)
{
    sfRectangleShape *right = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1230, 605};
    sfRectangleShape_setSize(right, size);
    sfRectangleShape_setPosition(right, position);
    sfRectangleShape_setFillColor(right, sfTransparent);
    return (right);
}

sfRectangleShape *create_invent(void)
{
    sfRectangleShape *invent = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1310, 705};
    sfRectangleShape_setSize(invent, size);
    sfRectangleShape_setPosition(invent, position);
    sfRectangleShape_setFillColor(invent, sfTransparent);
    return (invent);
}
