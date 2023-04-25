/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** butonnext.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

sfSprite *create_setting_button_selected(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {860, 490};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){195, 190, 199, 90});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_quit_button_selected(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {860, 690};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){195, 100, 200, 90});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_save_one(void)
{
    sfTexture *save_one = sfTexture_createFromFile
    ("src/menu/asset/background.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {50, 100};
    sfSprite_setTexture(sprite, save_one, sfTrue);
    sfSprite_setScale(sprite , (sfVector2f){1.9, 0.7});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_save_two(void)
{
    sfTexture *save_one = sfTexture_createFromFile
    ("src/menu/asset/background.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {50, 395};
    sfSprite_setTexture(sprite, save_one, sfTrue);
    sfSprite_setScale(sprite , (sfVector2f){1.9, 0.7});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

sfSprite *create_save_three(void)
{
    sfTexture *save_one = sfTexture_createFromFile
    ("src/menu/asset/background.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {50, 695};
    sfSprite_setTexture(sprite, save_one, sfTrue);
    sfSprite_setScale(sprite , (sfVector2f){1.9, 0.7});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}
