/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** save_two.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

sfText *create_save_two_text(void)
{
    sfText *save_two = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_two, font);
    sfText_setCharacterSize(save_two, 50);
    sfText_setString(save_two, "Save 2");
    sfText_setColor(save_two, sfBlack);
    sfVector2f position = {450, 450};
    sfText_setPosition(save_two, position);
    return (save_two);
}

sfText *create_save_two_name(void)
{
    FILE *file = fopen("save/save2.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 46; i++)
        getline(&line, &len, file);
    sfText *save_two_name = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_two_name, font);
    sfText_setCharacterSize(save_two_name, 40);
    sfText_setString(save_two_name, line);
    sfText_setColor(save_two_name, sfBlack);
    sfVector2f position = {675, 480};
    sfText_setPosition(save_two_name, position);
    free(line);fclose(file);
    return (save_two_name);
}

sfText *create_save_two_life(void)
{
    FILE *file = fopen("save/save2.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 41; i++)
        getline(&line, &len, file);
    sfText *save_two_life = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_two_life, font);
    sfText_setCharacterSize(save_two_life, 40);
    line[my_strlen(line) - 1] = '\0';
    sfText_setString(save_two_life,my_strcat(line, "/100"));
    sfText_setColor(save_two_life, sfBlack);
    sfVector2f position = {675, 530};
    sfText_setPosition(save_two_life, position);
    free(line);fclose(file);
    return (save_two_life);
}

sfText *create_save_two_level(void)
{
    FILE *file = fopen("save/save2.txt", "r");
    char *line = NULL;
    size_t len = 0;
    for (int i = 0; i < 76; i++)
        getline(&line, &len, file);
    sfText *save_two_level = sfText_create();
    sfFont *font = sfFont_createFromFile("src/menu/asset/arial/arial.ttf");
    sfText_setFont(save_two_level, font);
    sfText_setCharacterSize(save_two_level, 40);
    sfText_setString(save_two_level, line);
    sfText_setColor(save_two_level, sfBlack);
    sfVector2f position = {675, 580};
    sfText_setPosition(save_two_level, position);
    free(line);fclose(file);
    return (save_two_level);
}

void save_two_text(RPG *menu)
{
    sfRenderWindow_drawText(menu->window, menu->lifes_two, NULL);
    sfRenderWindow_drawText(menu->window, menu->levels_two, NULL);
    sfRenderWindow_drawText(menu->window, menu->text_two, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->play_two, NULL);
        sfFloatRect bounds = sfSprite_getGlobalBounds(menu->play_two);
        if (sfFloatRect_contains(&bounds, menu->mouseresize.x,
        menu->mouseresize.y) && sfMouse_isButtonPressed(sfMouseLeft)) {
            menu->saves.option = 2;game(menu);
    sfRenderWindow_drawText(menu->window, menu->level_two, NULL);
    sfRenderWindow_drawText(menu->window, menu->life_two, NULL);
    }save_three_text(menu);
}
