/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** resolution_create.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

sfSprite *plus(void)
{
    sfSprite *plus = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/plus.png", NULL);
    sfVector2f position = {100, 500};
    sfSprite_setScale(plus, (sfVector2f){0.3, 0.3});
    sfSprite_setTexture(plus, texture, sfTrue);
    sfSprite_setPosition(plus, position);
    return (plus);
}

sfSprite *minus(void)
{
    sfSprite *minus = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile
    ("src/menu/asset/minus.png", NULL);
    sfVector2f position = {350, 500};
    sfSprite_setScale(minus, (sfVector2f){0.3, 0.3});
    sfSprite_setTexture(minus, texture, sfTrue);
    sfSprite_setPosition(minus, position);
    return (minus);
}

void generate_sound(RPG *rpg)
{
    rpg->plus = plus();
    rpg->moins = minus();
}

void draw_sound(RPG *rpg)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(rpg->window);
    rpg->mouseresize = sfRenderWindow_mapPixelToCoords(rpg->window,
    mouse_position, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->plus, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->moins, NULL);
    sfFloatRect bounds = sfSprite_getGlobalBounds(rpg->plus);
    if (sfFloatRect_contains(&bounds, rpg->mouseresize.x, rpg->mouseresize.y)
    && sfMouse_isButtonPressed(sfMouseLeft))
        rpg->sound_mod = rpg->sound_mod + 10;
    sfFloatRect bounds_moins = sfSprite_getGlobalBounds(rpg->plus);
    if (sfFloatRect_contains(&bounds_moins, rpg->mouseresize.x,
    rpg->mouseresize.y)
    && sfMouse_isButtonPressed(sfMouseLeft))
        rpg->sound_mod = rpg->sound_mod - 10;
}
