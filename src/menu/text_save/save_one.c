/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** save_one.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"
#include <string.h>

sfText *create_save_one_text(void)
{
    sfText *save_one = sfText_create();
    sfFont *font = sfFont_createFromFile
    ("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_one, font);
    sfText_setCharacterSize(save_one, 50);
    sfText_setString(save_one, "Save 1");
    sfText_setColor(save_one, sfBlack);
    sfVector2f position = {450, 150};
    sfText_setPosition(save_one, position);
    return (save_one);
}

sfText *create_save_one_name(void)
{
    FILE *file = fopen("save/save1.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 75; i++)
        getline(&line, &len, file);
    sfText *save_one_name = sfText_create();
    sfFont *font = sfFont_createFromFile
    ("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_one_name, font);
    sfText_setCharacterSize(save_one_name, 40);
    sfText_setString(save_one_name, line);
    sfText_setColor(save_one_name, sfBlack);
    sfVector2f position = {675, 180};
    sfText_setPosition(save_one_name, position);
    free(line);fclose(file);
    sfFont_destroy(font);
    return (save_one_name);
}

sfText *create_save_one_life(void)
{
    FILE *file = fopen("save/save1.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 41; i++)
    getline(&line, &len, file);
    sfText *save_one_life = sfText_create();
    sfFont *font = sfFont_createFromFile
    ("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_one_life, font);
    sfText_setCharacterSize(save_one_life, 40);
    sfText_setColor(save_one_life, sfBlack);
    line[my_strlen(line) - 1] = '\0';
    sfText_setString(save_one_life,my_strcat(line, "/100"));
    sfVector2f position = {675, 230};
    sfText_setPosition(save_one_life, position);
    free(line);fclose(file);
    return (save_one_life);
}

sfText *create_save_one_level(void)
{
    FILE *file = fopen("save/save1.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 42; i++)
        getline(&line, &len, file);
    sfText *save_one_level = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_one_level, font);
    sfText_setCharacterSize(save_one_level, 40);
    sfText_setColor(save_one_level, sfBlack);
    sfText_setString(save_one_level, line);
    sfVector2f position = {675, 280};
    sfText_setPosition(save_one_level, position);
    free(line);fclose(file);
    return save_one_level;
}

void save_one_text(RPG *menu)
{
    sfRenderWindow_drawText(menu->window, menu->text, NULL);
    sfRenderWindow_drawText(menu->window, menu->lifes, NULL);
    sfRenderWindow_drawText(menu->window, menu->levels, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->play_start_one, NULL);
    sfFloatRect bounds = sfSprite_getGlobalBounds(menu->play_start_one);
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(menu->window);
    menu->mouseresize = sfRenderWindow_mapPixelToCoords(menu->window,
    mouse_position, NULL);
        if (sfFloatRect_contains(&bounds, menu->mouseresize.x,
        menu->mouseresize.y) && sfMouse_isButtonPressed(sfMouseLeft)) {
            game(menu);
        }
        sfRenderWindow_drawText(menu->window, menu->life, NULL);
        sfRenderWindow_drawText(menu->window, menu->level, NULL);
    save_two_text(menu);
}
