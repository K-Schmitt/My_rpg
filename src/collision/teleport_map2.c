/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** teleport map2
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>

int teleport_map2_col1(RPG *rpg)
{
    if (pos_x > 968 || pos_x < 917 || pos_y < 810 || pos_y > 843)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/cave-a_col.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave1_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave1_h, 0);
    sfView_move(rpg->area, vecf(120, -415));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 4;
    change_music(rpg);
    return (1);
}

int teleport_map2_col2(RPG *rpg)
{
    if (pos_x > 970 || pos_x < 950 || pos_y < 1090 || pos_y > 1110)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/cave-b_col.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave2_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave2_h, 0);
    sfView_move(rpg->area, vecf(-900, 165));
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 6;
    change_music(rpg);
    return (1);
}

int teleport_col2_map2_1(RPG *rpg)
{
    if (pos_x > 20 || pos_x < 00 || pos_y < 1250 || pos_y > 1270)
        return (0);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfView_move(rpg->area, vecf(950, -180));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 7;
    change_music(rpg);
    return (1);
}

int teleport_col2_map2_2(RPG *rpg)
{
    if (pos_x > 1130 || pos_x < 1090 || pos_y < 0 || pos_y > 20)
        return (0);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfView_move(rpg->area, vecf(280, 930));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 7;
    change_music(rpg);
    return (1);
}

int teleport_map2_col2_2(RPG *rpg)
{
    if (pos_x > 1400 || pos_x < 1380 || pos_y < 906 || pos_y > 926)
        return (0);
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/cave-b_col.png", NULL);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave2_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave2_h, 0);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfView_move(rpg->area, vecf(-280, -860));
    rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    rpg->zone = 6;
    change_music(rpg);
    return (1);
}
