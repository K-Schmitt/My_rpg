/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** initialisation 2
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_quest(RPG *rpg)
{
    for (int i = 0; i < 18; i++)
        if (my_atoi(rpg->saves.file[i + 45]) == 0)
            rpg->pnjs.cat[i].draw = 0;
    rpg->quete.archi = my_atoi(rpg->saves.file[63]);
    rpg->quete.quete_chat = my_atoi(rpg->saves.file[64]);
    rpg->quete.boss1 = my_atoi(rpg->saves.file[65]);
    rpg->quete.boss2 = my_atoi(rpg->saves.file[66]);
    rpg->quete.boss3 = my_atoi(rpg->saves.file[67]);
    rpg->quete.b1_p1 = my_atoi(rpg->saves.file[68]);
    rpg->quete.b1_p2 = my_atoi(rpg->saves.file[69]);
    rpg->quete.b2_p1 = my_atoi(rpg->saves.file[70]);
    rpg->quete.b2_p2 = my_atoi(rpg->saves.file[71]);
    rpg->quete.b3_p1 = my_atoi(rpg->saves.file[72]);
    rpg->quete.b3_p2 = my_atoi(rpg->saves.file[73]);
    rpg->quete.b1_p3 = my_atoi(rpg->saves.file[92]);
    rpg->quete.b2_p3 = my_atoi(rpg->saves.file[93]);
    rpg->quete.b3_p3 = my_atoi(rpg->saves.file[94]);
    rpg->quete.name = rpg->saves.file[74];
    add_name(rpg);
    rpg->quete.cowboy = my_atoi(rpg->saves.file[84]);
}

static void create_text3(stocktext *x, char *str, float charasize,
sfVector2f pos)
{
    x->font = sfFont_createFromFile("./assets/fonts/immortal/IMMORTAL.ttf");
    x->text = sfText_create();
    sfText_setFont(x->text, x->font);
    sfText_setScale(x->text, vecf(charasize, charasize));
    sfText_setFillColor(x->text, sfWhite);
    sfText_setString(x->text, str);
    sfText_setPosition(x->text, pos);
    sfText_setOutlineColor(x->text, sfBlack);
    sfText_setOutlineThickness(x->text, 2);
}

static void init_shop_next(RPG *rpg)
{
    create_sprite(&rpg->shop.strenght_s, "./assets/inventory/potion.png",
    vecf(0.09, 0.09));
    create_sprite(&rpg->shop.banner[0], "./assets/inventory/text_bg.png",
    vecf(0.12, 0.12));
    create_sprite(&rpg->shop.banner[1], "./assets/inventory/text_bg.png",
    vecf(0.12, 0.12));
    create_sprite(&rpg->shop.banner[2], "./assets/inventory/text_bg.png",
    vecf(0.12, 0.12));
    create_sprite(&rpg->shop.banner[3], "./assets/inventory/text_bg.png",
    vecf(0.12, 0.12));
    create_sprite(&rpg->shop.banner[4], "./assets/inventory/text_bg.png",
    vecf(0.12, 0.12));
    rpg->shop.c_shop1 = sfClock_create();
    rpg->shop.c_shop2 = sfClock_create();
    rpg->shop.c_shop3 = sfClock_create();
    rpg->shop.c_shop4 = sfClock_create();
    rpg->shop.c_shop5 = sfClock_create();
    rpg->shop.is_open = false;
}

void init_shop(RPG *rpg)
{
    create_text3(&rpg->shop.shop_des, "Magasin", 1.5, vecf(0, 0));
    create_sprite(&rpg->shop.coin_s, "./assets/inventory/coin.png",
    vecf(0.15, 0.15));
    create_text3(&rpg->shop.coin_nb_s, "0", 0.8, vecf(0, 0));
    create_text3(&rpg->shop.price_1, "Cout: 10  Acheter", 0.4, vecf(0, 0));
    create_text3(&rpg->shop.price_2, "Cout: 10  Acheter", 0.4, vecf(0, 0));
    create_text3(&rpg->shop.price_3, "Cout: 10  Acheter", 0.4, vecf(0, 0));
    create_text3(&rpg->shop.price_4, "Cout: 10 Acheter", 0.4, vecf(0, 0));
    create_text3(&rpg->shop.price_5, "Cout: 5 Acheter", 0.4, vecf(0, 0));
    create_sprite(&rpg->shop.shop_bg, "./assets/inventory/invent_bg2.png",
    vecf(0.5, 0.5));
    create_sprite(&rpg->shop.ammo_s, "./assets/inventory/ammo.png",
    vecf(0.036, 0.036));
    create_sprite(&rpg->shop.cactus_s, "./assets/inventory/cactus.png",
    vecf(0.15, 0.15));
    create_sprite(&rpg->shop.mushroom_s, "./assets/inventory/mushroom.png",
    vecf(0.12, 0.12));
    create_sprite(&rpg->shop.whisky_s, "./assets/inventory/whisky.png",
    vecf(0.03, 0.03));
    init_shop_next(rpg);
}

void init_inventory_3(RPG *rpg)
{
    create_text3(&rpg->inv.lvl, "Niveau:", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.life, "Vie:", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.attack, "Force:", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.resist, "Resistance:", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.speed, "Vitesse:", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.lvl_nb, "0", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.life_nb, "0", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.attack_nb, "0", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.resist_nb, "0", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.speed_nb, "0", 0.25, vecf(0, 0));
    create_text3(&rpg->inv.coin_nb, "0", 0.25, vecf(0, 0));
    create_sprite(&rpg->inv.coin, "./assets/inventory/coin.png",
    vecf(0.04, 0.04));
    create_sprite(&rpg->inv.perso , "./assets/dialogue/me.png",
    vecf(1.7, 1.7));
}
