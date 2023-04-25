/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** move_spider.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void animate_entity(stockennemie *bob, float frame, int left)
{
    bob->frame = frame;
    if (bob->r <= 0 && bob->r > bob->frame)
        bob->r = 1;
    if ((sfClock_getElapsedTime(bob->Clock).ms) > (sfSeconds(1 / bob->frame).ms
    * bob->r)) {
        bob->z.left += left;
        bob->r++;
    }
    if (bob->r > bob->frame || bob->z.left >= bob->sizeX) {
        bob->z.left = 0;
        bob->r = 1;
        sfClock_restart	(bob->Clock);
    }
    sfSprite_setTextureRect(bob->img_sprite, bob->z);
}

void move(stockennemie *bob, int sens, sfVector2f distance,
sfVector2f frameleft)
{
    (*bob).z.top = sens;
    sfSprite_move(bob->img_sprite, distance);
    animate_entity(bob, frameleft.x, frameleft.y);
}

sfSprite *create_entity(stockennemie *bob, char *path, sfVector2f z,
sfVector2i t)
{
    bob->img_texture = sfTexture_createFromFile(path, NULL);
    bob->img_sprite = sfSprite_create();
    bob->scale.x = z.x;
    bob->scale.y = z.y;
    bob->z = recti(0, 0, t.x, t.y);
    bob->Clock = sfClock_create();
    bob->r = 1;
    bob->state = 0;
    bob->click = 0;
    sfSprite_setTexture(bob->img_sprite, bob->img_texture, sfTrue);
    sfSprite_setScale(bob->img_sprite, bob->scale);
    return (0);
}
