/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** transition
*/

#include "../../../include/csfmlib.h"

void set_transition2(RPG *rpg)
{
    sfCircleShape_setFillColor(rpg->fight->anim->circle, sfTransparent);
    sfCircleShape_setOutlineColor(rpg->fight->anim->circle, sfBlack);
    sfCircleShape_setOutlineThickness(rpg->fight->anim->circle, 300);
    sfVector2f center = {sfView_getCenter(rpg->area).x, \
    sfView_getCenter(rpg->area).y};
    sfCircleShape_setPosition(rpg->fight->anim->circle, center);
    sfCircleShape_setOrigin(rpg->fight->anim->circle, center);
    rpg->fight->anim->radius = 0;
    rpg->fight->anim->time = 0;
}

void set_radius(RPG *rpg)
{
    sfCircleShape_setRadius(rpg->fight->anim->circle, rpg->fight->anim->radius);
    sfCircleShape_setOrigin(rpg->fight->anim->circle, \
    vecf(rpg->fight->anim->radius, rpg->fight->anim->radius));
}

void render_transition(RPG *rpg)
{
    sfRenderWindow_drawCircleShape(rw, rpg->fight->anim->circle, NULL);
    sfRenderWindow_display(rw);
}

void transition_cercle(RPG *rpg, float duration)
{
    set_transition2(rpg);
    while (rpg->fight->anim->time < duration / 2) {
        rpg->fight->anim->time += sfTime_asSeconds( \
        sfClock_restart(rpg->fight->anim->clock));
        rpg->fight->anim->radius = sfView_getSize(rpg->area).x * \
        (1 - rpg->fight->anim->time / (duration / 2));
        set_radius(rpg);
        draw_all(rpg);
        render_transition(rpg);
    }
    rpg->fight->anim->time = 0;
    while (rpg->fight->anim->time < duration / 2) {
        rpg->fight->anim->time += sfTime_asSeconds( \
        sfClock_restart(rpg->fight->anim->clock));
        rpg->fight->anim->radius = sfView_getSize(rpg->area).x * \
        (rpg->fight->anim->time / (duration / 2));
        set_radius(rpg);
        draw_fight(rpg);
        render_transition(rpg);
    }
}
