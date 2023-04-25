/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** resolution_create.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void close_wd(RPG *menu, sfFloatRect _1920_1080,
sfFloatRect _1280_720, sfFloatRect bounds)
{
    if (sfFloatRect_contains(&_1920_1080, menu->mouseresize.x,
    menu->mouseresize.y) && sfMouse_isButtonPressed(sfMouseLeft)) {
        sfVector2u new_size = {1920, 1080};
        sfRenderWindow_setSize(menu->window, new_size);
    }
    if (sfFloatRect_contains(&_1280_720, menu->mouseresize.x,
    menu->mouseresize.y) && sfMouse_isButtonPressed(sfMouseLeft)) {
        sfVector2u new_size = {1280, 720};
        sfRenderWindow_setSize(menu->window, new_size);
    }
    if (sfFloatRect_contains(&bounds, menu->mouseresize.x,
    menu->mouseresize.y) == false &&
    sfMouse_isButtonPressed(sfMouseLeft)) {
        menu->is_open = false;
    }
}

void cif(RPG *menu, sfFloatRect bounds,
sfVector2i mouse_position)
{
    if (sfFloatRect_contains(&bounds, menu->mouseresize.x,
        menu->mouseresize.y) || menu->is_open == true) {
        menu->is_open = true;
        sfRenderWindow_drawRectangleShape(menu->window,
        menu->rect_1920x1080,NULL);
        sfFloatRect _1920_1080 = sfRectangleShape_getGlobalBounds
        (menu->rect_1920x1080);
        sfRenderWindow_drawText(menu->window,menu->text_1920x1080, NULL);
        sfRenderWindow_drawRectangleShape(menu->window,
        menu->rect_1280x720,NULL);
        sfRenderWindow_drawText(menu->window,
        menu->text_1280x720, NULL);
        sfFloatRect _1280_720 = sfRectangleShape_getGlobalBounds
        (menu->rect_1280x720);
            mouse_position = sfMouse_getPositionRenderWindow(menu->window);
            menu->mouseresize = sfRenderWindow_mapPixelToCoords(menu->window,
            mouse_position, NULL);
            close_wd(menu, _1920_1080, _1280_720, bounds);
    }
}

void resolution(RPG *menu)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(menu->window);
    menu->mouseresize = sfRenderWindow_mapPixelToCoords(menu->window,
    mouse_position, NULL);
    sfFloatRect bounds = sfRectangleShape_getGlobalBounds(menu->resolution_rec);
    cif(menu, bounds, mouse_position);
    sfRenderWindow_drawRectangleShape(menu->window, menu->resolution_rec,NULL);
    sfRenderWindow_drawText(menu->window, menu->resolution, NULL);
}

void fin_if(RPG *rpg, sfFloatRect settings,
sfFloatRect bounds, sfFloatRect quit)
{
    if (sfFloatRect_contains(&settings, rpg->mouseresize.x,rpg->mouseresize.y)
    && sfMouse_isButtonPressed(sfMouseLeft)){setting(rpg);
    rpg->ech = false;
    }
    if (sfFloatRect_contains(&bounds, rpg->mouseresize.x,rpg->mouseresize.y)
    && sfMouse_isButtonPressed(sfMouseLeft)){rpg->ech = false;
    }
    if (sfFloatRect_contains(&quit, rpg->mouseresize.x,rpg->mouseresize.y)
    && sfMouse_isButtonPressed(sfMouseLeft)){rpg->ech = false;menu(rpg);
    }
}

void suite(RPG *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->menuech, NULL);
    sfSprite_setPosition(rpg->menuech, rpg->pos_ech);
    sfRenderWindow_drawSprite(rpg->window, rpg->start_ech, NULL);
    sfSprite_setPosition(rpg->start_ech, rpg->pos_start_ech);
    sfSprite_setPosition(rpg->setting_ech, rpg->pos_setting_ech);
    sfRenderWindow_drawSprite(rpg->window, rpg->quit_ech, NULL);
    sfSprite_setPosition(rpg->quit_ech, rpg->pos_quit_ech);rpg->ech = true;
    sfFloatRect bounds = sfSprite_getGlobalBounds(rpg->start_ech);
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(rpg->window);
    rpg->mouseresize = sfRenderWindow_mapPixelToCoords(rpg->window,
    mouse_position, NULL);
    sfFloatRect quit = sfSprite_getGlobalBounds(rpg->quit_ech);
    sfFloatRect settings = sfSprite_getGlobalBounds(rpg->setting_ech);
    fin_if(rpg, settings, bounds, quit);
}
