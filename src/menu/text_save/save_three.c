/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** save_three.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfText *create_save_three_text(void)
{
    sfText *save_three = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_three, font);
    sfText_setCharacterSize(save_three, 50);
    sfText_setString(save_three, "Save 3");
    sfText_setColor(save_three, sfBlack);
    sfVector2f position = {450, 750};
    sfText_setPosition(save_three, position);
    return (save_three);
}

sfText *create_save_three_name(void)
{
    FILE *file = fopen("save/save3.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 75; i++)
        getline(&line, &len, file);
    sfText *save_three_name = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_three_name, font);
    sfText_setCharacterSize(save_three_name, 40);
    sfText_setString(save_three_name, line);
    sfText_setColor(save_three_name, sfBlack);
    sfVector2f position = {675, 780};
    sfText_setPosition(save_three_name, position);
    free(line);
    fclose(file);
    return (save_three_name);
}

sfText *create_save_three_life(void)
{
    FILE *file = fopen("save/save3.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 41; i++)
        getline(&line, &len, file);
    sfText *save_three_life = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_three_life, font);
    sfText_setCharacterSize(save_three_life, 40);
    line[my_strlen(line) - 1] = '\0';
    sfText_setString(save_three_life, my_strcat(line, "/100"));
    sfText_setColor(save_three_life, sfBlack);
    sfVector2f position = {675, 830};
    sfText_setPosition(save_three_life, position);
    free(line);
    fclose(file);
    return (save_three_life);
}

sfText *create_save_three_level(void)
{
    FILE *file = fopen("save/save3.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 42; i++)
        getline(&line, &len, file);
    sfText *save_three_level = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_three_level, font);
    sfText_setCharacterSize(save_three_level, 40);
    sfText_setString(save_three_level, line);
    sfText_setColor(save_three_level, sfBlack);
    sfVector2f position = {675, 880};
    sfText_setPosition(save_three_level, position);
    free(line);
    fclose(file);
    return (save_three_level);
}

void save_three_text(RPG *menu)
{
    sfRenderWindow_drawText(menu->window, menu->lifes_three, NULL);
    sfRenderWindow_drawText(menu->window, menu->levels_three, NULL);
    sfRenderWindow_drawText(menu->window, menu->text_three, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->play_three, NULL);
    sfFloatRect bounds = sfSprite_getGlobalBounds(menu->play_three);
    if (sfFloatRect_contains(&bounds, menu->mouseresize.x,
    menu->mouseresize.y) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
        menu->saves.option = 3;
        game(menu);
        sfRenderWindow_drawText(menu->window, menu->life_three, NULL);
        sfRenderWindow_drawText(menu->window, menu->level_three, NULL);
    }
}
