/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** save
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"
#include <stdio.h>
#include <stdlib.h>

static void change_page_next(RPG *rpg)
{
    if (((rpg->mouse.x > rpg->perso.pos.x - 183 && rpg->mouse.x <
    rpg->perso.pos.x - 164 && rpg->mouse.y > rpg->perso.pos.y -12 &&
    rpg->mouse.y < rpg->perso.pos.y + 20 &&
    left_c) || kbp(rpg->stat.left_k)) && rpg->book.page > 0
    && get(times(rpg->book.c_page)) > 0.5) {
        rpg->book.page--;
        sfClock_restart(rpg->book.c_page);
        if (rpg->book.page == 0) {
            add_controle(rpg);
            rpg->book.page_2 = make_book("./assets/book/page2.txt");
            sfText_setString(rpg->book.page2.text, rpg->book.page_2);
            free(rpg->book.page_2);
        }
        if (rpg->book.page == 1) {
            add_quest(rpg);
            rpg->book.page_3 = make_book("./assets/book/page3.txt");
            sfText_setString(rpg->book.page3.text, rpg->book.page_3);
            free(rpg->book.page_3);
        }
    }
}

static void change_page(RPG *rpg)
{
    if (((rpg->mouse.x > rpg->perso.pos.x + 194 && rpg->mouse.x <
    rpg->perso.pos.x + 215 && rpg->mouse.y > rpg->perso.pos.y -12 &&
    rpg->mouse.y < rpg->perso.pos.y + 20 &&
    left_c) || kbp(rpg->stat.right_k)) && rpg->book.page < 3
    && get(times(rpg->book.c_page)) > 0.5) {
        rpg->book.page++;
        sfClock_restart(rpg->book.c_page);
        if (rpg->book.page == 0) {
            add_controle(rpg);
            rpg->book.page_2 = make_book("./assets/book/page2.txt");
            sfText_setString(rpg->book.page2.text, rpg->book.page_2);
            free(rpg->book.page_2);
        }
        if (rpg->book.page == 1) {
            add_quest(rpg);
            rpg->book.page_3 = make_book("./assets/book/page3.txt");
            sfText_setString(rpg->book.page3.text, rpg->book.page_3);
            free(rpg->book.page_3);
        }
    }
}

static void draw_page_next(RPG *rpg)
{
    if (rpg->book.page == 1) {
        sfSprite_setPosition(rpg->book.quest2.img_sprite,
        vecf(rpg->perso.pos.x + 30, rpg->perso.pos.y - 102));
        sfRenderWindow_drawSprite(rw, rpg->book.quest2.img_sprite, NULL);
        sfSprite_setPosition(rpg->book.quest1.img_sprite,
        vecf(rpg->perso.pos.x - 146, rpg->perso.pos.y - 102));
        sfRenderWindow_drawSprite(rw, rpg->book.quest1.img_sprite, NULL);
        sfText_setPosition(rpg->book.t_how.text,
        vecf(rpg->perso.pos.x + 40, rpg->perso.pos.y - 97));
        sfRenderWindow_drawText(rw, rpg->book.t_how.text, NULL);
        sfText_setPosition(rpg->book.t_quest.text,
        vecf(rpg->perso.pos.x - 145, rpg->perso.pos.y - 97));
        sfRenderWindow_drawText(rw, rpg->book.t_quest.text, NULL);
        sfText_setPosition(rpg->book.page3.text,
        vecf(rpg->perso.pos.x - 160, rpg->perso.pos.y - 90));
        sfRenderWindow_drawText(rw, rpg->book.page3.text, NULL);
        sfText_setPosition(rpg->book.page4.text,
        vecf(rpg->perso.pos.x + 25, rpg->perso.pos.y - 70));
        sfRenderWindow_drawText(rw, rpg->book.page4.text, NULL);
    }
}

static void draw_page(RPG *rpg)
{
    if (rpg->book.page == 0) {
        sfSprite_setPosition(rpg->book.bg_title.img_sprite,
        vecf(rpg->perso.pos.x - 145, rpg->perso.pos.y - 110));
        sfRenderWindow_drawSprite(rw, rpg->book.bg_title.img_sprite, NULL);
        sfText_setPosition(rpg->book.page1.text,
        vecf(rpg->perso.pos.x - 160, rpg->perso.pos.y - 100));
        sfRenderWindow_drawText(rw, rpg->book.page1.text, NULL);
        sfText_setPosition(rpg->book.page2.text,
        vecf(rpg->perso.pos.x + 25, rpg->perso.pos.y - 70));
        sfRenderWindow_drawText(rw, rpg->book.page2.text, NULL);
        sfText_setPosition(rpg->book.title.text,
        vecf(rpg->perso.pos.x - 160, rpg->perso.pos.y - 100));
        sfRenderWindow_drawText(rw, rpg->book.title.text, NULL);
    }
    draw_page_next(rpg);
    change_page(rpg);
    change_page_next(rpg);
}

void book(RPG *rpg)
{
    while (sfRenderWindow_isOpen(rw)) {
        actuwindow(rpg);
        draw_all(rpg);
        sfSprite_setPosition(rpg->book.book_s.img_sprite,
        vecf(rpg->perso.pos.x - 250, rpg->perso.pos.y - 180));
        sfSprite_setPosition(rpg->book.arrow_l.img_sprite,
        vecf(rpg->perso.pos.x - 166, rpg->perso.pos.y + 20));
        sfSprite_setPosition(rpg->book.arrow_r.img_sprite,
        vecf(rpg->perso.pos.x + 195, rpg->perso.pos.y - 10));
        sfRenderWindow_drawSprite(rw, rpg->book.book_s.img_sprite, NULL);
        sfRenderWindow_drawSprite(rw, rpg->book.arrow_l.img_sprite, NULL);
        sfRenderWindow_drawSprite(rw, rpg->book.arrow_r.img_sprite, NULL);
        draw_page(rpg);
        sfRenderWindow_display(rw);
        if (MyKeybook)
            break;
    }
}
