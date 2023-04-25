/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** bouton.c
*/

#include "../../include/csfmlib.h"

static void active_bouton2(RPG *rpg, int bouton)
{
    if (bouton == 7)
        rpg->quete.b1_p3 = 1;
    if (bouton == 8)
        rpg->quete.b2_p3 = 1;
    if (bouton == 9)
        rpg->quete.b3_p3 = 1;
    if (bouton == 1 || bouton == 3 || bouton == 5)
        start_dialogue(rpg, "./assets/dialogue/bouton.txt", 6);
    else
        start_dialogue(rpg, "./assets/dialogue/bouton1.txt", 6);
}

static void active_bouton(RPG *rpg, int bouton)
{
    if (bouton == 1)
        rpg->quete.b1_p1 = 1;
    if (bouton == 2)
        rpg->quete.b1_p2 = 1;
    if (bouton == 3)
        rpg->quete.b2_p1 = 1;
    if (bouton == 4)
        rpg->quete.b2_p2 = 1;
    if (bouton == 5)
        rpg->quete.b3_p1 = 1;
    if (bouton == 6)
        rpg->quete.b3_p2 = 1;
    active_bouton2(rpg, bouton);
}

static void actu_button3(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = rectf(200, 760, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b1_p3 == 0)
        active_bouton(rpg, 7);
    bounds2 = rectf(80, 640, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b2_p3 == 0)
        active_bouton(rpg, 8);
    bounds2 = rectf(520, 760, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b3_p3 == 0)
        active_bouton(rpg, 9);
}

static void actu_button2(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = rectf(240, 1340, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b1_p2 == 0)
        active_bouton(rpg, 2);
    bounds2 = rectf(840, 1160, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b2_p2 == 0)
        active_bouton(rpg, 4);
    bounds2 = rectf(1000, 1340, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b3_p2 == 0)
        active_bouton(rpg, 6);
    actu_button3(rpg);
}

void actu_button(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = rectf(140, 1180, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b1_p1 == 0)
        active_bouton(rpg, 1);
    bounds2 = rectf(460, 1180, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b2_p1 == 0)
        active_bouton(rpg, 3);
    bounds2 = rectf(340, 1340, 20, 20);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    MyKeyinter &&
    rpg->quete.b3_p1 == 0)
        active_bouton(rpg, 5);
    actu_button2(rpg);
}
