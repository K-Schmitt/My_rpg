/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** menu_ech.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

sfSprite *create_start_ech(RPG *menu)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 0, 200, 100});
    sfSprite_setScale(sprite, (sfVector2f){0.4, 0.4});
    return (sprite);
}

sfSprite *create_setting_ech(RPG *menu)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 190, 199, 90});
    sfSprite_setScale(sprite, (sfVector2f){0.4, 0.4});
    return (sprite);
}

sfSprite *create_quit_ech(RPG *menu)
{
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/imagee.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 100, 200, 90});
    sfSprite_setScale(sprite, (sfVector2f){0.4, 0.4});
    return (sprite);
}

sfSprite *menuech(RPG *menu)
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale = {0.3, 0.3};
    texture = sfTexture_createFromFile("src/menu/asset/menu(1).png", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    return (sprite);
}

void echpmenu(RPG *rpg)
{
    sfRenderWindow_clear(rpg->window, sfTransparent);
    rpg->pos_start_ech = sfView_getCenter(rpg->area);
    rpg->pos_start_ech.x = rpg->pos_start_ech.x - 60;
    rpg->pos_start_ech.y = rpg->pos_start_ech.y - 75;
    rpg->pos_setting_ech = sfView_getCenter(rpg->area);
    rpg->pos_setting_ech.x = rpg->pos_setting_ech.x - 60;
    rpg->pos_setting_ech.y = rpg->pos_setting_ech.y - 30;
    rpg->pos_quit_ech = sfView_getCenter(rpg->area);
    rpg->pos_quit_ech.x = rpg->pos_quit_ech.x - 60;
    rpg->pos_quit_ech.y = rpg->pos_quit_ech.y + 10;
    rpg->pos_ech = sfView_getCenter(rpg->area);
    rpg->pos_ech.x = rpg->pos_ech.x - 100;
    rpg->pos_ech.y = rpg->pos_ech.y - 100;
    suite(rpg);
}
