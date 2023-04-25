/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** player
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

void cheat_mod(RPG *rpg);

static void sprint(RPG *rpg)
{
    if (kbp(sfKeyRShift) || kbp(sfKeyLShift)) {
        if (rpg->stat.speed == 1)
            rpg->stat.speed = 2;
        if (rpg->stat.speed == 1.5)
            rpg->stat.speed = 2.5;
    }
    if (!(kbp(sfKeyRShift) || kbp(sfKeyLShift)) && rpg->stat.nb_speed == 1 &&
    rpg->cheat == 0)
        rpg->stat.speed = 1.5;
    if (!(kbp(sfKeyRShift) || kbp(sfKeyLShift)) && rpg->stat.nb_speed == 0 &&
    rpg->cheat == 0)
        rpg->stat.speed = 1;
}

static void move_player3(RPG *rpg)
{
    if (kbp(rpg->stat.right_k) && kbp(rpg->stat.down_k) == sfFalse
    && kbp(rpg->stat.left_k) == sfFalse && kbp(rpg->stat.up_k) == sfFalse) {
        if (rpg->cheat == 1 || collision(rpg, 4) != 1) {
            sfView_move(rpg->area, vecf((60 * rpg->stat.speed /
            rpg->gfps.fps), 0));
            rpg->perso.z.top = 64;
            animate(&rpg->perso, 3, 32);
        }
    }
    sfSprite_setTextureRect(rpg->perso.img_sprite, rpg->perso.z);
    sfSprite_setScale(rpg->perso.img_sprite, rpg->perso.scale);
    sfFloatRect size = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    rpg->perso.pos = sfRenderWindow_mapPixelToCoords(rw,
    veci(((sfRenderWindow_getSize(rw).x / 2) - size.width * 2),
    ((sfRenderWindow_getSize(rw).y / 2) - size.height)), rpg->area);
    sfSprite_setPosition(rpg->perso.img_sprite, rpg->perso.pos);
    cheat_mod(rpg);
    sprint(rpg);
}

void move_player2(RPG *rpg)
{
    if (kbp(rpg->stat.left_k) && kbp(rpg->stat.down_k) == sfFalse
    && kbp(rpg->stat.up_k) == sfFalse && kbp(rpg->stat.right_k) == sfFalse) {
        if (rpg->cheat == 1 || collision(rpg, 3) != 1) {
            sfView_move(rpg->area, vecf((-60 * rpg->stat.speed
            / rpg->gfps.fps), 0));
            rpg->perso.z.top = 32;
            animate(&rpg->perso, 3, 32);
        }
    }
    if (kbp(rpg->stat.up_k) == sfFalse && kbp(rpg->stat.down_k) == sfFalse
    && kbp(rpg->stat.left_k) == sfFalse && kbp(rpg->stat.right_k) == sfFalse)
        rpg->perso.z.left = 32;
    move_player3(rpg);
}

void move_player(RPG *rpg)
{
    if (kbp(rpg->stat.up_k) && kbp(rpg->stat.down_k) == sfFalse
    && kbp(rpg->stat.left_k) == sfFalse && kbp(rpg->stat.right_k) == sfFalse) {
        if (rpg->cheat == 1 || collision(rpg, 1) != 1) {
            sfView_move(rpg->area, vecf(0, (-60 * rpg->stat.speed
            / rpg->gfps.fps)));
            rpg->perso.z.top = 96;
            animate(&rpg->perso, 3, 32);
        }
    }
    if (kbp(rpg->stat.down_k) && kbp(rpg->stat.up_k) == sfFalse
    && kbp(rpg->stat.left_k) == sfFalse && kbp(rpg->stat.right_k) == sfFalse) {
        if (rpg->cheat == 1 || collision(rpg, 2) != 1) {
            sfView_move(rpg->area, vecf(0, (60 * rpg->stat.speed
            / rpg->gfps.fps)));
            rpg->perso.z.top = 0;
            animate(&rpg->perso, 3, 32);
        }
    }
    move_player2(rpg);
}
