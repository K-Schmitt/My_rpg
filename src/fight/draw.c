/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** draw
*/

#include "../../include/csfmlib.h"

void draw_inventoryf(RPG *rpg)
{
    itemfunc_t *tab = get_items(rpg);
    for (int i = 0; i < 4; i++) {
        if (rpg->fight->slot[i] != 0)
            sfRenderWindow_drawSprite(rw, tab[rpg->fight->slot[i] - 1].sprite, \
            NULL);
    }
}

void draw_perso(RPG *rpg)
{
    rpg->perso.z.top = 64;
    rpg->perso.z.left = 64;
    sfSprite_setTextureRect(rpg->perso.img_sprite, rpg->perso.z);
    sfSprite_setPosition(rpg->perso.img_sprite, (sfVector2f) \
    {sfView_getCenter(rpg->area).x - 200, sfView_getCenter(rpg->area).y});
    sfSprite_setScale(rpg->perso.img_sprite, (sfVector2f){2, 2});
    sfRenderWindow_drawSprite(rw, rpg->perso.img_sprite, NULL);
}

void draw_ennemy(RPG *rpg)
{
    animate_entity(rpg->fight->ennemy, 7, 64);
    sfSprite_setTextureRect(rpg->fight->ennemy->img_sprite, \
    rpg->fight->ennemy->z);
    sfSprite_setPosition(rpg->fight->ennemy->img_sprite, (sfVector2f) \
    {sfView_getCenter(rpg->area).x + 120, sfView_getCenter(rpg->area).y});
    sfSprite_setScale(rpg->fight->ennemy->img_sprite, (sfVector2f)\
    {rpg->fight->ennemy->scale.x * 2, \
    rpg->fight->ennemy->scale.y * 2});
    sfRenderWindow_drawSprite(rw, rpg->fight->ennemy->img_sprite, NULL);
}

void draw_fight(RPG *rpg)
{
    sfRenderWindow_drawSprite(rw, rpg->fight->background.img_sprite, NULL);
    sfRenderWindow_drawSprite(rw, rpg->fight->equip_bar.img_sprite, NULL);
    draw_inventoryf(rpg);
    draw_perso(rpg);
}
