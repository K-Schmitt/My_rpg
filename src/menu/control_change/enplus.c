/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** enplus.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfText *inventaire(void)
{
    sfText *inventaire = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(inventaire, font);
    sfText_setCharacterSize(inventaire, 40);
    sfText_setColor(inventaire, sfBlack);
    sfText_setString(inventaire, "Inventaire:");
    sfVector2f position = {1100, 100};
    sfText_setPosition(inventaire, position);
    return (inventaire);
}

sfText *livre(void)
{
    sfText *livre = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(livre, font);
    sfText_setCharacterSize(livre, 40);
    sfText_setColor(livre, sfBlack);
    sfText_setString(livre, "Livre:");
    sfVector2f position = {1100, 200};
    sfText_setPosition(livre, position);
    return (livre);
}

sfText *tuch_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1220, 295});
    return (text);
}

sfText *tuch_down_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1200, 395});
    return (text);
}

sfText *tuch_right_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1225, 595});
    return (text);
}
