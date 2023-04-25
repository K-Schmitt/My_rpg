/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** teleport map3
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

int teleport_map3_bar3(RPG *rpg)
{
    if (pos_x < 950 || pos_x > 984 || pos_y < 139 || pos_y > 178)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/bar-c_col.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->bar3_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->bar3_h, 0);
    sfView_move(rpg->area, vecf(-380, - 65));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 11;
    change_music(rpg);
    return (1);
}

int teleport_bar3_map3(RPG *rpg)
{
    if (pos_x < 617 || pos_x > 927 || pos_y < 88 || pos_y > 120)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(340, + 80));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 10;
    change_music(rpg);
    return (1);
}

int teleport_map4_bar3(RPG *rpg)
{
    if (pos_x < 710 || pos_x > 745 || pos_y < 227 || pos_y > 265)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/bar-c_col.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->bar3_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->bar3_h, 0);
    sfView_move(rpg->area, vecf(-630, -125));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->zone = 11;
    change_music(rpg);
    return (1);
}

int teleport_bar3_map4(RPG *rpg)
{
    if (pos_x < 40 || pos_x > 80 || pos_y < 88 || pos_y > 120)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(660, + 110));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 12;
    change_music(rpg);
    return (1);
}
