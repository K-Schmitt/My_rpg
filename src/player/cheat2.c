/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** cheat.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>


static void cheat_mod_tp6(RPG *rpg)
{
    if (kbp(sfKeyF11)) {
        tpp(rpg, "./assets/collission/bar-c_col.png", rpg->bar3_b,
            rpg->bar3_h);
        sfView_setCenter(rpg->area, vecf(352, 144));
        rpg->zone = 11;
        change_music(rpg);
    }
    if (kbp(sfKeyF12)) {
        tpp(rpg, "./assets/collission/volcan.png", rpg->volcan_b,
            rpg->volcan_h);
        sfView_setCenter(rpg->area, vecf(336, 240));
        rpg->zone = 13;
        change_music(rpg);
    }
    add_item(rpg);
}

static void cheat_mod_tp5(RPG *rpg)
{
    if (kbp(sfKeyF9)) {
        tpp(rpg, "./assets/collission/collision.png", rpg->map_princ_b,
            rpg->map_princ_h);
        sfView_setCenter(rpg->area, vecf(1328, 208));
        rpg->zone = 10;
        change_music(rpg);
    }
    if (kbp(sfKeyF10)) {
        tpp(rpg, "./assets/collission/collision.png", rpg->map_princ_b,
            rpg->map_princ_h);
        sfView_setCenter(rpg->area, vecf(672, 208));
        rpg->zone = 12;
        change_music(rpg);
    }
        cheat_mod_tp6(rpg);
}

void cheat_mod_tp4(RPG *rpg)
{
    if (kbp(sfKeyF7)) {
        tpp(rpg, "./assets/collission/collision.png", rpg->map_princ_b,
        rpg->map_princ_h);
        sfView_setCenter(rpg->area, vecf(1008, 848));
        rpg->zone = 7;
        change_music(rpg);
    }
    if (kbp(sfKeyF8)) {
        tpp(rpg, "./assets/collission/house-c_col.png", rpg->house3_b,
        rpg->house3_h);
        sfView_setCenter(rpg->area, vecf(60, 210));
        rpg->zone = 8;
        change_music(rpg);
    }
    cheat_mod_tp5(rpg);

}
