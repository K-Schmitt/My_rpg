/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** col_pique.c
*/

#include "../../include/csfmlib.h"

void modif_bounds(sfFloatRect *bob)
{
    bob->width -= 20;
    bob->left += 10;
    bob->height -= 10;
    bob->top += 5;
}

int col_cat(RPG *rpg, int sens)
{
    for (int i = 0; i < 29; i++) {
        sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->pnjs.cat[i].img_sprite);
        modif_bounds(&bounds2);
        if (sens == 3)
            bounds1.left -= 2;
        if (sens == 4)
            bounds1.width += 2;
        if (sens == 1)
            bounds1.top -= 2;
        if (sens == 2)
            bounds1.height += 2;
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->pnjs.cat[i].draw == rpg->zone) {
            return (1);
        }
    }
    return (0);
}

int col_piq(RPG *rpg, int sens)
{
    for (int i = 0; i < 12; i++) {
        sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
        sfFloatRect bounds2 = sfSprite_getGlobalBounds(
        rpg->quete.pique[i].img_sprite);
        if (sens == 3)
            bounds1.left -= 2;
        if (sens == 4)
            bounds1.width += 2;
        if (sens == 1)
            bounds1.top -= 2;
        if (sens == 2)
            bounds1.height += 2;
        if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
        rpg->quete.pique[i].z.top == 0 && rpg->zone ==
        rpg->quete.pique[i].draw) {
            return (1);
        }
    }
    return (0);
}

int col_pnj(RPG *rpg, stocksprite *bob, int sens)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(
    bob->img_sprite);
    modif_bounds(&bounds2);
    if (sens == 3)
        bounds1.left -= 2;
    if (sens == 4)
        bounds1.width += 2;
    if (sens == 1)
        bounds1.top -= 2;
    if (sens == 2)
        bounds1.height += 2;
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    bob->draw == rpg->zone) {
        return (1);
    }
    return (0);
}

int col_ennemie(RPG *rpg, stockennemie *bob, int sens)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(
    bob->img_sprite);
    modif_bounds(&bounds2);
    if (sens == 3)
        bounds1.left -= 2;
    if (sens == 4)
        bounds1.width += 2;
    if (sens == 1)
        bounds1.top -= 2;
    if (sens == 2)
        bounds1.height += 2;
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    bob->draw == rpg->zone) {
        return (1);
    }
    return (0);
}
