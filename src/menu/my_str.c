/*
** EPITECH PROJECT, 2022
** test
** File description:
** suite.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

int fin(char s, char *lim)
{
    int i = 0;
    while (lim[i]) {
        if (s == lim[i])
            return (-1);
        i++;
    }
    return (0);
}

int trm(char const *str, int i, char *lim)
{
    if (fin(str[i], lim) == -1) {
        while (fin(str[i], lim) == -1)
            i++;
        i -= 1;
    }
    return (i);
}

int count_word(char const *str, char *lim)
{
    int i = 0;
    int res = 1;

    while (str[i]) {
        i = trm(str, i, lim);
        res += 1;
        i++;
    }
    return (res);
}

int taille(char *str, int i, char *lim)
{
    int len = 0;

    while (fin(str[i], lim) == 0 && str[i]) {
        len++;
        i++;
    }
    return (len);
}

char **my_str_to_word_arraye(char *str, char *lim)
{
    int nb_word = count_word(str, lim) + 2;
    int i = 0;
    char **tab;
    int y = 0;
    int x = 0;
    tab = malloc(sizeof(char *) * (nb_word + 1));
    while (str[i]) {
        x = 0;
        for (; (fin(str[i], lim) == -1 && str[i]); i++);
        tab[y] = malloc(sizeof(char) * (taille(str, i, lim) + 1));
        for (; fin(str[i], lim) == 0 && str[i]; i++ , x++)
            tab[y][x] = str[i];
        tab[y][x] = '\0';
        y++;
        for (; (fin(str[i], lim) == -1 && str[i]); i++);
    }
    tab[y] = NULL;
    return (tab);
}
