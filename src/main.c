/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** main.c
*/

#include "../include/csfmlib.h"
#include <time.h>
#include <stdlib.h>

int main(void)
{
    RPG *rpg = malloc(sizeof(RPG));
    srand(time(NULL));
    init_all(rpg);
    instance(rpg);
    menu(rpg);
    free_all(rpg);
    return (0);
}
