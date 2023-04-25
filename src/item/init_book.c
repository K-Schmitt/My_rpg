/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** save
*/

#include "../../include/csfmlib.h"
#include <stdlib.h>

static void init_book_next(RPG *rpg)
{
    add_controle(rpg);
    rpg->book.page_2 = make_book("./assets/book/page2.txt");
    sfText_setString(rpg->book.page2.text, rpg->book.page_2);
    rpg->book.page_4 = make_book("./assets/book/page4.txt");
    create_text4(&rpg->book.page4, rpg->book.page_4, 0.35, vecf(0, 0));
    free(rpg->book.page_2);
    free(rpg->book.page_1);
    free(rpg->book.page_4);
    create_sprite(&rpg->book.quest1, "./assets/book/quest1.png",
    vecf(0.3, 0.3));
    create_sprite(&rpg->book.quest2, "./assets/book/quest2.png",
    vecf(0.45, 0.3));
    create_text5(&rpg->book.t_quest, "        Quetes", 0.42, vecf(0, 0));
    create_text5(&rpg->book.t_how, "        Comment jouer", 0.42, vecf(0, 0));
}

void init_book(RPG *rpg)
{
    rpg->book.c_book = sfClock_create();
    rpg->book.c_page = sfClock_create();
    rpg->book.b_is_press = false;
    rpg->book.page = 0;
    rpg->book.page_1 = make_book("./assets/book/page1.txt");
    rpg->book.page_2 = make_book("./assets/book/page2.txt");
    create_sprite(&rpg->book.book_s, "./assets/book/book.png",
    vecf(1.2, 1.15 ));
    create_sprite(&rpg->book.arrow_l, "./assets/book/arrow.png",
    vecf(0.1, 0.1));
    create_sprite(&rpg->book.arrow_r, "./assets/book/arrow.png",
    vecf(0.1, 0.1));
    create_sprite(&rpg->book.bg_title, "./assets/book/fond_title.png",
    vecf(0.3, 0.3));
    sfSprite_setRotation(rpg->book.arrow_l.img_sprite, 180);
    create_text4(&rpg->book.page1, rpg->book.page_1, 0.30, vecf(0, 0));
    create_text4(&rpg->book.page2, rpg->book.page_2, 0.35, vecf(0, 0));
    create_text4(&rpg->book.page3, "0", 0.35, vecf(0, 0));
    create_text5(&rpg->book.title, "        Game of Bob", 0.42, vecf(0, 0));
    init_book_next(rpg);
}
