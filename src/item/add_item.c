/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** add item
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void push_in_inventory(RPG *rpg, int id)
{
    if (rpg->cheat == 0 && rpg->shop.is_open == 0)
        start_dialogue_info(rpg, "./assets/dialogue/xp.txt", 6,
        get_name_item(id));
    for (int i = 0; i < 16; i++)
        if (rpg->inv.id_item[i] == id && rpg->inv.nb_item[i] < 64) {
            rpg->inv.nb_item[i]++;
            return;
        }
    for (int i = 0; i < 16; i++)
        if (rpg->inv.occup[i] == 0 && rpg->inv.nb_item[i] < 64) {
            rpg->inv.occup[i] = 1;
            rpg->inv.nb_item[i]++;
            rpg->inv.id_item[i] = id;
            return;
        }
}

void add_item(RPG *rpg)
{
    if (kbp(sfKeyNum1))
        push_in_inventory(rpg, 1);
    if (kbp(sfKeyNum2))
        push_in_inventory(rpg, 2);
    if (kbp(sfKeyNum3))
        push_in_inventory(rpg, 3);
    if (kbp(sfKeyNum4))
        push_in_inventory(rpg, 4);
    if (kbp(sfKeyNum5))
        push_in_inventory(rpg, 5);
    if (kbp(sfKeyNum6))
        push_in_inventory(rpg, 6);
    if (kbp(sfKeyNum7))
        push_in_inventory(rpg, 7);
    if (kbp(sfKeyNum8))
        push_in_inventory(rpg, 8);
    if (kbp(sfKeyNum9))
        push_in_inventory(rpg, 9);
}
