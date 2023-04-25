/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** teleport map3
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

int teleport_map4_volcan(RPG *rpg)
{
    if (pos_x < 200 || pos_x > 225 || pos_y < 500 || pos_y > 550)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/volcan.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->volcan_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->volcan_h, 0);
    sfView_move(rpg->area, vecf(160, - 280));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 13;
    change_music(rpg);
    return (1);
}

int teleport_volcan_map4(RPG *rpg)
{
    if (pos_x < 413 || pos_x > 480 || pos_y < 205 || pos_y > 265)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(-160, 280));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 12;
    change_music(rpg);
    return (1);
}
