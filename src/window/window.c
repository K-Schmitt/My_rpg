/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** initialisation
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void init_window(RPG *rpg)
{
    sfVideoMode mode = {1920, 1080, 64};
    rw = sfRenderWindow_create(mode, "My RPG", sfResize | sfClose, 0);
    sfImage *icon = sfImage_createFromFile("./assets/icon.png");
    sfRenderWindow_setIcon(rw, sfImage_getSize(icon).x,
    sfImage_getSize(icon).y, sfImage_getPixelsPtr(icon));
    rpg->gfps.Clockfp = sfClock_create();
    rpg->size = rectf(0, 0, 720, 405);
    rpg->area = sfView_createFromRect(rpg->size);
    sfView_setCenter(rpg->area, vecf(765, 977));
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/collision.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    rpg->f_image = sfTexture_copyToImage(rpg->collision);
    rpg->gfps.fps = 100;
    rpg->music.music_s = 0;
}
