/*
** EPITECH PROJECT, 2022
** gestion sprite
** File description:
** gestion sprite
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

sfVector2f nscale(RPG *rpg, float x, float y)
{
    sfVector2f b;
    float xx = x / ((float)1920 / sfRenderWindow_getSize(rw).x);
    float yy = y / ((float)1080 / sfRenderWindow_getSize(rw).y);
    if (xx > yy)
        b = vecf(yy, yy);
    else
        b = vecf(xx, xx);
    return (b);
}

void animate(stocksprite *bob, float frame, int left)
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
}

sfSprite *create_sprite(ssbp, char *path, sfVector2f scale)
{
    bob->img_texture = sfTexture_createFromFile(path, NULL);
    bob->img_sprite = sfSprite_create();
    bob->scale.x = scale.x;
    bob->scale.y = scale.y;
    bob->size = sfTexture_getSize(bob->img_texture);
    sfSprite_setTexture(bob->img_sprite, bob->img_texture , sfTrue);
    sfSprite_setScale(bob->img_sprite, bob->scale);
    return (0);
}

sfSprite *create_perso(ssbp, char *path, sfVector2f z, sfVector2i t)
{
    bob->img_texture = sfTexture_createFromFile(path, NULL);
    bob->img_sprite = sfSprite_create();
    bob->scale.x = z.x;
    bob->scale.y = z.y;
    bob->z = recti(0, 0, t.x, t.y);
    bob->Clock = sfClock_create();
    sfSprite_setTexture(bob->img_sprite, bob->img_texture, sfTrue);
    sfSprite_setScale(bob->img_sprite, bob->scale);
    return (0);
}
