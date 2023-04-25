/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** actualisation
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void actu_pnj(RPG *rpg)
{
    actu_cat(rpg);
    actu_spider(rpg);
    actu_squel(rpg);
    actu_mage(rpg);
    actu_boss(rpg);
    actu_dsquel(rpg);
    actu_snowman(rpg);
    actu_sword(rpg);
    actu_barman(rpg);
}

void actu_all(RPG *rpg)
{
    actuwindow(rpg);
    actu_pnj(rpg);
    move_pnj(rpg);
    if (rpg->zone == 6) {
        actu_button(rpg);
    }
    actu_pique(rpg);
    update_effect(rpg);
    move_player(rpg);
    actu_inventory(rpg);
    actu_quete(rpg);
    interact_instance(rpg);
    if (MyKeybook)
        book(rpg);
}
