/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** add quest
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

void add_quest_next(RPG *rpg, FILE *file)
{
    if (rpg->quete.cowboy != 0) {
        fwrite("Le misterieux Cowboy:\n", sizeof(char) * 22, 1, file);
        fwrite("    Tuer quatres arraignees", sizeof(char) * 27, 1, file);
        fwrite("\n", sizeof(char), 1, file);
    }
    fclose(file);
}

void add_quest(RPG *rpg)
{
    FILE *file = fopen("./assets/book/page3.txt", "wb");
    fwrite("\n\n\n", sizeof(char) * 3, 1, file);
    fwrite("Quetes Principales:", sizeof(char) * 19, 1, file);
    fwrite("\n\n", sizeof(char) * 2, 1, file);
    fwrite("Une etrange disparition:\n", sizeof(char) * 25, 1, file);
    fwrite("    Sauvez ", sizeof(char) * 11, 1, file);
    fwrite(rpg->quete.name, sizeof(char) *
    my_strlen(rpg->quete.name), 1, file);
    if (rpg->quete.quete_chat == 1) {
        fwrite("\n\nQuetes Secondaires:", sizeof(char) * 21, 1, file);
        fwrite("\n\n", sizeof(char) * 2, 1, file);
        fwrite("La folle au chat:\n", sizeof(char) * 18, 1, file);
        fwrite("    Retrouvez les chats perdus", sizeof(char) * 30, 1, file);
        fwrite("\n\n", sizeof(char), 2, file);
    }
    add_quest_next(rpg, file);
}

void add_name(RPG *rpg)
{
    FILE *file = fopen("./assets/dialogue/archi2.txt", "wb");
    fwrite("./assets/dialogue/archi.png\n", sizeof(char) * 28, 1, file);
    fwrite("./assets/fonts/comic.ttf\n", sizeof(char) * 25, 1, file);
    fwrite("./assets/song/Archi.ogg\n", sizeof(char) * 24, 1, file);
    fwrite("20\n\n", sizeof(char) * 4, 1, file);
    fwrite("Ah Solange j'ai une tres mauvaise nouvelle\\Notre nouvel amis Bob \
euh... ", sizeof(char) * 72, 1, file);
    fwrite(rpg->quete.name, sizeof(char) *
    my_strlen(rpg->quete.name), 1, file);
    fwrite(" \\viens tout juste de se faire enlever ",
    sizeof(char) * 39, 1, file);
    fwrite("\n//", sizeof(char) * 3, 1, file);
    fclose(file);
}

static void add_controle_next(RPG *rpg, FILE *file)
{
    fwrite("\nInventaire: ", sizeof(char) * 13, 1, file);
    fwrite(get_str(rpg->stat.inv_k), sizeof(char) *
    my_strlen(get_str(rpg->stat.inv_k)), 1, file);
    fwrite("\nMenu: ", sizeof(char) * 7, 1, file);
    fwrite("Echap", sizeof(char) * 5, 1, file);
    fwrite("\nLivre: ", sizeof(char) * 8, 1, file);
    fwrite(get_str(rpg->stat.books_k), sizeof(char) *
    my_strlen(get_str(rpg->stat.books_k)), 1, file);
    fclose(file);
}

void add_controle(RPG *rpg)
{
    FILE *file = fopen("./assets/book/page2.txt", "wb");
    fwrite("Controles:\n\n", sizeof(char) * 12, 1, file);
    fwrite("Interactions: ", sizeof(char) * 14, 1, file);
    fwrite(get_str(rpg->stat.int_k), sizeof(char) *
    my_strlen(get_str(rpg->stat.int_k)), 1, file);
    fwrite("\nDeplacements: ", sizeof(char) * 15, 1, file);
    fwrite(get_str(rpg->stat.up_k) , sizeof(char) *
    my_strlen(get_str(rpg->stat.up_k)), 1, file);
    fwrite(" ", sizeof(char), 1, file);
    fwrite(get_str(rpg->stat.down_k) , sizeof(char) *
    my_strlen(get_str(rpg->stat.down_k)), 1, file);
    fwrite(" ", sizeof(char), 1, file);
    fwrite(get_str(rpg->stat.right_k) , sizeof(char) *
    my_strlen(get_str(rpg->stat.right_k)), 1, file);
    fwrite(" ", sizeof(char), 1, file);
    fwrite(get_str(rpg->stat.left_k) , sizeof(char) *
    my_strlen(get_str(rpg->stat.left_k)), 1, file);
    add_controle_next(rpg, file);
}
