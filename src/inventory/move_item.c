/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** move item
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

static void which_case_is_clicked(RPG *rpg)
{
    (slot4) ? rpg->inv.in_case[0] = 1 : 0;
    (slot3) ? rpg->inv.in_case[1] = 1 : 0;
    (slot2) ? rpg->inv.in_case[2] = 1 : 0;
    (slot1) ? rpg->inv.in_case[3] = 1 : 0;
    (slot5) ? rpg->inv.in_case[4] = 1 : 0;
    (slot6) ? rpg->inv.in_case[5] = 1 : 0;
    (slot7) ? rpg->inv.in_case[6] = 1 : 0;
    (slot8) ? rpg->inv.in_case[7] = 1 : 0;
    (slot9) ? rpg->inv.in_case[8] = 1 : 0;
    (slot10) ? rpg->inv.in_case[9] = 1 : 0;
    (slot11) ? rpg->inv.in_case[10] = 1 : 0;
    (slot12) ? rpg->inv.in_case[11] = 1 : 0;
    (slot13) ? rpg->inv.in_case[12] = 1 : 0;
    (slot14) ? rpg->inv.in_case[13] = 1 : 0;
    (slot15) ? rpg->inv.in_case[14] = 1 : 0;
    (slot16) ? rpg->inv.in_case[15] = 1 : 0;
}

static void move_sprite_2(RPG *rpg)
{
    if (rpg->inv.id_active == 7)
        sfSprite_setPosition(rpg->obj.cactus.img_sprite,
        vecf(rpg->mouse.x - 5, rpg->mouse.y - 5));
    if (rpg->inv.id_active == 8)
        sfSprite_setPosition(rpg->obj.mushroom.img_sprite,
        vecf(rpg->mouse.x - 5, rpg->mouse.y - 2));
    if (rpg->inv.id_active == 9)
        sfSprite_setPosition(rpg->obj.strenght.img_sprite,
        vecf(rpg->mouse.x - 7, rpg->mouse.y - 3));
    if (rpg->inv.id_active == 10)
        sfSprite_setPosition(rpg->obj.chat_inv.img_sprite,
        vecf(rpg->mouse.x - 7, rpg->mouse.y - 3));
}

static void move_sprite(RPG *rpg)
{
    if (rpg->inv.id_active == 1)
        sfSprite_setPosition(rpg->obj.stick.img_sprite,
        vecf(rpg->mouse.x - 4, rpg->mouse.y - 4));
    if (rpg->inv.id_active == 2)
        sfSprite_setPosition(rpg->obj.sword.img_sprite,
        vecf(rpg->mouse.x - 5, rpg->mouse.y - 5));
    if (rpg->inv.id_active == 3)
        sfSprite_setPosition(rpg->obj.pistol.img_sprite,
        vecf(rpg->mouse.x - 8, rpg->mouse.y - 3));
    if (rpg->inv.id_active == 4)
        sfSprite_setPosition(rpg->obj.ammo.img_sprite,
        vecf(rpg->mouse.x - 5, rpg->mouse.y - 3));
    if (rpg->inv.id_active == 5)
        sfSprite_setPosition(rpg->obj.spell.img_sprite,
        vecf(rpg->mouse.x - 7, rpg->mouse.y - 2));
    if (rpg->inv.id_active == 6)
        sfSprite_setPosition(rpg->obj.whisky.img_sprite,
        vecf(rpg->mouse.x - 1, rpg->mouse.y - 3));
    move_sprite_2(rpg);
}

static void released_mouse(RPG *rpg)
{
    for (int i = 0; i < 16; i++)
        rpg->inv.in_case[i] = 0;
    rpg->inv.id_active = 0;
}

void move_item(RPG *rpg)
{
    if (rpg->inv.id_active == 0)
        which_case_is_clicked(rpg);
    for (int i = 0; i < 16; i++) {
        if (rpg->inv.in_case[i] != 0 && rpg->inv.occup[i] != 0) {
            rpg->inv.id_active = rpg->inv.id_item[i];
            is_released(rpg, i);
        }
        if (sfTrue != sfMouse_isButtonPressed(sfMouseLeft)) {
            released_mouse(rpg);
            return;
        }
    }
    move_sprite(rpg);
}
