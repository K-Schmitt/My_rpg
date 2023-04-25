/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** load pos
*/

#include "../../include/csfmlib.h"

static void load_map_5(RPG *rpg)
{
    if (rpg->zone == 13) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/volcan.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->volcan_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->volcan_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
}

void load_map_4(RPG *rpg)
{
    if (rpg->zone == 8) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/house-c_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house3_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house3_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    if (rpg->zone == 11) {
        rpg->collision =
        sfTexture_createFromFile("./assets/collission/bar-c_col.png", NULL);
        rpg->image = sfTexture_copyToImage(rpg->collision);
        sfSprite_setTexture(rpg->map_b.img_sprite, rpg->bar3_b, 0);
        sfSprite_setTexture(rpg->map_h.img_sprite, rpg->bar3_h, 0);
        rpg->f_image = sfTexture_copyToImage(rpg->map_b.img_texture);
    }
    load_map_5(rpg);
}
