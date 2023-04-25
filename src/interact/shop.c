/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** shop
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>
static void draw_bg(RPG *rpg)
{
    sfSprite_setPosition(rpg->shop.banner[0].img_sprite,
    vecf(rpg->perso.pos.x - 105, rpg->perso.pos.y + 15));
    sfRenderWindow_drawSprite(rw, rpg->shop.banner[0].img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.banner[1].img_sprite,
    vecf(rpg->perso.pos.x + 65, rpg->perso.pos.y + 15));
    sfRenderWindow_drawSprite(rw, rpg->shop.banner[1].img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.banner[2].img_sprite,
    vecf(rpg->perso.pos.x - 180, rpg->perso.pos.y + 85));
    sfRenderWindow_drawSprite(rw, rpg->shop.banner[2].img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.banner[3].img_sprite,
    vecf(rpg->perso.pos.x - 25, rpg->perso.pos.y + 85));
    sfRenderWindow_drawSprite(rw, rpg->shop.banner[3].img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.banner[4].img_sprite,
    vecf(rpg->perso.pos.x + 135, rpg->perso.pos.y + 85));
    sfRenderWindow_drawSprite(rw, rpg->shop.banner[4].img_sprite, NULL);
}

static void draw_shop_3(RPG *rpg)
{
    sfSprite_setPosition(rpg->shop.strenght_s.img_sprite,
    vecf(rpg->perso.pos.x - 150, rpg->perso.pos.y + 20));
    sfRenderWindow_drawSprite(rw, rpg->shop.strenght_s.img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.whisky_s.img_sprite,
    vecf(rpg->perso.pos.x + 45, rpg->perso.pos.y + 15));
    sfRenderWindow_drawSprite(rw, rpg->shop.whisky_s.img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.mushroom_s.img_sprite,
    vecf(rpg->perso.pos.x - 220, rpg->perso.pos.y + 89));
    sfRenderWindow_drawSprite(rw, rpg->shop.mushroom_s.img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.cactus_s.img_sprite,
    vecf(rpg->perso.pos.x - 60, rpg->perso.pos.y + 82));
    sfRenderWindow_drawSprite(rw, rpg->shop.cactus_s.img_sprite, NULL);
    sfSprite_setPosition(rpg->shop.ammo_s.img_sprite,
    vecf(rpg->perso.pos.x + 93, rpg->perso.pos.y + 85));
    sfRenderWindow_drawSprite(rw, rpg->shop.ammo_s.img_sprite, NULL);
}

static void draw_shop_2(RPG *rpg)
{
    is_over(rpg);
    sfText_setPosition(rpg->shop.price_1.text,
    vecf(rpg->perso.pos.x - 90, rpg->perso.pos.y + 30));
    sfRenderWindow_drawText(rw, rpg->shop.price_1.text, NULL);
    sfText_setPosition(rpg->shop.price_2.text,
    vecf(rpg->perso.pos.x + 80, rpg->perso.pos.y + 30));
    sfRenderWindow_drawText(rw, rpg->shop.price_2.text, NULL);
    sfText_setPosition(rpg->shop.price_3.text,
    vecf(rpg->perso.pos.x - 165, rpg->perso.pos.y + 100));
    sfRenderWindow_drawText(rw, rpg->shop.price_3.text, NULL);
    sfText_setPosition(rpg->shop.price_4.text,
    vecf(rpg->perso.pos.x - 10, rpg->perso.pos.y + 100));
    sfRenderWindow_drawText(rw, rpg->shop.price_4.text, NULL);
    sfText_setPosition(rpg->shop.price_5.text,
    vecf(rpg->perso.pos.x + 150, rpg->perso.pos.y + 100));
    sfRenderWindow_drawText(rw, rpg->shop.price_5.text, NULL);
    draw_shop_3(rpg);
}

static void draw_shop(RPG *rpg)
{
    char *coin = my_int_to_str(rpg->stat.coin);
    sfText_setString(rpg->shop.coin_nb_s.text, coin);
    sfSprite_setPosition(rpg->shop.shop_bg.img_sprite,
    vecf(rpg->perso.pos.x - 250, rpg->perso.pos.y - 130));
    sfRenderWindow_drawSprite(rw, rpg->shop.shop_bg.img_sprite, NULL);
    sfText_setPosition(rpg->shop.shop_des.text,
    vecf(rpg->perso.pos.x - 80, rpg->perso.pos.y - 120));
    sfRenderWindow_drawText(rw, rpg->shop.shop_des.text, NULL);
    sfText_setPosition(rpg->shop.coin_nb_s.text,
    vecf(rpg->perso.pos.x + 25, rpg->perso.pos.y - 40));
    sfRenderWindow_drawText(rw, rpg->shop.coin_nb_s.text, NULL);
    sfSprite_setPosition(rpg->shop.coin_s.img_sprite,
    vecf(rpg->perso.pos.x - 35, rpg->perso.pos.y - 43));
    sfRenderWindow_drawSprite(rw, rpg->shop.coin_s.img_sprite, NULL);
    draw_bg(rpg);
    draw_shop_2(rpg);
}

void shop(RPG *rpg)
{
    cut_music(rpg);
    sfMusic_play(rpg->music.shop);
    rpg->music.music_s = 1;
    rpg->shop.is_open = true;
    while (sfRenderWindow_isOpen(rw)) {
        actuwindow(rpg);
        draw_all(rpg);
        draw_shop(rpg);
        buy_click(rpg);
        sfRenderWindow_display(rw);
        if (MyKeyinter)
            break;
    }
    rpg->shop.is_open = false;
    change_music(rpg);
}
