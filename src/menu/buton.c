/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** buton.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

sfSprite *create_start_button(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {850, 300};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 0, 200, 100});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_setting_button(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {850, 500};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 190, 199, 90});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_quit_button(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {850, 700};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 100, 200, 90});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_start_button_selected(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {860, 290};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){195, 0, 200, 100});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}
