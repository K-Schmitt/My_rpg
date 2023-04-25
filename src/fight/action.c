/*
** EPITECH PROJECT, 2023
** MUL-200-myrpg
** File description:
** action
*/

#include "../../include/csfmlib.h"

void choice_player_start(RPG *rpg)
{
    if (rand() % 2)
        rpg->fight->my_round = sfTrue;
    else
        rpg->fight->my_round = sfFalse;
}

void check_round(RPG *rpg)
{
    if (rpg->fight->my_round == sfFalse) {
        if (rpg->fight->state_player == PLAYER) {
            rpg->fight->state_player = ENNEMY;
        } else {
            rpg->fight->state_player = PLAYER;
        }
        rpg->fight->my_round = sfTrue;
        sfClock_restart(rpg->fight->clock);
    }
}

void player_action(RPG *rpg)
{
    if (rpg->fight->state_player == PLAYER) {
        draw_select(rpg);
        if (rpg->fight->convex_nb == 0)
            on_click_zone(rpg, rpg->fight->ennemy->img_sprite);
        else
            on_click_zone(rpg, rpg->perso.img_sprite);
    }
}

void ennemy_action(RPG *rpg)
{
    if (rpg->fight->state_player == ENNEMY) {
        sfRenderWindow_drawSprite(rw, \
        rpg->fight->equip_unusable.img_sprite, NULL);
        draw_inventoryf(rpg);
        sfRenderWindow_drawSprite(rw, \
        rpg->fight->equip_unusable_block.img_sprite, NULL);
        if (get(times(rpg->fight->clock)) > 3) {
            float test = calc_damage(rpg->fight->ennemy->degat, 25)\
            - (rpg->stat.resist * 0.75);
            rpg->stat.life -= test;
            rpg->fight->state_player = PLAYER;
        }
    }
}
