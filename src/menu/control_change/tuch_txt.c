/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** create_txt.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfText *tuch_left_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1270, 495});
    return (text);
}

sfText *tuch_inv_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1300, 95});
    return (text);
}

sfText *tuch_book_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1210, 195});
    return (text);
}

sfText *tuch_int_text(void)
{
    sfText *text;
    sfFont *font;
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f){1325, 695});
    return (text);
}
