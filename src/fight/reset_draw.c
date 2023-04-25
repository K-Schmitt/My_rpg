/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** reset_draw
*/

#include "../../include/csfmlib.h"

void reset_all(RPG *rpg)
{
    rpg->fight->select = 0;
    sfSprite_setScale(rpg->perso.img_sprite, (sfVector2f){1, 1});
    sfSprite_setPosition(rpg->perso.img_sprite, rpg->perso.pos);
    sfSprite_setScale(rpg->fight->ennemy->img_sprite, vecf(1, 1));
    sfSprite_setPosition(rpg->fight->ennemy->img_sprite, \
    rpg->fight->ennemy->pos);
    sfSprite_setScale(rpg->obj.strenght.img_sprite, vecf(0.03, 0.03));
    sfSprite_setScale(rpg->obj.chat_inv.img_sprite, vecf(0.6, 0.6));
    sfSprite_setScale(rpg->obj.stick.img_sprite, vecf(0.04, 0.04));
    sfSprite_setScale(rpg->obj.sword.img_sprite, vecf(0.05, 0.05));
    sfSprite_setScale(rpg->obj.pistol.img_sprite, vecf(0.04, 0.04));
    sfSprite_setScale(rpg->obj.ammo.img_sprite, vecf(0.012, 0.012));
    sfSprite_setScale(rpg->obj.spell.img_sprite, vecf(0.03, 0.03));
    sfSprite_setScale(rpg->obj.whisky.img_sprite, vecf(0.01, 0.01));
    sfSprite_setScale(rpg->obj.cactus.img_sprite, vecf(0.05, 0.05));
    sfSprite_setScale(rpg->obj.mushroom.img_sprite, vecf(0.04, 0.04));
}
