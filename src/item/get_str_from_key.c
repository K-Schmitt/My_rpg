/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** get str
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

static char *get_str_4(sfKeyCode key)
{
    if (key == sfKeyLeft)
        return ("<");
    if (key == sfKeyRight)
        return (">");
    if (key == sfKeyUp)
        return ("^");
    if (key == sfKeyDown)
        return ("v");
    return ("?");
}

static char *get_str_3(sfKeyCode key)
{
    if (key == sfKeyS)
        return ("S");
    if (key == sfKeyT)
        return ("T");
    if (key == sfKeyU)
        return ("U");
    if (key == sfKeyV)
        return ("V");
    if (key == sfKeyW)
        return ("W");
    if (key == sfKeyX)
        return ("X");
    if (key == sfKeyY)
        return ("Y");
    if (key == sfKeyZ)
        return ("Z");
    if (key >= sfKeyNum0 && key <= sfKeyNum9)
        return (my_int_to_str(key - sfKeyNum0));
    return (get_str_4(key));
}

static char *get_str_2(sfKeyCode key)
{
    if (key == sfKeyJ)
        return ("J");
    if (key == sfKeyK)
        return ("K");
    if (key == sfKeyL)
        return ("L");
    if (key == sfKeyM)
        return ("M");
    if (key == sfKeyN)
        return ("N");
    if (key == sfKeyO)
        return ("O");
    if (key == sfKeyP)
        return ("P");
    if (key == sfKeyQ)
        return ("Q");
    if (key == sfKeyR)
        return ("R");
    return (get_str_3(key));
}

char *get_str(sfKeyCode key)
{
    if (key == sfKeyA)
        return ("A");
    if (key == sfKeyB)
        return ("B");
    if (key == sfKeyC)
        return ("C");
    if (key == sfKeyD)
        return ("D");
    if (key == sfKeyE)
        return ("E");
    if (key == sfKeyF)
        return ("F");
    if (key == sfKeyG)
        return ("G");
    if (key == sfKeyH)
        return ("H");
    if (key == sfKeyI)
        return ("I");
    return (get_str_2(key));
}
