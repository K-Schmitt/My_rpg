/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** inv_fight
*/

#include "../../../include/csfmlib.h"

int check_in_inv(RPG *rpg, int id)
{
    for (int i = 0; i < 16; i++) {
        if (rpg->inv.id_item[i] == id)
            return (1);
    }
    return (0);
}

void remove_in_inv(RPG *rpg, int id)
{
    for (int i = 0; i < 16; i++) {
        if (rpg->inv.id_item[i] == id && rpg->inv.nb_item[i] > 1) {
            rpg->inv.nb_item[i]--;
        }
        if (rpg->inv.nb_item[i] == 1 && rpg->inv.id_item[i] == id) {
            rpg->inv.id_item[i] = 0;
            rpg->inv.nb_item[i] = 0;
            rpg->inv.occup[i] = 0;
        }
    }
}
