/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** draw item
*/


#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static void draw_item_5(RPG *rpg, int i, sfVector2f pos)
{
    if (rpg->inv.id_item[i] == 9 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.strenght.img_sprite,
            (sfVector2f) {pos.x, pos.y + 2});
        sfRenderWindow_drawSprite(rw, rpg->obj.strenght.img_sprite, NULL);
    }
    if (rpg->inv.id_item[i] == 10 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.chat_inv.img_sprite,
            vecf(pos.x + 2, pos.y + 2));
        sfRenderWindow_drawSprite(rw, rpg->obj.chat_inv.img_sprite, NULL);
    }
}

static void draw_item_4(RPG *rpg, int i, sfVector2f pos)
{
    if (rpg->inv.id_item[i] == 7 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.cactus.img_sprite,
            (sfVector2f) {pos.x + 2, pos.y});
        sfRenderWindow_drawSprite(rw, rpg->obj.cactus.img_sprite, NULL);
        return;
    }
    if (rpg->inv.id_item[i] == 8 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.mushroom.img_sprite,
            (sfVector2f) {pos.x + 2, pos.y + 2});
        sfRenderWindow_drawSprite(rw, rpg->obj.mushroom.img_sprite, NULL);
        return;
    }
    draw_item_5(rpg, i, pos);
}

static void draw_item_3(RPG *rpg, int i, sfVector2f pos)
{
    if (rpg->inv.id_item[i] == 5 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.spell.img_sprite,
            (sfVector2f) {pos.x, pos.y + 1});
        sfRenderWindow_drawSprite(rw, rpg->obj.spell.img_sprite, NULL);
        return;
    }
    if (rpg->inv.id_item[i] == 6 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.whisky.img_sprite,
            (sfVector2f) {pos.x + 6, pos.y + 1});
        sfRenderWindow_drawSprite(rw, rpg->obj.whisky.img_sprite, NULL);
        return;
    }
    draw_item_4(rpg, i, pos);
}

static void draw_item_2(RPG *rpg, int i, sfVector2f pos)
{
    if (rpg->inv.id_item[i] == 3 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.pistol.img_sprite,
            (sfVector2f) {pos.x + 1, pos.y + 2});
        sfRenderWindow_drawSprite(rw, rpg->obj.pistol.img_sprite, NULL);
        return;
    }
    if (rpg->inv.id_item[i] == 4 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.ammo.img_sprite,
            (sfVector2f) {pos.x + 2, pos.y});
        sfRenderWindow_drawSprite(rw, rpg->obj.ammo.img_sprite, NULL);
        return;
    }
    draw_item_3(rpg, i, pos);
}

void draw_item(RPG *rpg, int i)
{
    sfVector2f pos = enter_pos(rpg, i);
    if (rpg->inv.id_item[i] == 1 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.stick.img_sprite, pos);
        sfRenderWindow_drawSprite(rw, rpg->obj.stick.img_sprite, NULL);
        return;
    }
    if (rpg->inv.id_item[i] == 2 && rpg->inv.nb_item[i] > 0) {
        if (rpg->inv.id_item[i] != rpg->inv.id_active)
            sfSprite_setPosition(rpg->obj.sword.img_sprite, pos);
        sfRenderWindow_drawSprite(rw, rpg->obj.sword.img_sprite, NULL);
        return;
    }
    draw_item_2(rpg, i, pos);
}
