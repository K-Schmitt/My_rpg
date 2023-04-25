/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** inventory selected
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

void display_select(RPG *rpg)
{
    if (rpg->inv.select_x == 0 && rpg->inv.select_y == 0)
        return;
    sfSprite_setPosition(rpg->inv.slot_a.img_sprite,
    vecf(rpg->perso.pos.x - rpg->inv.select_x,
    rpg->perso.pos.y - rpg->inv.select_y));
    sfRenderWindow_drawSprite(rw, rpg->inv.slot_a.img_sprite, NULL);
    if (rpg->inv.nb_item[rpg->inv.select - 1] != 0 && rpg->inv.select != 0)
        description_item(rpg, rpg->inv.id_item[rpg->inv.select - 1]);
    if (rpg->inv.nb_item[rpg->inv.options - 1] != 0 && rpg->inv.options != 0)
        print_options(rpg, rpg->inv.id_item[rpg->inv.options - 1]);
}

static void case_click_bottom_next(RPG *rpg)
{
    if (slot14) {
        rpg->inv.select = 14;
        rpg->inv.options = 0;
        rpg->inv.select_x = 84.5;
        rpg->inv.select_y = 6;
    }
    if (slot15) {
        rpg->inv.select = 15;
        rpg->inv.options = 0;
        rpg->inv.select_x = 63.8;
        rpg->inv.select_y = 6;
    }
    if (slot16) {
        rpg->inv.select = 16;
        rpg->inv.options = 0;
        rpg->inv.select_x = 43.1;
        rpg->inv.select_y = 6;
    }
}

void case_click_bottom(RPG *rpg)
{
    if (slot11) {
        rpg->inv.select = 11;
        rpg->inv.options = 0;
        rpg->inv.select_x = 147;
        rpg->inv.select_y = 6;
    }
    if (slot12) {
        rpg->inv.select = 12;
        rpg->inv.options = 0;
        rpg->inv.select_x = 126;
        rpg->inv.select_y = 6;
    }
    if (slot13) {
        rpg->inv.select = 13;
        rpg->inv.options = 0;
        rpg->inv.select_x = 105.2;
        rpg->inv.select_y = 6;
    }
    case_click_bottom_next(rpg);
}

static void case_click_top_next(RPG *rpg)
{
    if (slot8) {
        rpg->inv.select = 8;
        rpg->inv.options = 0;
        rpg->inv.select_x = 84.5;
        rpg->inv.select_y = 27;
    }
    if (slot9) {
        rpg->inv.select = 9;
        rpg->inv.options = 0;
        rpg->inv.select_x = 63.8;
        rpg->inv.select_y = 27;
    }
    if (slot10) {
        rpg->inv.select = 10;
        rpg->inv.options = 0;
        rpg->inv.select_x = 43.1;
        rpg->inv.select_y = 27;
    }
}

void case_click_top(RPG *rpg)
{
    if (slot5) {
        rpg->inv.select = 5;
        rpg->inv.options = 0;
        rpg->inv.select_x = 147;
        rpg->inv.select_y = 27;
    }
    if (slot6) {
        rpg->inv.select = 6;
        rpg->inv.options = 0;
        rpg->inv.select_x = 126;
        rpg->inv.select_y = 27;
    }
    if (slot7) {
        rpg->inv.select = 7;
        rpg->inv.options = 0;
        rpg->inv.select_x = 105.2;
        rpg->inv.select_y = 27;
    }
    case_click_top_next(rpg);
}
