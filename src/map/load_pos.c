/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** load pos
*/

#include "../../include/csfmlib.h"

static void load_pos_player(RPG *rpg)
{
    float x = my_atof(rpg->saves.file[1]);
    float y = my_atof(rpg->saves.file[2]);
    sfView_move(rpg->area, vecf(x, y));
}

static void load_map_3(RPG *rpg)
{
    if (rpg->zone == 5) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/bar_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->bar_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->bar_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    if (rpg->zone == 6) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/cave-b_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave2_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave2_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    load_map_4(rpg);
}

static void load_map_2(RPG *rpg)
{
    if (rpg->zone == 3) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/house-b_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house2_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house2_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    if (rpg->zone == 4){
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->cave1_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->cave1_h, 0);
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/cave-a_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    load_map_3(rpg);
}

static void load_map(RPG *rpg)
{
    if (rpg->zone == 1 || rpg->zone == 7 || rpg->zone == 10 ||
    rpg->zone == 12) {
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->map_princ_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->map_princ_h, 0);
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/collision.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    if (rpg->zone == 2) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/house-a_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house1_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house1_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    load_map_2(rpg);
}

void load_pos(RPG *rpg)
{
    rpg->zone = my_atof(rpg->saves.file[3]);
    load_map(rpg);
    load_pos_player(rpg);
}
