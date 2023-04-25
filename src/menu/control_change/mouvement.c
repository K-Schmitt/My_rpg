/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** txt.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfText *haut(void)
{
    sfText *haut = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(haut, font);
    sfText_setCharacterSize(haut, 40);
    sfText_setColor(haut, sfBlack);
    sfText_setString(haut, "Haut:");
    sfVector2f position = {1100, 300};
    sfText_setPosition(haut, position);
    return (haut);
}

sfText *bas(void)
{
    sfText *bas = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(bas, font);
    sfText_setCharacterSize(bas, 40);
    sfText_setColor(bas, sfBlack);
    sfText_setString(bas, "Bas:");
    sfVector2f position = {1100, 400};
    sfText_setPosition(bas, position);
    return (bas);
}

sfText *gauche(void)
{
    sfText *gauche = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(gauche, font);
    sfText_setCharacterSize(gauche, 40);
    sfText_setColor(gauche, sfBlack);
    sfText_setString(gauche, "Gauche:");
    sfVector2f position = {1100, 500};
    sfText_setPosition(gauche, position);
    return (gauche);
}

sfText *droite(void)
{
    sfText *droite = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(droite, font);
    sfText_setCharacterSize(droite, 40);
    sfText_setColor(droite, sfBlack);
    sfText_setString(droite, "Droite:");
    sfVector2f position = {1100, 600};
    sfText_setPosition(droite, position);
    return (droite);
}

sfText *interaction(void)
{
    sfText *interaction = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(interaction, font);
    sfText_setCharacterSize(interaction, 40);
    sfText_setColor(interaction, sfBlack);
    sfText_setString(interaction, "Interaction:");
    sfVector2f position = {1100, 700};
    sfText_setPosition(interaction, position);
    return (interaction);
}
