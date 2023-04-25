 /*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** create_txt.c
*/

#include "../../../include/csfmlib.h"
#include "../../../include/define.h"

void tuch_up(RPG *rpg)
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
            p = p - 97;i++;rpg->stat.up_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_txt, buff);
        }}free(buff);
}

void tuch_down(RPG *rpg)
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
            rpg->stat.down_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_down, buff);
        }}free(buff);
}

void tuch_right(RPG *rpg)
{
    char *buff = NULL;
    buff = malloc(sizeof (char) * 2);int i = 0;
    rpg->tuch = true;
    if (rpg->event.type == sfEvtTextEntered && rpg->tuch == true) {
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            rpg->tuch = false;
        }
        if (rpg->event.text.unicode < 128 && rpg->tuch) {
            int a = rpg->stat.up_k;
            a = a + 97;
            buff[i] = (char)a;
            i = 0;
            buff[i] = (char)rpg->event.text.unicode;
            int p = rpg->event.text.unicode;
            p = p - 97;i++;rpg->stat.right_k = (sfKeyCode)p;
            buff[i] = '\0';
            sfText_setString(rpg->tuch_right, buff);
        }}free(buff);
}