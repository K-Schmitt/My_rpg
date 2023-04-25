/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** create_txt.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

void tuch_left(RPG *rpg)
{
    char *buff = NULL;
    buff = malloc(sizeof (char) * 2);
    int i = 0;
    rpg->tuch = true;
    if (rpg->event.type == sfEvtTextEntered && rpg->tuch == true) {
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            rpg->tuch = false;
        }
        if (rpg->event.text.unicode < 128 && rpg->tuch) {
            int a = rpg->stat.up_k;
            a = a + 97;buff[i] = (char)a;i = 0;
            buff[i] = (char)rpg->event.text.unicode;
            int p = rpg->event.text.unicode;
            p = p - 97;
            i++;
            rpg->stat.left_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_left, buff);
        }} free(buff);
}

void tuch_inventory(RPG *rpg)
{
    char *buff = NULL;
    buff = malloc(sizeof (char) * 2);
    int i = 0;
    rpg->tuch = true;
    if (rpg->event.type == sfEvtTextEntered && rpg->tuch == true) {
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            rpg->tuch = false;
        }
        if (rpg->event.text.unicode < 128 && rpg->tuch) {
            int a = rpg->stat.up_k;
            a = a + 97;buff[i] = (char)a;i = 0;
            buff[i] = (char)rpg->event.text.unicode;
            int p = rpg->event.text.unicode;
            p = p - 97;i++;
            rpg->stat.inv_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_inv, buff);
        }} free(buff);
}

void tuch_book(RPG *rpg)
{
    char *buff = NULL;
    buff = malloc(sizeof (char) * 2);
    int i = 0;
    rpg->tuch = true;
    if (rpg->event.type == sfEvtTextEntered && rpg->tuch == true) {
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            rpg->tuch = false;
        }
        if (rpg->event.text.unicode < 128 && rpg->tuch) {
            int a = rpg->stat.up_k;
            a = a + 97;
            buff[i] = (char)a;i = 0;
            buff[i] = (char)rpg->event.text.unicode;
            int p = rpg->event.text.unicode;
            p = p - 97;i++;
            rpg->stat.books_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_books, buff);
        }} free(buff);
}

void tuch_intera(RPG *rpg)
{
    char *buff = NULL;
    buff = malloc(sizeof (char) * 2);
    int i = 0;
    rpg->tuch = true;
    if (rpg->event.type == sfEvtTextEntered && rpg->tuch == true) {
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            rpg->tuch = false;
        }
        if (rpg->event.text.unicode < 128 && rpg->tuch) {
            int a = rpg->stat.up_k;a = a + 97;
            buff[i] = (char)a;i = 0;
            buff[i] = (char)rpg->event.text.unicode;
            int p = rpg->event.text.unicode;
            p = p - 97;
            i++;
            rpg->stat.int_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_int, buff);
        }} free(buff);
}