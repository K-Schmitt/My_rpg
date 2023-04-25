/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** teleport map1
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

int teleport_house2(RPG *rpg)
{
    if (pos_x > 320 || pos_x < 295 || pos_y < 1115 || pos_y > 1160)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/house-b_col.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house2_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house2_h, 0);
    sfView_move(rpg->area, vecf(-280, -975));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 3;
    return (1);
}

int teleport_house2_map(RPG *rpg)
{
    if (pos_x > 50 || pos_x < 0 || pos_y < 185 || pos_y > 205)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(285, 980));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 1;
    return (1);
}

int teleport_house1(RPG *rpg)
{
    if (pos_x > 410 || pos_x < 383 || pos_y < 930 || pos_y > 968)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/house-a_col.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house1_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house1_h, 0);
    sfView_move(rpg->area, vecf(-330, -830));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 2;
    return (1);
}

int teleport_house1_map(RPG *rpg)
{
    if (pos_x > 74 || pos_x < 50 || pos_y < 145 || pos_y > 165)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    sfView_move(rpg->area, vecf(330, 830));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 1;
    return (1);
}

int teleport_map_col1(RPG *rpg)
{
    if (pos_x > 750 || pos_x < 730 || pos_y < 945 || pos_y > 967)
        return (0);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave1_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave1_h, 0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/cave-a_col.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfView_move(rpg->area, vecf(-500, 0));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 4;
    change_music(rpg);
    return (1);
}
