/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** initialisation
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void init_stat(RPG *rpg)
{
    rpg->stat.attack = 1;
    rpg->stat.max_life = 55;
    rpg->stat.life = rpg->stat.max_life;
    rpg->stat.resist = 1;
    rpg->stat.speed = 1;
    rpg->stat.book = 1;
    rpg->stat.lvl = 1.0;
    rpg->stat.b_attack = 0;
    rpg->stat.b_resist = 0;
    rpg->stat.clock_speed = sfClock_create();
    rpg->stat.clock_resist = sfClock_create();
    rpg->stat.clock_attack = sfClock_create();
    rpg->stat.nb_attack = 0;
    rpg->stat.nb_resist = 0;
    rpg->stat.nb_speed = 0;
    rpg->stat.maxXP = 50;
    rpg->stat.xp = 0;
    rpg->perso.sizeX = 96;
}

static void init_particle(RPG *rpg)
{
    for (int i = 0; i < 1000; i++) {
        rpg->part[i].snow = sfCircleShape_create();
        sfCircleShape_setRadius(rpg->part[i].snow, 1.8);
        sfCircleShape_setOutlineThickness(rpg->part[i].snow, 0.3);
        sfCircleShape_setFillColor(rpg->part[i].snow, sfWhite);
        sfCircleShape_setOutlineColor(rpg->part[i].snow,
        sfColor_fromRGBA(60, 60, 60, 150));
        rpg->part[i].pos_snow.x = (float)(840 + rand() % 810);
        rpg->part[i].pos_snow.y = (float)(-rand() % 660);
        sfCircleShape_setPosition(rpg->part[i].snow, rpg->part[i].pos_snow);
    }
}

static void init_inventory_next(RPG *rpg)
{
    create_text2(&rpg->inv.title_opt, "Objet", 0.5, vecf(0, 0));
    create_text2(&rpg->inv.rm, "Supprimer Un", 0.3, vecf(0, 0));
    create_text2(&rpg->inv.rm_all, "Supprimer Tout", 0.3, vecf(0, 0));
    create_text2(&rpg->inv.use, "Utiliser", 0.3, vecf(0, 0));
    sfText_setFillColor(rpg->inv.title_opt.text, sfBlack);
    sfText_setFillColor(rpg->inv.rm.text, sfBlack);
    sfText_setFillColor(rpg->inv.rm_all.text, sfBlack);
    sfText_setFillColor(rpg->inv.use.text, sfBlack);
    sfText_setOutlineColor(rpg->inv.invent_text.text, sfBlack);
    sfText_setOutlineThickness(rpg->inv.invent_text.text, 1);
    rpg->inv.clock_rm = sfClock_create();
    rpg->inv.clock_rmall = sfClock_create();
    rpg->inv.clock_use = sfClock_create();
    for (int i = 0; i < 16; i++)
        rpg->inv.in_case[i] = 0;
    rpg->inv.id_active = 0;
    rpg->inv.sel_a = 0;
    init_inventory_3(rpg);
}

static void init_inventory(RPG *rpg)
{
    create_sprite(&rpg->inv.invent_bg,
    "./assets/inventory/invent_bg2.png", vecf(0.16, 0.15));
    create_text2(&rpg->inv.invent_text,
    "Inventaire", 0.7, vecf(0, 0));
    create_sprite(&rpg->inv.slot_ne,
    "./assets/inventory/invent.png", vecf(1.15, 1.15));
    create_sprite(&rpg->inv.slot_e,
    "./assets/inventory/equip.png", vecf(1.15, 1.15));
    create_sprite(&rpg->inv.slot_a,
    "./assets/inventory/static.png", vecf(1.18, 1.18));
    create_text2(&rpg->inv.title_des, "Description", 0.5, vecf(0, 0));
    create_text2(&rpg->inv.desciption, "", 0.2, vecf(0, 0));
    create_rect(&rpg->inv.opt_rect, vecf(47, 8), vecf(0, 0), 3);
    create_sprite(&rpg->inv.desc_bg, "./assets/inventory/bg_parchment.png",
    vecf(0.11, 0.11));
    rpg->inv.is_press = false;
    rpg->inv.clock = sfClock_create();
    rpg->inv.select = 0;
    rpg->inv.options = 0;
    init_inventory_next(rpg);
}

void init_all(RPG *rpg)
{
    rpg->cheat = 0;
    init_window(rpg);
    init_key(rpg);
    init_stat(rpg);
    init_item(rpg);
    init_map(rpg);
    init_shop(rpg);
    create_perso(&rpg->perso, "./assets/me.png", vecf(1, 1), veci(32, 32));
    init_inventory(rpg);
    init_pnj(rpg);
    init_all_sound(rpg);
    init_pique(rpg);
    init_particle(rpg);
    init_quete(rpg);
    rpg->zone = 1;
    rpg->saves.option = 1;
    make_save(rpg);
    init_quest(rpg);
    init_touche(rpg);
    init_fight(rpg);
}
