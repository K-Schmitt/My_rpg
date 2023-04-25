/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** draw.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void draw_menu(RPG *menu)
{
    sfRenderWindow_drawSprite(menu->window, menu->start, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->setting, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->quit, NULL);
}

void draw_menu_selected(RPG *menu)
{
    if (sfFloatRect_contains(&menu->rect_start,
        menu->mouseresize.x, menu->mouseresize.y)) {
        menu->start_selected = create_start_button_selected();
        sfRenderWindow_drawSprite(menu->window,
        menu->start_selected, NULL);
    }
    if (sfFloatRect_contains(&menu->rect_setting,
        menu->mouseresize.x, menu->mouseresize.y)) {
        menu->setting_selected = create_setting_button_selected();
        sfRenderWindow_drawSprite(menu->window,
        menu->setting_selected, NULL);
    }
    if (sfFloatRect_contains(&menu->rect_quit,
        menu->mouseresize.x, menu->mouseresize.y)) {
        menu->quit_selected = create_quit_button_selected();
        sfRenderWindow_drawSprite(menu->window,
        menu->quit_selected, NULL);
    }
}

int detec(RPG *menu)
{
    menu->mousebis = sfMouse_getPositionRenderWindow(menu->window);
    menu->mouseresize = sfRenderWindow_mapPixelToCoords(menu->window,
    menu->mousebis, NULL);
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (sfFloatRect_contains(&menu->rect_start,
        menu->mouseresize.x, menu->mouseresize.y))
            return (1);
        if (sfFloatRect_contains(&menu->rect_setting,
        menu->mouseresize.x, menu->mouseresize.y))
            return (2);
        if (sfFloatRect_contains(&menu->rect_quit,
        menu->mouseresize.x, menu->mouseresize.y))
            return (3);
    }
    return (0);
}
