/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** init3
*/

#include "../../include/csfmlib.h"
#include <SFML/Window/Keyboard.h>
#include <stdio.h>
#include <stdlib.h>

static void init_particle(RPG *rpg)
{
    rpg->part->rt_part = sfRenderTexture_create(20, 20, sfFalse);
    rpg->part->sprite_part.img_sprite = sfSprite_create();
    sfSprite_setTexture(rpg->part->sprite_part.img_sprite,
    sfRenderTexture_getTexture(rpg->part->rt_part), sfTrue);
    rpg->part->footprint = sfVertexArray_create();
    create_entity(&rpg->animes.brouillard, "./assets/obj/brouillard.png",
    vecf(0.55, 0.7), veci(1920, 1080));
    rpg->animes.brouillard.pos = vecf(-55, 0);
    sfSprite_setPosition(rpg->animes.brouillard.img_sprite,
    rpg->animes.brouillard.pos);
    sfColor color = sfSprite_getColor(rpg->animes.brouillard.img_sprite);
    color.a = 175;
    rpg->animes.brouillard.draw = 12;
    sfSprite_setColor(rpg->animes.brouillard.img_sprite, color);
    rpg->animes.brouillard.Clock = sfClock_create();
}

void init_touche(RPG *rpg)
{
    rpg->stat.inv_k = (sfKeyCode)my_atoi(rpg->saves.file[77]);
    rpg->stat.right_k = (sfKeyCode)my_atoi(rpg->saves.file[78]);
    rpg->stat.left_k = (sfKeyCode)my_atoi(rpg->saves.file[79]);
    rpg->stat.down_k = (sfKeyCode)my_atoi(rpg->saves.file[80]);
    rpg->stat.up_k = (sfKeyCode)my_atoi(rpg->saves.file[81]);
    rpg->stat.books_k = (sfKeyCode)my_atoi(rpg->saves.file[82]);
    rpg->stat.int_k = (sfKeyCode)my_atoi(rpg->saves.file[83]);
    rpg->quete.sortie_epee = my_atoi(rpg->saves.file[85]);
    rpg->quete.lucas = my_atoi(rpg->saves.file[101]);
    init_book(rpg);
    init_particle(rpg);
}
