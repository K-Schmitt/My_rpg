/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** item_init_fight
*/

#include "../../include/csfmlib.h"

itemfunc_t tab4(RPG *rpg, itemfunc_t *tab)
{
    tab[9].sprite = rpg->obj.chat_inv.img_sprite;
    tab[9].convex = 0;
    tab[9].scale = vecf(0.8, 0.8);
    tab[9].x_y = veci(6, 94);
    tab[9].func = &use_hand;
    tab[10].sprite = NULL;
    tab[10].convex = 0;
    tab[10].scale = vecf(0.05, 0.05);
    tab[10].x_y = veci(0, 92);
    tab[10].func = &use_hand;
    return (*tab);
}

itemfunc_t tab3(RPG *rpg, itemfunc_t *tab)
{
    tab[6].sprite = rpg->obj.cactus.img_sprite;
    tab[6].convex = 1;
    tab[6].scale = vecf(0.07, 0.07);
    tab[6].x_y = veci(7, 90);
    tab[6].func = &use_cactus2;
    tab[7].sprite = rpg->obj.mushroom.img_sprite;
    tab[7].convex = 1;
    tab[7].scale = vecf(0.05, 0.05);
    tab[7].x_y = veci(8, 93);
    tab[7].func = &use_mushroom2;
    tab[8].sprite = rpg->obj.strenght.img_sprite;
    tab[8].convex = 1;
    tab[8].scale = vecf(0.05, 0.05);
    tab[8].x_y = veci(1, 91);
    tab[8].func = &use_potion2;
    tab4(rpg, tab);
    return (*tab);
}

itemfunc_t tab2(RPG *rpg, itemfunc_t *tab)
{
    tab[3].sprite = rpg->obj.ammo.img_sprite;
    tab[3].convex = 0;
    tab[3].scale = vecf(0.012, 0.012);
    tab[3].x_y = veci(9, 94);
    tab[3].func = &use_hand;
    tab[4].sprite = rpg->obj.spell.img_sprite;
    tab[4].convex = 0;
    tab[4].scale = vecf(0.05, 0.05);
    tab[4].x_y = veci(0, 92);
    tab[4].func = &use_spell;
    tab[5].sprite = rpg->obj.whisky.img_sprite;
    tab[5].convex = 1;
    tab[5].scale = vecf(0.013, 0.013);
    tab[5].x_y = veci(12, 92);
    tab[5].func = &use_whisky2;
    tab3(rpg, tab);
    return (*tab);
}

itemfunc_t *get_items(RPG *rpg)
{
    itemfunc_t *tab = (itemfunc_t*) malloc(sizeof(itemfunc_t) * 11);
    tab[0].sprite = rpg->obj.stick.img_sprite;
    tab[0].convex = 0;
    tab[0].scale = vecf(0.05, 0.05);
    tab[0].x_y = veci(5, 92);
    tab[0].func = &use_stick;
    tab[1].sprite = rpg->obj.sword.img_sprite;
    tab[1].convex = 0;
    tab[1].scale = vecf(0.06, 0.06);
    tab[1].x_y = veci(6, 92);
    tab[1].func = &use_sword;
    tab[2].sprite = rpg->obj.pistol.img_sprite;
    tab[2].convex = 0;
    tab[2].scale = vecf(0.05, 0.05);
    tab[2].x_y = veci(5, 95);
    tab[2].func = &use_pistol;
    tab2(rpg, tab); return (tab);
}
