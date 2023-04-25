/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** menu
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void choose(RPG *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        menu(rpg);
    sfRenderWindow_clear(rpg->window,sfColor_fromRGB(179, 139, 109));
    sfRenderWindow_drawSprite(rpg->window, rpg->back, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->save_one, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->save_two, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->save_three, NULL);
    save_one_text(rpg);
}

sfRectangleShape *zone_txt(void)
{
    sfRectangleShape *zone;
    sfVector2f pos = {0, 0};
    sfVector2f size = {300, 50};
    zone = sfRectangleShape_create();
    sfRectangleShape_setPosition(zone, pos);
    sfRectangleShape_setSize(zone, size);
    sfRectangleShape_setFillColor(zone, sfWhite);
    return (zone);
}

int menu(RPG *rpg)
{
    sfView *view;sfVector2f pos = {980, 550};
    sfVector2f size = {1920, 1080};view = sfView_create();
    sfView_setCenter(view, pos);sfView_setSize(view, size);
    sfRenderWindow_setView(rpg->window, view);rpg->i = 0;
    sfRenderWindow_setFramerateLimit(rw, 100);
    create(rpg);
    rpg->ech = sfFalse;
    while (sfRenderWindow_isOpen(rpg->window)) {
        detect_fps(rpg);
        sfRenderWindow_clear(rpg->window, sfColor_fromRGB(179, 139, 109));
        sfRenderWindow_drawSprite(rpg->window, rpg->back, NULL);
        if (rpg->i == 0)
            rpg->i = detec(rpg);draw_menu(rpg);draw_menu_selected(rpg);
        if (rpg->i == 1)choose(rpg);
        if (rpg->i == 2)setting(rpg);
        while (sfRenderWindow_pollEvent(rw, &rpg->event)) {
        } sfRenderWindow_display(rw);test(rpg);}
    return (0);
}
