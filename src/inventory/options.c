/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** description item
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

static void instance_use_item(RPG * rpg, int item)
{
    if (item == 6) {
        use_whisky(rpg);
        rpg->inv.nb_item[rpg->inv.options - 1]--;
        return;
    }
    if (item == 7 && rpg->stat.speed < 2) {
        use_cactus(rpg);
        rpg->inv.nb_item[rpg->inv.options - 1]--;
        return;
    }
    if (item == 8) {
        use_mushroom(rpg);
        rpg->inv.nb_item[rpg->inv.options - 1]--;
        return;
    }
    if (item == 9) {
        use_potion(rpg);
        rpg->inv.nb_item[rpg->inv.options - 1]--;
        return;
    }
}

static void delete_one(RPG * rpg)
{
    if (get(times(rpg->inv.clock_rm)) <= 0.5)
        sfText_setFillColor(rpg->inv.rm.text, sfWhite);
    else
        sfText_setFillColor(rpg->inv.rm.text, sfBlack);
    if (rm_pressed && rpg->inv.nb_item[rpg->inv.options - 1] > 0 &&
    get(times(rpg->inv.clock_rm)) > 0.5) {
        rpg->inv.nb_item[rpg->inv.options - 1]--;
        sfClock_restart(rpg->inv.clock_rm);
        if (rpg->inv.nb_item[rpg->inv.options - 1] == 0) {
            rpg->inv.occup[rpg->inv.options - 1] = 0;
            rpg->inv.id_item[rpg->inv.options - 1] = 0;
        }
    }
}

static void delete_all(RPG * rpg)
{
    if (get(times(rpg->inv.clock_rmall)) <= 0.5)
        sfText_setFillColor(rpg->inv.rm_all.text, sfWhite);
    else
        sfText_setFillColor(rpg->inv.rm_all.text, sfBlack);
    if (rm_all_pressed && rpg->inv.nb_item[rpg->inv.options - 1] > 0 &&
    get(times(rpg->inv.clock_rmall)) > 0.5) {
        rpg->inv.nb_item[rpg->inv.options - 1] = 0;
        rpg->inv.occup[rpg->inv.options - 1] = 0;
        rpg->inv.id_item[rpg->inv.options - 1] = 0;
        sfClock_restart(rpg->inv.clock_rmall);
    }
}

static void use_item(RPG * rpg, int item)
{
    if (get(times(rpg->inv.clock_use)) <= 0.5)
        sfText_setFillColor(rpg->inv.use.text, sfWhite);
    else
        sfText_setFillColor(rpg->inv.use.text, sfBlack);
    if (use_pressed && rpg->inv.nb_item[rpg->inv.options - 1] > 0 &&
    get(times(rpg->inv.clock_use)) > 0.5) {
        sfClock_restart(rpg->inv.clock_use);
        instance_use_item(rpg, item);
    }
    delete_one(rpg);
    delete_all(rpg);
}

void print_options(RPG *rpg, int item)
{
    if (item == 1 || item == 2 || item == 3 || item == 4 || item == 5)
        return;
    sfSprite_setPosition(rpg->inv.desc_bg.img_sprite,
    vecf(rpg->perso.pos.x - 10, rpg->perso.pos.y - 15));
    sfSprite_setRotation(rpg->inv.desc_bg.img_sprite, 270.0);
    sfRenderWindow_drawSprite(rw, rpg->inv.desc_bg.img_sprite, NULL);
    sfText_setPosition(rpg->inv.title_opt.text,
    vecf(rpg->perso.pos.x + 33, rpg->perso.pos.y - 95));
    sfText_setPosition(rpg->inv.rm.text,
    vecf(rpg->perso.pos.x + 22, rpg->perso.pos.y - 70));
    sfText_setPosition(rpg->inv.rm_all.text,
    vecf(rpg->perso.pos.x + 20, rpg->perso.pos.y - 55));
    sfText_setPosition(rpg->inv.use.text,
    vecf(rpg->perso.pos.x + 39, rpg->perso.pos.y - 40));
    sfRenderWindow_drawText(rw, rpg->inv.rm.text, NULL);
    sfRenderWindow_drawText(rw, rpg->inv.rm_all.text, NULL);
    sfRenderWindow_drawText(rw, rpg->inv.use.text, NULL);
    sfRenderWindow_drawText(rw, rpg->inv.title_opt.text, NULL);
    use_item(rpg, item);
}
