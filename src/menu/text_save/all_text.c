/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** all_text.c
*/

#include "../../../include/csfmlib.h"

sfText *create_name(int x, int y)
{
    sfText *Name = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(Name, font);
    sfText_setCharacterSize(Name, 40);
    sfText_setColor(Name, sfBlack);
    sfText_setString(Name, "Name:");
    sfVector2f position = {x, y};
    sfText_setPosition(Name, position);
    return (Name);
}

sfText *create_life(int x, int y)
{
    sfText *life = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(life, font);
    sfText_setCharacterSize(life, 40);
    sfText_setColor(life, sfBlack);
    sfText_setString(life, "Life:");
    sfVector2f position = {x, y};
    sfText_setPosition(life, position);
    return (life);
}

sfText *create_level(int x, int y)
{
    sfText *level = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(level, font);
    sfText_setCharacterSize(level, 40);
    sfText_setColor(level, sfBlack);
    sfText_setString(level, "Level:");
    sfVector2f position = {x, y};
    sfText_setPosition(level, position);
    return (level);
}
