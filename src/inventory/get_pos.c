/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** get pos
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

sfVector2f enter_pos(RPG *rpg, int i)
{
    float y = 85.7;
    float x = 146.5;
    for (int count = 0; count < 4; count++) {
        if (count == i) {
            return (vecf(rpg->perso.pos.x - 211.5, rpg->perso.pos.y - y));
        }
        y -= 20.7;
    }
    y = 26;
    for (int count = 4; count < 16; count++) {
        if (count == i) {
            return (vecf(rpg->perso.pos.x - x, rpg->perso.pos.y - y));
        }
        x -= 20.6;
        if (count == 9) {
            x = 146.5;
            y = 5.5;
        }
    }
    return (vecf(0, 0));
}
