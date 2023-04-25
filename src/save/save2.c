/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** save
*/

#include "../../include/csfmlib.h"
#include <stdio.h>

static void save_9(RPG *rpg, FILE *file)
{
    fwrite(my_int_to_str(rpg->stat.max_life), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.max_life)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.lucas), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.lucas)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fclose(file);
}

static void save_8(RPG *rpg, FILE *file)
{
    for (int i = 18; i < 24; i++) {
        fwrite(my_int_to_str(rpg->pnjs.cat[i].draw), sizeof(char) *
        my_strlen((my_int_to_str(rpg->pnjs.cat[i].draw))), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fwrite(my_int_to_str(rpg->quete.b1_p3), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b1_p3)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b2_p3), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b2_p3)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b3_p3), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b3_p3)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    for (int i = 24; i < 29; i++) {
        fwrite(my_int_to_str(rpg->pnjs.cat[i].draw), sizeof(char) *
        my_strlen((my_int_to_str(rpg->pnjs.cat[i].draw))), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    save_9(rpg, file);
}

static void save_7(RPG *rpg, FILE *file)
{
    fwrite(my_int_to_str(rpg->stat.down_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.down_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.up_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.up_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.books_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.books_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.int_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.int_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.cowboy), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.cowboy)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.sortie_epee), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.sortie_epee)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_8(rpg, file);
}

static void save_6(RPG *rpg, FILE *file)
{
    fwrite(rpg->quete.name, sizeof(char) *
    my_strlen(rpg->quete.name), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.xp), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.xp)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.maxXP), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.maxXP)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.inv_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.inv_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.right_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.right_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->stat.left_k), sizeof(char) *
    my_strlen(my_int_to_str(rpg->stat.left_k)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_7(rpg, file);
}

void save_5(RPG *rpg, FILE *file)
{
    fwrite(my_int_to_str(rpg->quete.b1_p1), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b1_p1)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b1_p2), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b1_p2)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b2_p1), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b2_p1)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b2_p2), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b2_p2)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b3_p1), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b3_p1)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(rpg->quete.b3_p2), sizeof(char) *
    my_strlen(my_int_to_str(rpg->quete.b3_p2)), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    save_6(rpg, file);
}
