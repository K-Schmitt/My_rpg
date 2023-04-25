/*
** EPITECH PROJECT, 2022
** gestion window
** File description:
** gestion window
*/

#include <stdlib.h>
#include "../../include/csfmlib.h"
#include "../../include/define.h"

void detect_fps(RPG *rpg)
{
    rpg->gfps.fp++;
    if (sfClock_getElapsedTime(rpg->gfps.Clockfp).ms > sfSeconds(0.5).ms) {
        sfClock_restart(rpg->gfps.Clockfp);
        rpg->gfps.fps = (rpg->gfps.fp * 2);
        rpg->gfps.fp = 0;
    }
}

void sizemin(sfRenderWindow *window)
{
    if (sfRenderWindow_getSize(window).x <= 700) {
        sfRenderWindow_setSize(window, vecu(700,
        sfRenderWindow_getSize(window).y));
    }
    if (sfRenderWindow_getSize(window).y <= 500) {
        sfRenderWindow_setSize(window, vecu(sfRenderWindow_getSize(window).x,
        500));
    }
}

void close_window(RPG *rpg)
{
    while (sfRenderWindow_pollEvent(rw, &rpg->event))
        if (rpg->event.type == sfEvtClosed)
            sfRenderWindow_close(rw);
}

void actuwindow(RPG *rpg)
{
    detect_fps(rpg);
    sizemin(rw);
    sfRenderWindow_clear(rw, sfBlack);
    actu_key(rpg);
    rpg->mouse = sfRenderWindow_mapPixelToCoords(rw,
    sfMouse_getPositionRenderWindow(rw), rpg->area);
    sfRenderWindow_setView(rw, rpg->area);
    close_window(rpg);
}
