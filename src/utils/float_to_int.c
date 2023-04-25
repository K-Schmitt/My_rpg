/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** save
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char* dest, char* const src)
{
    int destLen = my_strlen(dest);
    int srcLen = my_strlen(src);
    char *final = malloc(sizeof(char) * (destLen + srcLen) + 1);

    int j = 0;
    while (dest[j]) {
        final[j] = dest[j];
        j++;
    }

    int i = 0;
    while (src[i]) {
        final[destLen + i] = src[i];
        i++;
    }
    final[j + i] = '\0';
    return (final);
}

int float_size(float nb)
{
    int round = (int)nb;
    float dec = nb - round;
    dec *= 100000;
    if (dec < 0)
        dec *= -1;
    int res_dec = (int)dec;
    return (my_intlenght(res_dec) + my_intlenght(round));
}

char *float_to_str(float nb)
{
    int round = (int)nb;
    float dec = nb - round;
    dec *= 100000;
    if (dec < 0)
        dec *= -1;
    int res_dec = (int)dec;
    int size = my_intlenght(res_dec) + my_intlenght(round) +
    my_intlenght(round / 10) + 2;
    char *str = malloc(sizeof(char) * size);
    char *before = my_int_to_str(round);
    char *after = my_int_to_str(res_dec);
    str = my_strcpy(str, before);
    str = my_strcat(str, ".");
    str = my_strcat(str, after);
    free(before);
    free(after);
    return (str);
}
