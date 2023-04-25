/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** change item
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

static void is_released_3(RPG *rpg, int i, int slot)
{
    if (slot == -1)
        return;
    rpg->inv.occup[slot] = 1;
    rpg->inv.occup[i] = 0;
    rpg->inv.nb_item[slot] = rpg->inv.nb_item[i];
    rpg->inv.nb_item[i] = 0;
    rpg->inv.id_item[slot] = rpg->inv.id_item[i];
    rpg->inv.id_item[i] = 0;
    for (int i = 0; i < 16; i++)
        rpg->inv.in_case[i] = 0;
    rpg->inv.id_active = 0;
}

static void is_released_2(RPG *rpg, int i, int slot)
{
    if (rel10 && rpg->inv.occup[9] == 0)
        slot = 9;
    if (rel11 && rpg->inv.occup[10] == 0)
        slot = 10;
    if (rel12 && rpg->inv.occup[11] == 0)
        slot = 11;
    if (rel13 && rpg->inv.occup[12] == 0)
        slot = 12;
    if (rel14 && rpg->inv.occup[13] == 0)
        slot = 13;
    if (rel15 && rpg->inv.occup[14] == 0)
        slot = 14;
    if (rel16 && rpg->inv.occup[15] == 0)
        slot = 15;
    is_released_3(rpg, i, slot);
}

void is_released(RPG *rpg, int i)
{
    int slot = -1;
    if (rel4 && rpg->inv.occup[0] == 0)
        slot = 0;
    if (rel3 && rpg->inv.occup[1] == 0)
        slot = 1;
    if (rel2 && rpg->inv.occup[2] == 0)
        slot = 2;
    if (rel1 && rpg->inv.occup[3] == 0)
        slot = 3;
    if (rel5 && rpg->inv.occup[4] == 0)
        slot = 4;
    if (rel6 && rpg->inv.occup[5] == 0)
        slot = 5;
    if (rel7 && rpg->inv.occup[6] == 0)
        slot = 6;
    if (rel8 && rpg->inv.occup[7] == 0)
        slot = 7;
    if (rel9 && rpg->inv.occup[8] == 0)
        slot = 8;
    is_released_2(rpg, i, slot);
}
