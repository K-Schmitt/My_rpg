/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** stwa
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/csfmlib.h"
#include "../../include/define.h"

char **my_str_to_word_array(char* str)
{
    int count = 0;
    int col = 0;
    char *line = str;
    char **tab = NULL;

    for (int i = 0; str[i] != '\0'; i++)
        (str[i] == '\n') ? count++ : 0;
    tab = malloc(sizeof(char*) * (count + 1));
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n') {
            int len = &str[i] - line;
            tab[col] = malloc(sizeof(char) * len + 1);
            my_strncpy(tab[col], line, len);
            tab[col][len] = '\0';
            line = &str[i] + 1;
            col++;
        }
    tab[count] = NULL;
    return (tab);
}
