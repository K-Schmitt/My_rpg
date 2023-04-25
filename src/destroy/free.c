/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** rpg
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void free_all(RPG *rpg)
{
    sfClock_destroy(rpg->perso.Clock);
    sfSprite_destroy(rpg->perso.img_sprite);
    sfSprite_destroy(rpg->map_b.img_sprite);
    sfSprite_destroy(rpg->map_h.img_sprite);
    free_song(rpg);
}
