/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** inventory
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static void find_item(RPG *rpg)
{
    for (int i = 0; i < 16; i++)
        if (rpg->inv.occup[i] != 0) {
            draw_item(rpg, i);
            display_item_number(rpg, i);
        }
}

static void draw_inventory_next(RPG *rpg)
{
    sfSprite_setPosition(rpg->inv.perso.img_sprite,
    vecf(rpg->perso.pos.x - 160, rpg->perso.pos.y - 80));
    sfRenderWindow_drawSprite(rw, rpg->inv.perso.img_sprite, NULL);
}

static void draw_inventory(RPG *rpg)
{
    sfSprite_setPosition(rpg->inv.invent_bg.img_sprite,
    vecf(rpg->perso.pos.x - 220, rpg->perso.pos.y - 115));
    sfRenderWindow_drawSprite(rw, rpg->inv.invent_bg.img_sprite, NULL);
    sfText_setPosition(rpg->inv.invent_text.text,
    vecf(rpg->perso.pos.x - 210, rpg->perso.pos.y - 118));
    sfRenderWindow_drawText(rw, rpg->inv.invent_text.text, NULL);
    sfSprite_setPosition(rpg->inv.slot_e.img_sprite,
    vecf(rpg->perso.pos.x - 215, rpg->perso.pos.y - 90));
    sfSprite_setPosition(rpg->inv.slot_ne.img_sprite,
    vecf(rpg->perso.pos.x - 150, rpg->perso.pos.y - 30));
    sfRenderWindow_drawSprite(rw, rpg->inv.slot_e.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->inv.slot_ne.img_sprite, NULL);
    draw_inventory_next(rpg);
    case_click_top(rpg);
    case_click_bottom(rpg);
    case_click_active(rpg);
    delete_item(rpg);
    find_item(rpg);
    move_item(rpg);
}

void actu_inventory(RPG *rpg)
{
    if (kbp(rpg->stat.inv_k) && rpg->inv.is_press == false &&
    get(times(rpg->inv.clock)) > 0.5) {
        rpg->inv.select_x = 0;
        rpg->inv.select_y = 0;
        rpg->inv.is_press = true;
        sfClock_restart(rpg->inv.clock);
    } else if (kbp(rpg->stat.inv_k) && get(times(rpg->inv.clock)) > 0.5) {
        rpg->inv.is_press = false;
        sfClock_restart(rpg->inv.clock);
    }
}

void display_inventory(RPG *rpg)
{
    if (rpg->inv.is_press == true) {
        draw_inventory(rpg);
        display_select(rpg);
        draw_stat(rpg);
    }
}
