/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** reset.c
*/

#include "../../../include/csfmlib.h"

sfSprite *save_one_del(int x, int y)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {x, y};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 375, 95, 300});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}
