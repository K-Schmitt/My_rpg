/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** save
*/

#include "../../include/csfmlib.h"
#include <stdio.h>

static void save_4(RPG *rpg, FILE *file)
{
    for (int i = 0; i < 18; i++) {
        fwrite(my_int_to_str(rpg->pnjs.cat[i].draw), sizeof(char) *
        my_strlen((my_int_to_str(rpg->pnjs.cat[i].draw))), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fwrite(rpg->saves.archi_s, sizeof(char) *
    my_strlen(rpg->saves.archi_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.folle_s, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.boss1), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.boss1)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.boss2), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.boss2)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.boss3), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.boss3)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_5(rpg, file);
}

static void save_3(RPG *rpg, FILE *file)
{
    fwrite(rpg->saves.lvl_s, sizeof(char) *
    my_strlen(rpg->saves.lvl_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.attack_s, sizeof(char) *
    my_strlen(rpg->saves.attack_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.resist_s, sizeof(char) *
    my_strlen(rpg->saves.resist_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.speed_s, sizeof(char) *
    my_strlen(rpg->saves.speed_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.coin_s, sizeof(char) *
    my_strlen(rpg->saves.coin_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_4(rpg, file);
}

static void save_2(RPG *rpg, FILE *file)
{
    char *zero = my_int_to_str(0);
    fwrite(zero, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    for (int i = 0; i < 16; i++) {
        fwrite(my_int_to_str(rpg->inv.nb_item[i]), sizeof(char) *
        my_strlen((my_int_to_str(rpg->inv.nb_item[i]))), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    for (int i = 0; i < 16; i++) {
        fwrite(my_int_to_str(rpg->inv.id_item[i]), sizeof(char) *
        my_strlen((my_int_to_str(rpg->inv.id_item[i]))), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fwrite(rpg->saves.book_s, sizeof(char) *
    my_strlen(rpg->saves.book_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.life_s, sizeof(char) *
    my_strlen(rpg->saves.life_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_3(rpg, file);
}

static void fill_save(RPG *rpg)
{
    rpg->saves.x_s = float_to_str(rpg->perso.pos.x - 745);
    rpg->saves.y_s = float_to_str(rpg->perso.pos.y - 970);
    rpg->saves.zone_s = my_int_to_str(rpg->zone);
    rpg->saves.book_s = my_int_to_str(rpg->stat.book);
    rpg->saves.life_s = float_to_str(rpg->stat.life);
    rpg->saves.lvl_s = my_int_to_str(rpg->stat.lvl);
    rpg->saves.attack_s = float_to_str(rpg->stat.attack);
    rpg->saves.resist_s = float_to_str(rpg->stat.resist);
    rpg->saves.speed_s = float_to_str(rpg->stat.speed);
    rpg->saves.intro_s = my_int_to_str(rpg->intro);
    rpg->saves.coin_s = my_int_to_str(rpg->stat.coin);
    rpg->saves.archi_s = my_int_to_str(rpg->quete.archi);
    rpg->saves.folle_s = my_int_to_str(rpg->quete.quete_chat);
}

void save_game(RPG *rpg)
{
    fill_save(rpg);
    char *un = my_int_to_str(1);
    FILE *file = fopen(rpg->saves.path, "wb");
    fwrite(un, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.x_s, sizeof(char) * my_strlen(rpg->saves.x_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.y_s, sizeof(char) * my_strlen(rpg->saves.y_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.zone_s, sizeof(char) *
    my_strlen(rpg->saves.zone_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(rpg->saves.intro_s, sizeof(char) *
    my_strlen(rpg->saves.intro_s), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_2(rpg, file);
}
