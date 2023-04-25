/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** create_txt.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

void create_change(RPG *rpg)
{
    rpg->up = haut();
    rpg->down = bas();
    rpg->left = gauche();
    rpg->right = droite();
    rpg->invent = inventaire();
    rpg->booked = livre();
    rpg->interact = interaction();
    rpg->rect_up = create_up();
    rpg->rect_down = create_down();
    rpg->rect_left = create_left();
    rpg->rect_right = create_right();
    rpg->rect_invent = create_inventaire();
    rpg->rect_booked = create_livre();
    rpg->rect_interact = create_invent();
    rpg->tuch_down = tuch_down_text();
    rpg->tuch_right = tuch_right_text();
    rpg->tuch_left = tuch_left_text();
    rpg->tuch_int = tuch_int_text();
    rpg->tuch_inv = tuch_inv_text();
    rpg->tuch_books = tuch_book_text();
}

void draw_text_and_square(RPG *rpg)
{
    sfRenderWindow_drawText(rpg->window, rpg->up, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->down, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->left, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->right, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->invent, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->booked, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->interact, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_up, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_down, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_left, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_right, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_invent, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_booked, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->rect_interact, NULL);
}

void suite_tuch(RPG *rpg)
{
    sfFloatRect left = sfRectangleShape_getGlobalBounds(rpg->rect_left);
    if (sfFloatRect_contains(&left, rpg->mouseresize.x, rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false))tuch_left(rpg);
    sfRenderWindow_drawText(rpg->window, rpg->tuch_inv, NULL);
    sfFloatRect intvent = sfRectangleShape_getGlobalBounds(rpg->rect_invent);
    if (sfFloatRect_contains(&intvent, rpg->mouseresize.x, rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false))tuch_inventory(rpg);
    sfRenderWindow_drawText(rpg->window, rpg->tuch_int, NULL);
    sfFloatRect inte = sfRectangleShape_getGlobalBounds(rpg->rect_interact);
    if (sfFloatRect_contains(&inte, rpg->mouseresize.x, rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false)) tuch_intera(rpg);
    sfRenderWindow_drawText(rpg->window, rpg->tuch_books, NULL);
    sfFloatRect bookeds = sfRectangleShape_getGlobalBounds(rpg->rect_booked);
    if (sfFloatRect_contains(&bookeds, rpg->mouseresize.x, rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false))tuch_book(rpg);
}

void appel(RPG *rpg)
{
    sfRenderWindow_drawText(rpg->window, rpg->tuch_txt, NULL);
    sfFloatRect bounds = sfRectangleShape_getGlobalBounds(rpg->rect_up);
    if (sfFloatRect_contains(&bounds, rpg->mouseresize.x,rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false))
        tuch_up(rpg);
    sfRenderWindow_drawText(rpg->window, rpg->tuch_down, NULL);
    sfFloatRect down = sfRectangleShape_getGlobalBounds(rpg->rect_down);
    if (sfFloatRect_contains(&down, rpg->mouseresize.x, rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false))
        tuch_down(rpg);
    sfRenderWindow_drawText(rpg->window, rpg->tuch_right, NULL);
    sfFloatRect right = sfRectangleShape_getGlobalBounds(rpg->rect_right);
    if (sfFloatRect_contains(&right, rpg->mouseresize.x, rpg->mouseresize.y)
    == true && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    || rpg->tuch != false))
        tuch_right(rpg);
    sfRenderWindow_drawText(rpg->window, rpg->tuch_left, NULL);
    suite_tuch(rpg);
}
