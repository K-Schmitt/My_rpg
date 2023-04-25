/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** resolution.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

sfRectangleShape *create_1920x1080_rect(void)
{
    sfRectangleShape *rect;
    sfVector2f pos = {100, 234};
    sfVector2f size = {300, 50};
    rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(rect, pos);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setFillColor(rect, sfTransparent);
    sfRectangleShape_setOutlineColor(rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(rect, 2);
    return (rect);
}

sfText *create_1920x1080_text(void)
{
    sfText *text;
    sfFont *font;
    sfVector2f pos = {100, 234};
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, pos);
    sfText_setString(text, "1920x1080");
    sfText_setColor(text, sfBlack);
    return (text);
}

sfRectangleShape *create_1280x720_rect(void)
{
    sfRectangleShape *rect;
    sfVector2f pos = {100, 288};
    sfVector2f size = {300, 50};
    rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(rect, pos);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setFillColor(rect, sfTransparent);
    sfRectangleShape_setOutlineColor(rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(rect, 2);
    return (rect);
}

sfText *create_1280x720_text(void)
{
    sfText *text;
    sfFont *font;
    sfVector2f pos = {100, 288};
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, pos);
    sfText_setString(text, "1280x720");
    sfText_setColor(text, sfBlack);
    return (text);
}
