/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** description item
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

static char *get_text_next(char *text, int item)
{
    if (item == 7)
        my_strcpy(text, "Une potion issus d'un cactus\nSpeed: +0.5");
    if (item == 8)
        my_strcpy(text, "Un champignon etrange\n\
Resistance: +1");
    if (item == 9)
        my_strcpy(text, "Une potion ameliorant la force\nDegats: +1");
    if (item == 10)
        my_strcpy(text, "Des petits chats, que font-ils ici ?");
    return (text);
}

static char *get_text(int item)
{
    char *text = malloc(sizeof(char) * 100);
    text = get_text_next(text, item);
    if (item == 1)
        my_strcpy(text, "Un petit baton pas tres utile\npour se battre\n\
Degats: +10");
    if (item == 2)
        my_strcpy(text, "Une puissante epee,\na manier avec precaution\n\
Degats: +30");
    if (item == 3)
        my_strcpy(text, "Un revolver six coups,\npeu utile sans balles\n\
Degats: +20");
    if (item == 4)
        my_strcpy(text, "Des balles de revolver,\npeu utiles sans revolver");
    if (item == 5)
        my_strcpy(text, "Une etrange boule de feu,\nsemblant tres puissante\n\
Degats: +40");
    if (item == 6)
        my_strcpy(text, "Une bouteille de Whisky,\nattention a ne pas en \
abuser\nVie: + 1");
    return (text);
}

void description_item(RPG *rpg, int item)
{
    char *text;
    sfSprite_setPosition(rpg->inv.desc_bg.img_sprite,
    vecf(rpg->perso.pos.x - 10, rpg->perso.pos.y - 15));
    sfSprite_setRotation(rpg->inv.desc_bg.img_sprite, 270.0);
    sfRenderWindow_drawSprite(rw, rpg->inv.desc_bg.img_sprite, NULL);
    text = get_text(item);
    sfText_setPosition(rpg->inv.title_des.text,
    vecf(rpg->perso.pos.x + 12, rpg->perso.pos.y - 85));
    sfText_setPosition(rpg->inv.desciption.text,
    vecf(rpg->perso.pos.x + 5, rpg->perso.pos.y - 55));
    sfText_setString(rpg->inv.desciption.text, text);
    sfText_setFillColor(rpg->inv.title_des.text, sfBlack);
    sfText_setFillColor(rpg->inv.desciption.text, sfBlack);
    sfRenderWindow_drawText(rw, rpg->inv.desciption.text, NULL);
    sfRenderWindow_drawText(rw, rpg->inv.title_des.text, NULL);
    free(text);
}
