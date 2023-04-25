/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** display nb item
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdlib.h>

void display_item_number(RPG *rpg, int i)
{
    if (rpg->inv.nb_item[i] < 2)
        return;
    char *nb = my_int_to_str(rpg->inv.nb_item[i]);
    sfVector2f pos = enter_pos(rpg, i);
    sfText_setPosition(rpg->inv.nb_i[i].text, vecf(pos.x + 12, pos.y + 7));
    sfText_setString(rpg->inv.nb_i[i].text, nb);
    sfText_setFillColor(rpg->inv.nb_i[i].text, sfBlack);
    sfRenderWindow_drawText(rw, rpg->inv.nb_i[i].text, NULL);
}
