/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** patern.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void set_paternh2(stockennemie *bob, float distance,
sfVector2f mouvement)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    sfFloatRect zone = rectf(bob->pos.x, bob->pos.y,
    bob->pos.x + mouvement.x, bob->pos.y + mouvement.y);
    if (pos.x + distance < zone.left && (bob->state == 3 || bob->state == 0)) {
        if (rand() % 2 == 1) {
            bob->state = 6;
            bob->z.top = 0;
            bob->z.left = 32;
            sfClock_restart(bob->Clock);
            return;
        }
        bob->state = 4;
        return;
    }
}

void set_paternh(stockennemie *bob, float distance, sfVector2f mouvement)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    sfFloatRect zone = rectf(bob->pos.x, bob->pos.y,
    bob->pos.x + mouvement.x, bob->pos.y + mouvement.y);
    if (pos.x - distance > zone.width && (bob->state == 4 || bob->state == 0)) {
        if (rand() % 2 == 1) {
            bob->state = 5;
            bob->z.top = 0;
            bob->z.left = 32;
            sfClock_restart(bob->Clock);
            return;
        }
        bob->state = 3;
        return;
    }
    set_paternh2(bob, distance, mouvement);
}

static void set_paternv2(stockennemie *bob, float distance,
sfVector2f mouvement, sfClock *clock)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    sfFloatRect zone = rectf(bob->pos.x, bob->pos.y,
    bob->pos.x + mouvement.x, bob->pos.y + mouvement.y);
    if (get(times(clock)) > 1 && pos.y + distance <
    zone.top && (bob->state == 1 || bob->state == 0)) {
        if (rand() % 2 == 1) {
            bob->state = 8;
            bob->z.top = 0;
            bob->z.left = 32;
            sfClock_restart(bob->Clock);
            return;
        }
        bob->state = 2;
        return;
    }
}

void set_paternv(stockennemie *bob, float distance, sfVector2f mouvement,
sfClock *clock)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    sfFloatRect zone = rectf(bob->pos.x, bob->pos.y,
    bob->pos.x + mouvement.x, bob->pos.y + mouvement.y);
    if (get(times(clock)) > 1 && pos.y -
    distance > zone.height && (bob->state == 2 || bob->state == 0)) {
        if (rand() % 2 == 1) {
            bob->state = 7;
            bob->z.top = 0;
            bob->z.left = 32;
            sfClock_restart(bob->Clock);
            return;
        }
        bob->state = 1;
        return;
    }
    set_paternv2(bob, distance, mouvement, clock);
}
