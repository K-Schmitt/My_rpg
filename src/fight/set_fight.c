/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** set_fight
*/

#include "../../include/csfmlib.h"

void set_slot(RPG *rpg, itemfunc_t tab, int x)
{
    sfSprite_setPosition(tab.sprite, \
    vecf(sfView_getCenter(rpg->area).x + x + tab.x_y.x, \
    sfView_getCenter(rpg->area).y + tab.x_y.y));
    sfSprite_setScale(tab.sprite, tab.scale);
}

void check_inventory(RPG *rpg)
{
    itemfunc_t *tab = get_items(rpg);
    int tab_coord[4] = {-70, -34, 2, 38};
    for (int i = 0; i < 4; i++)
        if (rpg->inv.occup[i]) {
            rpg->fight->slot[i] = rpg->inv.id_item[i];
            set_slot(rpg, tab[rpg->inv.id_item[i] - 1], tab_coord[i]);
        } else {
            rpg->fight->slot[i] = 0;
        }
}

void init_ennemy(RPG *rpg, stockennemie *ennemy)
{
    ennemy->z.top = 0;
    ennemy->z.left = 0;
    ennemy->life = ennemy->max_life;
    rpg->fight->ennemy = ennemy;
}

void set_pos(RPG* rpg)
{
    sfSprite_setPosition(rpg->fight->background.img_sprite, \
    vecf(sfView_getCenter(rpg->area).x, sfView_getCenter(rpg->area).y));
    sfSprite_setOrigin(rpg->fight->background.img_sprite, \
    vecf(640, 360));
    sfSprite_setPosition(rpg->fight->equip_bar.img_sprite, \
    vecf(sfView_getCenter(rpg->area).x - 76, \
    sfView_getCenter(rpg->area).y + 80));
    sfSprite_setPosition(rpg->fight->equip_unusable.img_sprite, \
    vecf(sfView_getCenter(rpg->area).x - 76,\
    sfView_getCenter(rpg->area).y + 80));
    sfSprite_setPosition(rpg->fight->equip_unusable_block.img_sprite, \
    vecf(sfView_getCenter(rpg->area).x - 76, \
    sfView_getCenter(rpg->area).y + 80));
}

void set_fight(RPG *rpg)
{
    rpg->inv.is_press = 0;
    rpg->fight->lifebar1 = set_health_bar(rpg, \
    vecf(50, 5), veci(-192, -15));
    rpg->fight->lifebar2 = set_health_bar(rpg, \
    vecf(50, 5), veci(127, -15));
    rpg->fight->select = 0;
    rpg->fight->convex_nb = 1;
    check_inventory(rpg);
    set_pos(rpg);
    transition_cercle(rpg, 3);
    cut_music(rpg);
    sfMusic_play(rpg->music.fight);
    rpg->music.music_s = 1;
}
