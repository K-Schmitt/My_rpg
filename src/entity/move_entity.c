/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** move_entity.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

static void set_patern3(stockennemie *bob, float distance, sfFloatRect zone,
sfClock *clock)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    int alea = rand() % 2;
    if (get(times(clock)) > 1 && pos.x -
    distance > zone.width && ((bob->state == 4) || bob->state == 0)) {
        if (alea == 0)
            bob->state = 2;
        return;
    }
    if (get(times(clock)) > 1 && pos.x + distance <
    zone.left && ((bob->state == 3) || bob->state == 0)) {
        if (alea == 0)
            bob->state = 1;
        return;
    }
}

static void set_patern2(stockennemie *bob, float distance, sfFloatRect zone,
sfClock *clock)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    int alea = rand() % 2;
    if (get(times(clock)) > 1 && pos.y +
    distance < zone.top && ((bob->state == 1) || bob->state == 0)) {
        if (alea == 0)
            bob->state = 4;
        return;
    }
    set_patern3(bob, distance, zone, clock);
}

void set_patern(stockennemie *bob, float distance, sfVector2f mouvement,
sfClock *clock)
{
    sfVector2f pos = sfSprite_getPosition(bob->img_sprite);
    sfFloatRect zone = rectf(bob->pos.x, bob->pos.y,
    bob->pos.x + mouvement.x, bob->pos.y + mouvement.y);
    int alea = rand() % 2;
    if (get(times(clock)) > 1 && pos.y - distance > zone.height &&
    ((bob->state == 2) || bob->state == 0)) {
        if (alea == 0)
            bob->state = 3;
        return;
    }
    set_patern2(bob, distance, zone, clock);
}

void move_entity(stockennemie *bob, float distance)
{
    if (bob->state == 6 && get(times(bob->Clock)) > 3)
        bob->state = 4;
    if (bob->state == 5 && get(times(bob->Clock)) > 3)
        bob->state = 3;
    if (bob->state == 7 && get(times(bob->Clock)) > 3)
        bob->state = 1;
    if (bob->state == 8 && get(times(bob->Clock)) > 3)
        bob->state = 2;
    if (bob->state == 0)
        move(bob, 32 * 0, vecf(-0.2, -0.2), vecf(3, 32));
    if (bob->state == 1)
        move(bob, 32 * 3, vecf(0, - distance), vecf(3, 32));
    if (bob->state == 2)
        move(bob, 32 * 0, vecf(0, distance), vecf(3, 32));
    if (bob->state == 3)
        move(bob, 32 * 1, vecf(- distance, 0), vecf(3, 32));
    if (bob->state == 4)
        move(bob, 32 * 2, vecf(distance, 0), vecf(3, 32));
}

void move_entity2(stockennemie *bob, float distance)
{
    if (bob->state == 0)
        move(bob, 64 * 4, vecf(-0.2, -0.2), vecf(7, 64));
    if (bob->state == 1)
        move(bob, 64 * 11, vecf(0, - distance), vecf(8, 64));
    if (bob->state == 2)
        move(bob, 64 * 1, vecf(0, distance), vecf(8, 64));
    if (bob->state == 3)
        move(bob, 64 * 16, vecf(- distance, 0), vecf(8, 64));
    if (bob->state == 4)
        move(bob, 64 * 6, vecf(distance, 0), vecf(8, 64));
}
