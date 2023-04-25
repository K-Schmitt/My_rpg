/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** key.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void init_key(RPG *rpg)
{
    rpg->keys.interact = 0;
    rpg->keys.book_int = 0;
}

void actu_key(RPG *rpg)
{
    if (rpg->keys.interact == 2)
        rpg->keys.interact = 0;
    if (kbp(rpg->stat.int_k) && rpg->keys.interact == 0)
        rpg->keys.interact = 1;
    if (kbp(rpg->stat.int_k) == sfFalse && rpg->keys.interact == 1) {
        rpg->keys.interact = 2;
    }
    if (rpg->keys.book_int == 2)
        rpg->keys.book_int = 0;
    if (kbp(rpg->stat.books_k) && rpg->keys.book_int == 0)
        rpg->keys.book_int = 1;
    if (kbp(rpg->stat.books_k) == sfFalse && rpg->keys.book_int == 1) {
        rpg->keys.book_int = 2;
    }
}
