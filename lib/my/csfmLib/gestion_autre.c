/*
** EPITECH PROJECT, 2022
** gestion sprite
** File description:
** gestion tout
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfVector2f nscale_reverse(RPG *rpg, float x, float y)
{
    sfVector2f b;

    float xx = x / (sfRenderWindow_getSize(rw).x / (float)1920);
    float yy = y / (sfRenderWindow_getSize(rw).y / (float)1080);
    if (xx > yy)
        b = vecf(xx, xx);
    else
        b = vecf(yy, yy);
    return (b);
}

int create_text(stocktext *x, char *str, int charasize, sfVector2f pos)
{
    x->font = sfFont_createFromFile("./assets/fonts/arial.ttf");
    x->text = sfText_create();
    sfText_setFont(x->text, x->font);
    sfText_setCharacterSize(x->text, charasize);
    sfText_setFillColor(x->text, sfBlack);
    sfText_setString(x->text, str);
    sfText_setPosition(x->text, pos);
    return (0);
}

int create_text2(stocktext *x, char *str, float charasize, sfVector2f pos)
{
    x->font = sfFont_createFromFile("./assets/fonts/immortal/IMMORTAL.ttf");
    x->text = sfText_create();
    sfText_setFont(x->text, x->font);
    sfText_setScale(x->text, vecf(charasize, charasize));
    sfText_setFillColor(x->text, sfWhite);
    sfText_setString(x->text, str);
    sfText_setPosition(x->text, pos);
    return (0);
}

void create_rect_next(stockrect *x, sfVector2f size, int opt)
{
    if (opt >= 3) {
        sfRectangleShape_setFillColor(x->name, sfTransparent);
        sfRectangleShape_setOutlineColor(x->name, sfBlack);
        if (opt == 4)
            sfRectangleShape_setOutlineColor(x->name, sfRed);
        if (opt == 5)
            sfRectangleShape_setOutlineColor(x->name, sfBlue);
    }
    if (opt != 1)
        sfRectangleShape_setOutlineThickness(x->name, 1);
    sfRectangleShape_setSize(x->name, size);
}

void create_rect(stockrect *x, sfVector2f size, sfVector2f pos, int opt)
{
    x->name = sfRectangleShape_create();
    sfRectangleShape_setPosition(x->name, pos);
    if (opt == 0) {
        sfRectangleShape_setFillColor(x->name, sfTransparent);
        sfRectangleShape_setOutlineColor(x->name, sfBlack);
    }
    if (opt == 1)
        sfRectangleShape_setFillColor(x->name, sfColor_fromRGB(97, 72, 52));
    create_rect_next(x, size, opt);
}
