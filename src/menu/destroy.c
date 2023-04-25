/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** destroy.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void destroy_all_four(RPG *rpg)
{
    sfRectangleShape_destroy(rpg->rect_up);
    sfRectangleShape_destroy(rpg->rect_down);
    sfRectangleShape_destroy(rpg->rect_left);
    sfRectangleShape_destroy(rpg->rect_right);
    sfRectangleShape_destroy(rpg->rect_invent);
    sfRectangleShape_destroy(rpg->rect_booked);
    sfRectangleShape_destroy(rpg->rect_interact);
    sfSprite_destroy(rpg->plus);
    sfSprite_destroy(rpg->moins);
}

void destroy_all_three(RPG *rpg)
{
    sfRectangleShape_destroy(rpg->zone_text);
    sfText_destroy(rpg->tuch_txt);
    sfSprite_destroy(rpg->save_one_del);
    sfSprite_destroy(rpg->save_two_del);
    sfSprite_destroy(rpg->save_three_de);
    sfRectangleShape_destroy(rpg->resolution_rec);
    sfRectangleShape_destroy(rpg->rect_1280x720);
    sfRectangleShape_destroy(rpg->rect_1920x1080);
    sfText_destroy(rpg->text_1280x720);
    sfText_destroy(rpg->text_1920x1080);sfText_destroy(rpg->resolution);
    sfSprite_destroy(rpg->start);
    sfSprite_destroy(rpg->setting);sfSprite_destroy(rpg->quit);
    sfSprite_destroy(rpg->start_selected);
    sfSprite_destroy(rpg->setting_selected);
    sfSprite_destroy(rpg->quit_selected);
    sfText_destroy(rpg->up);sfText_destroy(rpg->down);sfText_destroy
    (rpg->left);sfText_destroy(rpg->right);sfText_destroy(rpg->invent);
    sfText_destroy(rpg->booked);sfText_destroy(rpg->interact);
    destroy_all_four(rpg);
}

void destroy_all_two(RPG *rpg)
{
    sfText_destroy(rpg->text_three);
    sfText_destroy(rpg->name_three);
    sfText_destroy(rpg->life_three);
    sfText_destroy(rpg->level_three);
    sfSprite_destroy(rpg->menuech);
    sfSprite_destroy(rpg->setting_ech);
    sfSprite_destroy(rpg->start_ech);
    sfSprite_destroy(rpg->quit_ech);
    sfSprite_destroy(rpg->start);
    sfSprite_destroy(rpg->setting);
    sfSprite_destroy(rpg->quit);
    sfSprite_destroy(rpg->play_two);
    sfSprite_destroy(rpg->play_three);
    sfSprite_destroy(rpg->play_start_one);
    sfSprite_destroy(rpg->save_one);
    sfSprite_destroy(rpg->save_two);
    sfSprite_destroy(rpg->save_three);
    sfSprite_destroy(rpg->back);
    destroy_all_three(rpg);
}

void destroy_all(RPG *rpg)
{
    sfSprite_destroy(rpg->back);
    sfSprite_destroy(rpg->setting);
    sfSprite_destroy(rpg->quit);
    sfText_destroy(rpg->text);
    sfTexture_destroy(rpg->texture);
    sfText_destroy(rpg->name);
    sfText_destroy(rpg->life);
    sfText_destroy(rpg->level);
    sfText_destroy(rpg->text_two);
    sfText_destroy(rpg->name_two);
    sfText_destroy(rpg->life_two);
    sfText_destroy(rpg->level_two);
    destroy_all_two(rpg);
}
