/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** initialisation
*/

#include "../../include/csfmlib.h"

static void init_map_3(RPG *rpg)
{
    rpg->volcan_b = sfTexture_createFromFile("./assets/map/volcan.png", NULL);
    rpg->volcan_h = sfTexture_createFromFile("./assets/map/transparent.png",
    NULL);
    rpg->test_col = sfSprite_create();
    sfSprite_setTexture(rpg->test_col, rpg->collision, 0);
}

static void init_map_next(RPG *rpg)
{
    rpg->house2_b = sfTexture_createFromFile("./assets/map/house-b_bas.png",
    NULL);
    rpg->house2_h = sfTexture_createFromFile("./assets/map/house-b_haut.png",
    NULL);
    rpg->cave2_b = sfTexture_createFromFile("./assets/map/cave-b_bas.png",
    NULL);
    rpg->cave2_h = sfTexture_createFromFile("./assets/map/cave-b_haut.png",
    NULL);
    rpg->house3_b = sfTexture_createFromFile("./assets/map/house-c_bas.png",
    NULL);
    rpg->house3_h = sfTexture_createFromFile("./assets/map/house-c_haut.png",
    NULL);
    rpg->bar2_b = sfTexture_createFromFile("./assets/map/bar-b_bas.png", NULL);
    rpg->bar2_h = sfTexture_createFromFile("./assets/map/bar-b_haut.png",
    NULL);
    rpg->bar3_b = sfTexture_createFromFile("./assets/map/bar-c_bas.png", NULL);
    rpg->bar3_h = sfTexture_createFromFile("./assets/map/bar-c_haut.png",
    NULL);
    init_map_3(rpg);
}

void init_map(RPG *rpg)
{
    create_sprite(&rpg->map_b, "./assets/map/world_bas.png", vecf(1, 1));
    create_sprite(&rpg->map_h, "./assets/map/world_haut.png", vecf(1, 1));
    rpg->map_princ_b = sfTexture_createFromFile("./assets/map/world_bas.png",
    NULL);
    rpg->map_princ_h = sfTexture_createFromFile("./assets/map/world_haut.png",
    NULL);
    rpg->cave1_b = sfTexture_createFromFile("./assets/map/cave-a_bas.png",
    NULL);
    rpg->cave1_h = sfTexture_createFromFile("./assets/map/transparent.png",
    NULL);
    rpg->bar_b = sfTexture_createFromFile("./assets/map/bar-a_bas.png", NULL);
    rpg->bar_h = sfTexture_createFromFile("./assets/map/bar-a_haut.png",
    NULL);
    rpg->house1_b = sfTexture_createFromFile("./assets/map/house-a_bas.png",
    NULL);
    rpg->house1_h = sfTexture_createFromFile("./assets/map/transparent.png",
    NULL);
    init_map_next(rpg);
}
