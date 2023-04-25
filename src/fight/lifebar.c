/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** lifebar
*/

#include "../../include/csfmlib.h"

void update_life(RPG *rpg)
{
    rpg->stat.life = rpg->stat.life < 0 ? 0 : rpg->stat.life;
    rpg->stat.life = rpg->stat.life > rpg->stat.max_life ?
    rpg->stat.max_life : rpg->stat.life;
    rpg->fight->ennemy->life = rpg->fight->ennemy->life < 0 ?
    0 : rpg->fight->ennemy->life;
    update_lifebar(rpg, rpg->stat.life, \
    rpg->fight->lifebar1, rpg->stat.max_life);
    update_lifebar(rpg, rpg->fight->ennemy->life, \
    rpg->fight->lifebar2, rpg->fight->ennemy->max_life);
}

sfColor interpolate_color(sfColor color_start, sfColor color_end, float percent)
{
    sfColor result;
    result.r = color_end.r + (color_start.r - color_end.r) * percent;
    result.g = color_end.g + (color_start.g - color_end.g) * percent;
    result.b = color_end.b + (color_start.b - color_end.b) * percent;
    result.a = color_end.a + (color_start.a - color_end.a) * percent;
    return (result);
}

void update_lifebar(RPG *rpg, float currentLife, lifebar_t *lifebar, \
float maxLife)
{
    float lifePercent = (float) currentLife / maxLife;
    sfColor color1;
    if (lifePercent > 0.5) {
        color1 = interpolate_color(sfGreen, sfYellow, \
        (lifePercent - 0.5) * 2.0);
    } else {
        color1 = interpolate_color(sfYellow, sfRed, lifePercent * 2.0);
    }
    sfRectangleShape_setFillColor(lifebar->life_background, sfBlack);
    sfRectangleShape_setOutlineColor(lifebar->life_background, sfWhite);
    sfRectangleShape_setOutlineThickness(lifebar->life_background, 0.7);
    sfRenderWindow_drawRectangleShape(rw, lifebar->life_background, NULL);

    sfRectangleShape_setSize(lifebar->life_foreground, \
    vecf(lifePercent * lifebar->size.x, lifebar->size.y));
    sfRectangleShape_setFillColor(lifebar->life_foreground, color1);
    sfRenderWindow_drawRectangleShape(rw, lifebar->life_foreground, NULL);
}

lifebar_t *set_health_bar(RPG *rpg, sfVector2f size, sfVector2i pos)
{
    lifebar_t *lifebar = malloc(sizeof(lifebar_t));
    lifebar->life_background = sfRectangleShape_create();
    lifebar->life_foreground = sfRectangleShape_create();
    lifebar->size = size;
    sfRectangleShape_setSize(lifebar->life_background, size);
    sfRectangleShape_setSize(lifebar->life_foreground, size);
    sfRectangleShape_setPosition(lifebar->life_background, \
    vecf(sfView_getCenter(rpg->area).x + pos.x, \
    sfView_getCenter(rpg->area).y + pos.y));
    sfRectangleShape_setPosition(lifebar->life_foreground, \
    vecf(sfView_getCenter(rpg->area).x + pos.x, \
    sfView_getCenter(rpg->area).y + pos.y));
    sfRectangleShape_setFillColor(lifebar->life_background, sfBlack);
    sfRectangleShape_setFillColor(lifebar->life_foreground, sfGreen);
    return (lifebar);
}
