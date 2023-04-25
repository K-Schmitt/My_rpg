/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** tools
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/csfmlib.h"
#include "../../include/define.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}

int my_strlen(char const *str)
{
    int	i = 0;
    for (; str[i] != '\0'; i++);
    return (i);
}

int my_intlenght(int value)
{
    int i = 1;
    if (value < 0) {
        i++;
        value *= -1;
    }
    while (value > 5) {
        i++;
        value /= 10;
    }
    return (i);
}

char *my_revstr(char *src)
{
    int size = my_strlen(src) - 1;
    char *dest = malloc(sizeof(char) * (size + 2));
    int i = 0;
    for (; src[i] != '\0'; i++) {
        dest[i] = src[size];
        size--;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_int_to_str(int nb)
{
    int len = my_intlenght(nb) + 2;
    int i = 0;
    int sign = 0;
    if (nb < 0) {
        sign = 1;
        nb = -nb;
    }
    char *str = malloc(sizeof(char) * len);
    if (nb == 0) {
        str[i++] = '0';
    }
    while (nb != 0) {
        str[i++] = nb % 10 + '0';
        nb = nb / 10;
    }
    if (sign == 1)
        str[i++] = '-';
    str[i] = '\0';
    str = my_revstr(str);
    return (str);
}
