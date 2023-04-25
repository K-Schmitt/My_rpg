/*
** EPITECH PROJECT, 2022
** gestion sprite
** File description:
** gestion tout
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

void create_text5(stocktext *x, char *str, float charasize, sfVector2f pos)
{
    x->font = sfFont_createFromFile("./assets/fonts/book2.ttf");
    x->text = sfText_create();
    sfText_setFont(x->text, x->font);
    sfText_setScale(x->text, vecf(charasize, charasize));
    sfText_setFillColor(x->text, sfWhite);
    sfText_setString(x->text, str);
    sfText_setPosition(x->text, pos);
    sfText_setOutlineColor(x->text, sfBlack);
    sfText_setOutlineThickness(x->text, 2);
}

void create_text4(stocktext *x, char *str, float charasize, sfVector2f pos)
{
    x->font = sfFont_createFromFile("./assets/fonts/book2.ttf");
    x->text = sfText_create();
    sfText_setFont(x->text, x->font);
    sfText_setScale(x->text, vecf(charasize, charasize));
    sfText_setFillColor(x->text, sfBlack);
    sfText_setString(x->text, str);
    sfText_setPosition(x->text, pos);
}
