/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** truc.c
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

char *my_strcate(char* dest, const char* src)
{
    size_t dest_len = my_strlen(dest);
    size_t src_len = my_strlen(src);
    char* result = dest + dest_len;
    for (size_t i = 0; i < src_len; i++) {
        result[i] = src[i];
    }
    result[src_len] = '\0';
    return dest;
}

void setting(RPG *rpg)
{
    sfView *view;
    sfVector2f pos = {960, 550};
    sfVector2f size = {1920, 1080};
    view = sfView_create();
    sfView_setCenter(view, pos);
    sfView_setSize(view, size);
    sfRenderWindow_setView(rpg->window, view);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue && rpg->ech == false)
        menu(rpg);
    sfRenderWindow_clear(rpg->window, sfColor_fromRGB(179, 139, 109));
    sfRenderWindow_drawSprite(rpg->window, rpg->back, NULL);
    resolution(rpg);
    draw_sound(rpg);
    draw_text_and_square(rpg);
    appel(rpg);
}

sfSprite *background(void)
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos = {0, 0};
    sfVector2f scale = {1.5, 1.5};
    texture = sfTexture_createFromFile("src/menu/asset/image.png", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    return (sprite);
}

void test(RPG * rpg)
{
    if (rpg->event.type == sfEvtClosed || rpg->i == 3)
    sfRenderWindow_close(rpg->window);
}
