/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-elias.fassella
** File description:
** pique.c
*/

#include "../../include/csfmlib.h"
#include <stdio.h>
#include <stdlib.h>

void init_sword(RPG *rpg)
{
    create_perso(&rpg->quete.sword, "./assets/obj/sword.png", vecf(1.5, 1.5),
    veci(20, 20));
    rpg->quete.sword.z.left = 0;
    rpg->quete.sword.z.top = 0;
    sfSprite_setTextureRect(rpg->quete.sword.img_sprite,
    rpg->quete.sword.z);
    sfSprite_setScale(rpg->quete.sword.img_sprite,
    rpg->quete.sword.scale);
    sfSprite_setPosition(rpg->quete.sword.img_sprite, vecf(1060, 493));
    rpg->quete.sword.draw = 10;
    sfSprite_setRotation(rpg->quete.sword.img_sprite, 135);
    rpg->quete.sword.sizeX = 80;

}

void actu_sword(RPG *rpg)
{
    sfFloatRect bounds1 = sfSprite_getGlobalBounds(rpg->perso.img_sprite);
    sfFloatRect bounds2 = sfSprite_getGlobalBounds(rpg->quete.sword.img_sprite);
    if (sfFloatRect_intersects(&bounds1, &bounds2, NULL) &&
    rpg->quete.sword.draw == rpg->zone && MyKeyinter) {
        animate(&rpg->quete.sword, 5, 20);
        rpg->quete.sortie_epee++;
    }
    if (rpg->quete.sortie_epee == 42) {
        push_in_inventory(rpg, 2);
        rpg->quete.sortie_epee++;
    }
    if (rpg->quete.sortie_epee >= 42)
        rpg->quete.sword.draw = 0;
    sfSprite_setTextureRect(rpg->quete.sword.img_sprite, rpg->quete.sword.z);
}

void draw_sword(RPG *rpg)
{
    if (rpg->quete.sword.draw == rpg->zone)
        sfRenderWindow_drawSprite(rw, rpg->quete.sword.img_sprite, NULL);
}
