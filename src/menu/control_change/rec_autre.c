/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** rec_mouvement.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfRectangleShape *create_inventaire(void)
{
    sfRectangleShape *inventaire = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1300, 105};
    sfRectangleShape_setSize(inventaire, size);
    sfRectangleShape_setPosition(inventaire, position);
    sfRectangleShape_setFillColor(inventaire, sfTransparent);
    return (inventaire);
}

sfRectangleShape *create_livre(void)
{
    sfRectangleShape *livre = sfRectangleShape_create();
    sfVector2f size = {100, 50};
    sfVector2f position = {1205, 205};
    sfRectangleShape_setSize(livre, size);
    sfRectangleShape_setPosition(livre, position);
    sfRectangleShape_setFillColor(livre, sfTransparent);
    return (livre);
}
