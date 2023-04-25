/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** actualisation
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void interact_zone1(RPG *rpg)
{
    if (pos_x > 403 && pos_x < 466 && pos_y > 990 && pos_y < 1038 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 6);
    if (pos_x > 614 && pos_x < 667 && pos_y > 1180 && pos_y < 1226 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 8);
}

void interact_zone2(RPG *rpg)
{
    if (pos_x > 414 && pos_x < 434 && pos_y > 998 && pos_y < 1018 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 5);
    if (pos_x > 617 && pos_x < 637 && pos_y > 1187 && pos_y < 2007 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 7);
}

void interact_zone3(RPG *rpg)
{
    if (pos_x > 65 && pos_x < 115 && pos_y > 165 && pos_y < 215 &&
    kbp(rpg->stat.int_k)) {
        if (rpg->quete.archi == 1)
            start_dialogue(rpg, "./assets/dialogue/archi.txt", 16);
        if (rpg->quete.archi == 0) {
            start_dialogue(rpg, "./assets/dialogue/archi2.txt", 5);
            start_dialogue(rpg, "./assets/dialogue/archi.txt", 9);
            rpg->quete.archi = 1;
            push_in_inventory(rpg, 1);
            push_in_inventory(rpg, 6);
            fight(rpg, &rpg->adv.spider[0]);
        }
        if (rpg->quete.archi == 2)
            start_dialogue(rpg, "./assets/dialogue/archi.txt", 19);
    }
    if (pos_x > 190 && pos_x < 230 && pos_y > 26 && pos_y < 80 && MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/lucas.txt", 12);
}

void interact_zone4(RPG *rpg)
{
    if (pos_x > 387 && pos_x < 460 && pos_y > 880 && pos_y < 905 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 10);
    if (pos_x > 620 && pos_x < 680 && pos_y > 460 && pos_y < 480 &&
    MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/pancarte.txt", 13);
}

void interact_zone5(RPG *rpg)
{
    if (pos_x > 246 && pos_x < 278 && pos_y > 31 && pos_y < 75 && MyKeyinter)
        start_dialogue(rpg, "./assets/dialogue/lucas.txt", 6);
    if (pos_x > 65 && pos_x < 225 && pos_y > 90 && pos_y < 105 &&
    MyKeyinter) {
        start_dialogue(rpg, "./assets/dialogue/barman.txt", 6);
        shop(rpg);
    }
}
