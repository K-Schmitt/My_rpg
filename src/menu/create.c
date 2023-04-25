/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** draw.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void create_txt(RPG *menu)
{
    menu->text = create_save_one_text();
    menu->name = create_save_one_name();
    menu->life = create_save_one_life();
    menu->level = create_save_one_level();
    menu->text_two = create_save_two_text();
    menu->name_two = create_save_two_name();
    menu->life_two = create_save_two_life();
    menu->level_two = create_save_two_level();
    menu->text_three = create_save_three_text();
    menu->name_three = create_save_three_name();
    menu->life_three = create_save_three_life();
    menu->level_three = create_save_three_level();
    menu->menuech = menuech(menu);
    menu->sound_mod = 50;
    create_change(menu);
    generate_sound(menu);
}

void txt(RPG *menu)
{
    menu->names = create_name(550, 180);
    menu->lifes = create_life(550, 230);
    menu->levels = create_level(550, 280);
    menu->names_two = create_name(550, 480);
    menu->lifes_two = create_life(550, 530);
    menu->levels_two = create_level(550, 580);
    menu->names_three = create_name(550, 780);
    menu->lifes_three = create_life(550, 830);
    menu->levels_three = create_level(550, 880);
    menu->resolution = create_resolution_text();
    menu->resolution_rec = create_resolution_rect();
    menu->rect_1920x1080 = create_1920x1080_rect();
    menu->text_1920x1080 = create_1920x1080_text();
    menu->rect_1280x720 = create_1280x720_rect();
    menu->text_1280x720 = create_1280x720_text();
    menu->is_open = false;
    menu->tuch = false;
    menu->setting_ech = create_setting_ech(menu);
    menu->start_ech = create_start_ech(menu);
    menu->quit_ech = create_quit_ech(menu);
}

void create(RPG *menu)
{
    txt(menu);
    menu->start = create_start_button();
    menu->setting = create_setting_button();
    menu->quit = create_quit_button();
    menu->play_two = create_play_button_two();
    menu->play_three = create_play_button_three();
    menu->play_start_one = create_play_button();
    menu->rect_start = sfSprite_getGlobalBounds(menu->start);
    menu->rect_setting = sfSprite_getGlobalBounds(menu->setting);
    menu->rect_quit = sfSprite_getGlobalBounds(menu->quit);
    menu->save_one = create_save_one();
    menu->save_two = create_save_two();
    menu->save_three = create_save_three();
    menu->back = background();
    menu->zone_text = zone_txt();
    menu->tuch_txt = tuch_text();
    menu->save_one_del = save_one_del(1350, 150);
    menu->save_two_del = save_one_del(1350, 450);
    menu->save_three_de = save_one_del(1350, 750);
    create_txt(menu);
}

sfText *create_resolution_text(void)
{
    sfText *text;
    sfFont *font;
    sfVector2f pos = {100, 180};
    text = sfText_create();
    font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, pos);
    sfText_setString(text, "Resolution");
    sfText_setColor(text, sfBlack);
    return (text);
}

sfRectangleShape *create_resolution_rect(void)
{
    sfRectangleShape *rect;
    sfVector2f pos = {100, 180};
    sfVector2f size = {300, 50};
    rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(rect, pos);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setFillColor(rect, sfTransparent);
    sfRectangleShape_setOutlineColor(rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(rect, 2);
    return (rect);
}
