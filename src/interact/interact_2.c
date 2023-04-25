/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** interact 2
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void interact_zone6(RPG *rpg)
{
    if (pos_x > 150 && pos_x < 211 && pos_y > 1152 && pos_y < 1180
    && MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 16);
    if (pos_x > 782 && pos_x < 811 && pos_y > 1140 && pos_y < 1165
    && MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 19);
    if (pos_x > 289 && pos_x < 360 && pos_y > 602 && pos_y < 640
    && MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 25);
}

void interact_zone10(RPG *rpg)
{
    if (pos_x > 1104 && pos_x < 1133 && pos_y > 420 && pos_y < 487 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 22);
}

void interact_zone11(RPG *rpg)
{
    if (pos_x > 280 && pos_x < 439 && pos_y > 73 && pos_y < 102 &&
    MyKeyinter) {
        start_dialogue(rpg, "./assets/dialogue/barman.txt", 6);
        shop(rpg);
    }
}
