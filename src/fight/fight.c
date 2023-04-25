/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** fight
*/

#include "../../include/csfmlib.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void on_click_zone(RPG *rpg, sfSprite *sprite)
{
    itemfunc_t *tab = get_items(rpg);
    sfFloatRect test = sfSprite_getGlobalBounds(sprite);
    if (rpg->event.type == sfEvtMouseButtonReleased && rpg->fight->select == 1
    && sfFloatRect_contains(&test, rpg->mouse.x, rpg->mouse.y)
    && rpg->fight->slot_id != 0) {
        if (tab[rpg->fight->slot_id - 1].func != NULL)
            tab[rpg->fight->slot_id - 1].func(rpg);
        rpg->fight->select = 0;
    }
}

int ennemy_win(RPG *rpg)
{
    if (rpg->stat.life == 0) {
        die(rpg);
        change_music(rpg);
        return (0);
    }
    return (1);
}

int player_win(RPG *rpg)
{
    if (rpg->fight->ennemy->life == 0) {
        add_xp(rpg, rpg->fight->ennemy->xp);
        rpg->fight->ennemy->draw = 0;
        change_music(rpg);
        return (0);
    }
    return (1);
}

void call_all(RPG *rpg)
{
    actuwindow(rpg);
    draw_fight(rpg);
    draw_ennemy(rpg);
    check_round(rpg);
    player_action(rpg);
    ennemy_action(rpg);
    update_life(rpg);
    sfRenderWindow_display(rw);
}

int fight(RPG *rpg, stockennemie *ennemy)
{
    init_ennemy(rpg, ennemy);
    set_fight(rpg);
    choice_player_start(rpg);
    while (sfRenderWindow_isOpen(rw)) {
        call_all(rpg);
        if (ennemy_win(rpg) == 0) {
            reset_all(rpg);
            return (1);
        }
        if (player_win(rpg) == 0) {
            reset_all(rpg);
            return (0);
        }
        if (kbp(sfKeyEscape) && rpg->cheat == 1) {
            rpg->fight->ennemy->draw = 0;
            change_music(rpg);
            reset_all(rpg);
            return (0);
        }
    }
    return (0);
}
