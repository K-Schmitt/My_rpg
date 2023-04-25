/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** delete save
*/

#include "../../include/csfmlib.h"
#include <stdio.h>

static void new_save_4(FILE *file)
{
    fwrite("5", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("1", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("1", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    for (int i = 0; i < 5; i++) {
        fwrite("6", sizeof(char), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    for (int i = 0; i < 29; i++) {
        fwrite("0", sizeof(char), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fwrite("name", sizeof(char) * 4, 1, file);
    fwrite("\n", sizeof(char), 1, file);
}

static void new_save_3(FILE *file)
{
    for (int i = 0; i < 7 ; i++) {
        fwrite("1", sizeof(char), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fwrite("2", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("2", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("3", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("3", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("4", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("4", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite("5", sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    new_save_4(file);
}

static void new_save_2(FILE *file)
{
    char *zero = my_int_to_str(0);
    char *un = my_int_to_str(1);
    fwrite(zero, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    for (int i = 0; i < 32; i++) {
        fwrite(zero, sizeof(char), 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fwrite(un, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(my_int_to_str(5), sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    new_save_3(file);
}

void new_save(RPG *rpg)
{
    char *zero = my_int_to_str(0);
    char *un = my_int_to_str(1);
    FILE *file = fopen(rpg->saves.path, "wb");
    fwrite(zero, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(zero, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(zero, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(un, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    fwrite(zero, sizeof(char), 1, file);
    fwrite("\n", sizeof(char), 1, file);
    new_save_2(file);
    fclose(file);
}
