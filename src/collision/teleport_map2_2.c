/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** teleport map2 2
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

int teleport_map2_house3(RPG *rpg)
{
    if (pos_x < 1312 || pos_x > 1344 || pos_y < 1180 || pos_y > 1194)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/house-c_col.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house3_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house3_h, 0);
    sfView_move(rpg->area, vecf(-1170, -1010));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 8;
    change_music(rpg);
    return (1);
}

int teleport_house3_map2(RPG *rpg)
{
    if (pos_x < 131 || pos_x > 185 || pos_y < 190 || pos_y > 205)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(1170, 1010));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 7;
    change_music(rpg);
    return (1);
}

int teleport_map2_map3(RPG *rpg)
{
    if (pos_x < 1388 || pos_x > 1397 || pos_y < 1195 || pos_y > 1224)
        return (0);
    sfView_move(rpg->area, vecf(-30, -1020));
    rpg->zone = 10;
    change_music(rpg);
    return (1);
}

int teleport_map3_map2(RPG *rpg)
{
    if (pos_x < 1377 || pos_x > 1397 || pos_y < 170 || pos_y > 209)
        return (0);
    sfView_move(rpg->area, vecf(-30, 1020));
    rpg->zone = 7;
    change_music(rpg);
    return (1);
}
