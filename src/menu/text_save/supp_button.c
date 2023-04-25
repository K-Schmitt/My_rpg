/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** supp_button.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfSprite *create_supp_button(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f position = {1500, 750};
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 0, 200, 100});
    sfSprite_setScale(sprite, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(sprite, position);
    return (sprite);
}
