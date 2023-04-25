/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** my_strcmp.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

int my_strcmps(const char* s1, const char* s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

char *my_strcats(char* dest, const char* src)
{
    size_t dest_len = my_strlen(dest);
    size_t src_len = my_strlen(src);
    char* result = dest + dest_len;
    for (size_t i = 0; i < src_len; i++) {
        result[i] = src[i];
    }
    result[src_len] = '\0';
    return dest;
}
