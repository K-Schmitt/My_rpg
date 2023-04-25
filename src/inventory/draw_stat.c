/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** draw stat
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdlib.h>

static void draw_stat_3(RPG *rpg)
{
    sfText_setPosition(rpg->inv.life.text,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y - 93));
    sfRenderWindow_drawText(rw, rpg->inv.life.text, NULL);
    sfText_setPosition(rpg->inv.lvl.text,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y - 83));
    sfRenderWindow_drawText(rw, rpg->inv.lvl.text, NULL);
    sfText_setPosition(rpg->inv.attack.text,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y - 73));
    sfRenderWindow_drawText(rw, rpg->inv.attack.text, NULL);
    sfText_setPosition(rpg->inv.resist.text,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y - 63));
    sfRenderWindow_drawText(rw, rpg->inv.resist.text, NULL);
    sfText_setPosition(rpg->inv.speed.text,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y - 53));
    sfRenderWindow_drawText(rw, rpg->inv.speed.text, NULL);
    sfSprite_setPosition(rpg->inv.coin.img_sprite,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y - 41.5));
    sfRenderWindow_drawSprite(rw, rpg->inv.coin.img_sprite, NULL);
}

static void draw_stat_2(RPG *rpg)
{
    char *nb_resist = float_to_str(rpg->stat.resist);
    sfText_setPosition(rpg->inv.resist_nb.text,
    vecf(rpg->perso.pos.x - 47, rpg->perso.pos.y - 63));
    sfText_setString(rpg->inv.resist_nb.text, nb_resist);
    sfRenderWindow_drawText(rw, rpg->inv.resist_nb.text, NULL);
    char *nb_speed = float_to_str(rpg->stat.speed);
    sfText_setPosition(rpg->inv.speed_nb.text,
    vecf(rpg->perso.pos.x - 58, rpg->perso.pos.y - 53));
    sfText_setString(rpg->inv.speed_nb.text, nb_speed);
    sfRenderWindow_drawText(rw, rpg->inv.speed_nb.text, NULL);
    char *coin = my_int_to_str(rpg->stat.coin);
    sfText_setPosition(rpg->inv.coin_nb.text,
    vecf(rpg->perso.pos.x - 75, rpg->perso.pos.y - 41.5));
    sfText_setString(rpg->inv.coin_nb.text, coin);
    sfRenderWindow_drawText(rw, rpg->inv.coin_nb.text, NULL);
    free(coin);
    free(nb_resist);
    free(nb_speed);
    draw_stat_3(rpg);
}

void draw_stat(RPG *rpg)
{
    char *nb_life = float_to_str(rpg->stat.life);
    sfText_setPosition(rpg->inv.life_nb.text,
    vecf(rpg->perso.pos.x - 70, rpg->perso.pos.y - 93));
    sfText_setString(rpg->inv.life_nb.text, nb_life);
    sfRenderWindow_drawText(rw, rpg->inv.life_nb.text, NULL);
    char *nb_lvl = my_int_to_str(rpg->stat.lvl);
    sfText_setPosition(rpg->inv.lvl_nb.text,
    vecf(rpg->perso.pos.x - 58, rpg->perso.pos.y - 83));
    sfText_setString(rpg->inv.lvl_nb.text, nb_lvl);
    sfRenderWindow_drawText(rw, rpg->inv.lvl_nb.text, NULL);
    char *nb_attack = float_to_str(rpg->stat.attack);
    sfText_setPosition(rpg->inv.attack_nb.text,
    vecf(rpg->perso.pos.x - 65, rpg->perso.pos.y - 73));
    sfText_setString(rpg->inv.attack_nb.text, nb_attack);
    sfRenderWindow_drawText(rw, rpg->inv.attack_nb.text, NULL);
    free(nb_life);
    free(nb_lvl);
    free(nb_attack);
    draw_stat_2(rpg);
}
