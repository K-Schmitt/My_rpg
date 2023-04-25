/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** teleport couloir 1
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

int teleport_map2(RPG *rpg)
{
    if (pos_x > 1145 || pos_x < 1115 || pos_y < 370 || pos_y > 440)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(-120, 415));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 7;
    change_music(rpg);
    return (1);
}

int teleport_map1(RPG *rpg)
{
    if (pos_x > 215 || pos_x < 185 || pos_y > 980 || pos_y < 880)
        return (0);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfView_move(rpg->area, vecf(480, 0));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 1;
    change_music(rpg);
    return (1);
}

int teleport_bar1(RPG *rpg)
{
    if (pos_x > 612 || pos_x < 588 || pos_y < 380 || pos_y > 520)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/bar_col.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->bar_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->bar_h, 0);
    sfView_move(rpg->area, vecf(-200, -375));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 5;
    change_music(rpg);
    return (1);
}

int teleport_bar_col1(RPG *rpg)
{
    if (pos_x > 455 || pos_x < 430 || pos_y < 75 || pos_y > 125)
        return (0);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave1_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave1_h, 0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/cave-a_col.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfView_move(rpg->area, vecf(200, 375));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 4;
    change_music(rpg);
    return (1);
}
