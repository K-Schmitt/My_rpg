/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** inventory selected
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static void init_item2(RPG *rpg)
{
    create_sprite(&rpg->obj.strenght, "./assets/inventory/potion.png",
    vecf(0.03, 0.03));
    create_sprite(&rpg->obj.chat_inv, "./assets/inventory/chat.png",
    vecf(0.6, 0.6));
    for (int i = 0; i < 16; i++)
        create_text2(&rpg->inv.nb_i[i], "0", 0.3, vecf(0, 0));
}

void init_item(RPG *rpg)
{
    create_sprite(&rpg->obj.stick, "./assets/inventory/stick.png",
    vecf(0.04, 0.04));
    create_sprite(&rpg->obj.sword, "./assets/inventory/sword.png",
    vecf(0.05, 0.05));
    create_sprite(&rpg->obj.pistol, "./assets/inventory/pistol.png",
    vecf(0.04, 0.04));
    create_sprite(&rpg->obj.ammo, "./assets/inventory/ammo.png",
    vecf(0.012, 0.012));
    create_sprite(&rpg->obj.spell, "./assets/inventory/spell.png",
    vecf(0.03, 0.03));
    create_sprite(&rpg->obj.whisky, "./assets/inventory/whisky.png",
    vecf(0.01, 0.01));
    create_sprite(&rpg->obj.cactus, "./assets/inventory/cactus.png",
    vecf(0.05, 0.05));
    create_sprite(&rpg->obj.mushroom, "./assets/inventory/mushroom.png",
    vecf(0.04, 0.04));
    init_item2(rpg);
}
