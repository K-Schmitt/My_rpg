/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** tools3
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

double my_atof(char const *str)
{
    int i = 0;
    double nb = 0.0;
    double decimal = 0.1;
    int sign = 1;
    if (str[0] == '-') {
        i++;
        sign = -1;
    }
    for (; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'; i++) {
        nb *= 10;
        nb += str[i] - 48;
    }
    if (str[i] != '\0' && str[i] == '.') {
        i++;
        for (; str[i] != '\0'; i++) {
            nb += (str[i] - 48) * decimal;
            decimal *= 0.1;
        }
    }
    return (nb * sign);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (; i != n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char *str)
{
    int size = my_strlen(str);
    char *nstr = malloc(sizeof(char) * (size + 1));
    int i = 0;
    for (; i < size; i++) {
        nstr[i] = str[i];
    }
    nstr[i] = '\0';
    return (nstr);
}

char *recup_info(int nb, char *path)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    FILE * fd = fopen(path, "r");

    for (int i = 0; i <= nb; i++)
        read = getline(&line, &len, fd);
    if (read > 0) {
        if (line[my_strlen(line) - 1] == '\n')
            line[my_strlen(line) - 1] = '\0';
        else
            line[my_strlen(line)] = '\0';
        for (int i = 0; line[i]; i++)
            (line[i] == '\\') ? line[i] = '\n' : 0;
        return (line);
    }
    return (NULL);
}

int my_strcmp(const char *compar1, const char *compar2)
{
    int i = 0;
    if (my_strlen(compar1) == my_strlen(compar2))
        for (; compar1[i] != '\0' && compar2[i] != '\0'
        && compar1[i] == compar2[i]; i++);
    if (i == my_strlen(compar1))
        return (1);
    return (0);
}
