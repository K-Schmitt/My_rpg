/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** select
*/

#include "../../include/csfmlib.h"

int check_mouse(RPG *rpg, int x, int y)
{
    if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft)
    && rpg->mouse.x >= sfView_getCenter(rpg->area).x + x
    && rpg->mouse.x <= sfView_getCenter(rpg->area).x + (x + 30)
    && rpg->mouse.y >= sfView_getCenter(rpg->area).y + y
    && rpg->mouse.y <= sfView_getCenter(rpg->area).y + (y + 34))
        return (1);
    return (0);
}

void set_select(RPG *rpg, int x, int y)
{
    if (check_mouse(rpg, x, y)) {
        sfSprite_setPosition(rpg->fight->select_bar.img_sprite, \
        (sfVector2f){sfView_getCenter(rpg->area).x + x, \
        sfView_getCenter(rpg->area).y + y});
        rpg->fight->select = 1;
        int tab_coord[4] = {-70, -34, 2, 38};
        for (int i = 0; i < 4; i++)
            if (tab_coord[i] == x)
                rpg->fight->slot_id = rpg->fight->slot[i];
        if (rpg->fight->slot_id == 0)
            rpg->fight->slot_id = 11;
    }
}

void set_convex(RPG *rpg, int x, int y)
{
    sfSprite_setPosition(rpg->fight->convex.img_sprite, \
    vecf(sfView_getCenter(rpg->area).x + x, sfView_getCenter(rpg->area).y - y));
}

void check_convex(RPG *rpg, itemfunc_t *tab)
{
    if (tab[rpg->fight->slot_id - 1].convex == 1) {
        set_convex(rpg, -182, 65);
        rpg->fight->convex_nb = 1;
        sfRenderWindow_drawSprite(rw, rpg->fight->convex.img_sprite, NULL);
    } else if (tab[rpg->fight->slot_id - 1].convex == 0) {
        set_convex(rpg, 135, 65);
        rpg->fight->convex_nb = 0;
        sfRenderWindow_drawSprite(rw, rpg->fight->convex.img_sprite, NULL);
    }
}

void draw_select(RPG *rpg)
{
    animate(&rpg->fight->convex, 9, 64);
    sfSprite_setTextureRect(rpg->fight->convex.img_sprite, \
    rpg->fight->convex.z);
    set_select(rpg, -70, 86);
    set_select(rpg, -34, 86);
    set_select(rpg, 2, 86);
    set_select(rpg, 38, 86);
    itemfunc_t *tab = get_items(rpg);
    if (rpg->fight->select == 1) {
        sfRenderWindow_drawSprite(rw, rpg->fight->select_bar.img_sprite, NULL);
        check_convex(rpg, tab);
    } else {
        rpg->fight->select = 0;
    }
}
