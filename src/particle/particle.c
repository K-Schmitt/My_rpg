/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** particle
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdlib.h>

void display_snow(RPG *rpg)
{
    int x_min = 840;
    int x_max = 1650;
    int y_min = 0;
    int y_max = 660;
    for (int i = 0; i < 1000; i++) {
        sfCircleShape_move(rpg->part[i].snow, vecf(0, 2));
        sfVector2f position = sfCircleShape_getPosition(rpg->part[i].snow);
        if (position.x < x_min || position.x > x_max || position.y > y_max) {
            position.x = (float)(x_min + rand() % (x_max - x_min + 1));
            position.y = (float)(y_min - rand() % 100);
            sfCircleShape_setPosition(rpg->part[i].snow, position);
        }
    }
    for (int i = 0; i < 1000; i++)
        sfRenderWindow_drawCircleShape(rw, rpg->part[i].snow, NULL);
}

static void display_footprint_next(RPG *rpg)
{
    sfRenderTexture_drawVertexArray(rpg->part->rt_part,
    rpg->part->footprint, NULL);
    sfRenderTexture_display(rpg->part->rt_part);
    sfSprite_setPosition(rpg->part->sprite_part.img_sprite,
    vecf(rpg->perso.pos.x + 25 - 15, rpg->perso.pos.y + 40 - 15));
    sfRenderWindow_drawSprite(rw, rpg->part->sprite_part.img_sprite, NULL);
    sfRenderTexture_clear(rpg->part->rt_part, sfTransparent);
}

static int get_offset_x(RPG *rpg)
{
    if (kbp(rpg->stat.left_k) == true)
        return (-5);
    if (kbp(rpg->stat.right_k) == true)
        return (5);
    return (0);
}

static int get_offset_y(RPG *rpg)
{
    if (kbp(rpg->stat.up_k) == true)
        return (-5);
    if (kbp(rpg->stat.down_k) == true)
        return (5);
    return (0);
}

void display_footprint(RPG *rpg)
{
    sfRenderTexture_clear(rpg->part->rt_part, sfTransparent);
    sfVertexArray_clear(rpg->part->footprint);
    sfColor couleur = sfImage_getPixel(rpg->f_image, pos_x + 25, pos_y + 40);
    int off_x = get_offset_x(rpg);
    int off_y = get_offset_y(rpg);
    couleur.g += 50;
    couleur.r += 50;
    couleur.b += 50;
    sfVertexArray_setPrimitiveType(rpg->part->footprint, sfPoints);
    for (int i = 0; i < 5; i++) {
        int random_x = rand() % 15;
        int random_y = rand() % 15;
        sfVertex vertex;
        vertex.position = (sfVector2f){random_x + off_x, random_y + off_y};
        vertex.color = couleur;
        sfVertexArray_append(rpg->part->footprint, vertex);
    }
    display_footprint_next(rpg);
}
