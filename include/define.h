/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** define
*/

#pragma once

#include "csfmlib.h"
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#define ARCHI rpg->pnjs.archi.pos
#define rw rpg->window
#define ms microseconds
#define mp rpg->mouse
#define ssbp stocksprite *bob
#define kbp sfKeyboard_isKeyPressed
#define get sfTime_asSeconds
#define times sfClock_getElapsedTime
#define left_c sfTrue == sfMouse_isButtonPressed(sfMouseLeft)
#define slot1 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 25 < rpg->mouse.y
#define slot2 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 26 > rpg->mouse.y && rpg->perso.pos.y - 46 < rpg->mouse.y
#define slot3 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 47 > rpg->mouse.y && rpg->perso.pos.y - 67 < rpg->mouse.y
#define slot4 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 68 > rpg->mouse.y && rpg->perso.pos.y - 88 < rpg->mouse.y
#define slot5 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 127 > rpg->mouse.x && \
rpg->perso.pos.x - 147 < rpg->mouse.x \
&& rpg->perso.pos.y - 8 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define slot6 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 106 > rpg->mouse.x && \
rpg->perso.pos.x - 126 < rpg->mouse.x \
&& rpg->perso.pos.y - 8 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define slot7 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 85 > rpg->mouse.x && \
rpg->perso.pos.x - 105 < rpg->mouse.x \
&& rpg->perso.pos.y - 8 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define slot8 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 64 > rpg->mouse.x && \
rpg->perso.pos.x - 84 < rpg->mouse.x \
&& rpg->perso.pos.y - 8 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define slot9 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 43 > rpg->mouse.x && \
rpg->perso.pos.x - 63 < rpg->mouse.x \
&& rpg->perso.pos.y - 8 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define slot10 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 22 > rpg->mouse.x && \
rpg->perso.pos.x - 42 < rpg->mouse.x \
&& rpg->perso.pos.y - 8 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define slot11 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 127 > rpg->mouse.x && \
rpg->perso.pos.x - 147 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 5 < rpg->mouse.y
#define slot12 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 106 > rpg->mouse.x && \
rpg->perso.pos.x - 126 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 5 < rpg->mouse.y
#define slot13 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 85 > rpg->mouse.x && \
rpg->perso.pos.x - 105 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 5 < rpg->mouse.y
#define slot14 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 64 > rpg->mouse.x && \
rpg->perso.pos.x - 84 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 5 < rpg->mouse.y
#define slot15 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 43 > rpg->mouse.x && \
rpg->perso.pos.x - 63 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 5 < rpg->mouse.y
#define slot16 sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x - 22 > rpg->mouse.x && \
rpg->perso.pos.x - 42 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 5 < rpg->mouse.y
#define pos_x rpg->perso.pos.x
#define pos_y rpg->perso.pos.y
#define colo rpg->cur
#define del4 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 25 < rpg->mouse.y
#define del3 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 26 > rpg->mouse.y && rpg->perso.pos.y - 46 < rpg->mouse.y
#define del2 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 47 > rpg->mouse.y && rpg->perso.pos.y - 67 < rpg->mouse.y
#define del1 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 68 > rpg->mouse.y && rpg->perso.pos.y - 88 < rpg->mouse.y
#define del5 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 127 > rpg->mouse.x && \
rpg->perso.pos.x - 147 < rpg->mouse.x \
&& rpg->perso.pos.y - 6 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define del6 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 106 > rpg->mouse.x && \
rpg->perso.pos.x - 126 < rpg->mouse.x \
&& rpg->perso.pos.y - 6 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define del7 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 85 > rpg->mouse.x && \
rpg->perso.pos.x - 105 < rpg->mouse.x \
&& rpg->perso.pos.y - 6 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define del8 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 64 > rpg->mouse.x && \
rpg->perso.pos.x - 84 < rpg->mouse.x \
&& rpg->perso.pos.y - 6 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define del9 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 43 > rpg->mouse.x && \
rpg->perso.pos.x - 63 < rpg->mouse.x \
&& rpg->perso.pos.y - 6 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define del10 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 22 > rpg->mouse.x && \
rpg->perso.pos.x - 42 < rpg->mouse.x \
&& rpg->perso.pos.y - 6 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define del11 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 127 > rpg->mouse.x && \
rpg->perso.pos.x - 147 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 7 < rpg->mouse.y
#define del12 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 106 > rpg->mouse.x && \
rpg->perso.pos.x - 126 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 7 < rpg->mouse.y
#define del13 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 85 > rpg->mouse.x && \
rpg->perso.pos.x - 105 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 7 < rpg->mouse.y
#define del14 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 64 > rpg->mouse.x && \
rpg->perso.pos.x - 84 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 7 < rpg->mouse.y
#define del15 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 43 > rpg->mouse.x && \
rpg->perso.pos.x - 63 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && \
rpg->perso.pos.y - 7 < rpg->mouse.y
#define del16 sfTrue == sfMouse_isButtonPressed(sfMouseRight) && \
rpg->perso.pos.x - 22 > rpg->mouse.x && \
rpg->perso.pos.x - 42 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 7 < rpg->mouse.y
#define use_pressed sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x + 72 > rpg->mouse.x && rpg->perso.pos.x + 36 \
< rpg->mouse.x && rpg->perso.pos.y - 30 > rpg->mouse.y && \
rpg->perso.pos.y - 40 < rpg->mouse.y
#define rm_pressed sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x + 98 > rpg->mouse.x && rpg->perso.pos.x + 18 \
< rpg->mouse.x && rpg->perso.pos.y - 60 > rpg->mouse.y && \
rpg->perso.pos.y - 70 < rpg->mouse.y
#define rm_all_pressed sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
rpg->perso.pos.x + 90 > rpg->mouse.x && rpg->perso.pos.x + 15 \
< rpg->mouse.x && rpg->perso.pos.y - 45 > rpg->mouse.y && \
rpg->perso.pos.y - 55 < rpg->mouse.y
#define rel1 rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 25 < rpg->mouse.y
#define rel2 rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 26 > rpg->mouse.y && rpg->perso.pos.y - 46 < rpg->mouse.y
#define rel3 rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 47 > rpg->mouse.y && rpg->perso.pos.y - 67 < rpg->mouse.y
#define rel4 rpg->perso.pos.x - 192 > rpg->mouse.x && \
rpg->perso.pos.x - 212 < rpg->mouse.x \
&& rpg->perso.pos.y - 68 > rpg->mouse.y && rpg->perso.pos.y - 88 < rpg->mouse.y
#define rel5 rpg->perso.pos.x - 127 > rpg->mouse.x && \
rpg->perso.pos.x - 147 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define rel6 rpg->perso.pos.x - 106 > rpg->mouse.x && \
rpg->perso.pos.x - 126 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define rel7 rpg->perso.pos.x - 85 > rpg->mouse.x && \
rpg->perso.pos.x - 105 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define rel8 rpg->perso.pos.x - 64 > rpg->mouse.x && \
rpg->perso.pos.x - 84 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define rel9 rpg->perso.pos.x - 43 > rpg->mouse.x && \
rpg->perso.pos.x - 63 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define rel10 rpg->perso.pos.x - 22 > rpg->mouse.x && \
rpg->perso.pos.x - 42 < rpg->mouse.x \
&& rpg->perso.pos.y - 5 > rpg->mouse.y && rpg->perso.pos.y - 26 < rpg->mouse.y
#define rel11 rpg->perso.pos.x - 127 > rpg->mouse.x && \
rpg->perso.pos.x - 147 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 8 < rpg->mouse.y
#define rel12 rpg->perso.pos.x - 106 > rpg->mouse.x && \
rpg->perso.pos.x - 126 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 8 < rpg->mouse.y
#define rel13 rpg->perso.pos.x - 85 > rpg->mouse.x && \
rpg->perso.pos.x - 105 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 8 < rpg->mouse.y
#define rel14 rpg->perso.pos.x - 64 > rpg->mouse.x && \
rpg->perso.pos.x - 84 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 8 < rpg->mouse.y
#define rel15 rpg->perso.pos.x - 43 > rpg->mouse.x && \
rpg->perso.pos.x - 63 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && \
rpg->perso.pos.y - 8 < rpg->mouse.y
#define rel16 rpg->perso.pos.x - 22 > rpg->mouse.x && \
rpg->perso.pos.x - 42 < rpg->mouse.x \
&& rpg->perso.pos.y + 13 > rpg->mouse.y && rpg->perso.pos.y - 8 < rpg->mouse.y
#define buy1 rpg->mouse.x > rpg->perso.pos.x - 102 && \
rpg->mouse.x < rpg->perso.pos.x + 10 && rpg->mouse.y > rpg->perso.pos.y + 18 \
&& rpg->mouse.y < rpg->perso.pos.y + 60 && \
sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
get(times(rpg->shop.c_shop1)) >= 0.2
#define buy2 rpg->mouse.x > rpg->perso.pos.x + 67 && \
rpg->mouse.x < rpg->perso.pos.x + 180 && rpg->mouse.y > rpg->perso.pos.y + 18 \
&& rpg->mouse.y < rpg->perso.pos.y + 60 && \
sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
get(times(rpg->shop.c_shop2)) >= 0.2
#define buy3 rpg->mouse.x > rpg->perso.pos.x - 177 && \
rpg->mouse.x < rpg->perso.pos.x - 64 && rpg->mouse.y > rpg->perso.pos.y \
+ 87 && rpg->mouse.y < rpg->perso.pos.y + 130 && \
sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
get(times(rpg->shop.c_shop3)) >= 0.2
#define buy4 rpg->mouse.x > rpg->perso.pos.x - 23 && rpg->mouse.x < \
rpg->perso.pos.x + 90 && rpg->mouse.y > rpg->perso.pos.y + 87 && rpg->mouse.y \
< rpg->perso.pos.y + 130 && sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
get(times(rpg->shop.c_shop4)) >= 0.2
#define buy5 rpg->mouse.x > rpg->perso.pos.x + 137 && rpg->mouse.x \
< rpg->perso.pos.x + 250 && rpg->mouse.y > rpg->perso.pos.y + 87 && \
rpg->mouse.y < rpg->perso.pos.y + 130 && \
sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && \
get(times(rpg->shop.c_shop5)) >= 0.2
#define over1 rpg->mouse.x > rpg->perso.pos.x - 102 && rpg->mouse.x < \
rpg->perso.pos.x + 10 && rpg->mouse.y > rpg->perso.pos.y + 18 && rpg->mouse.y \
< rpg->perso.pos.y + 60 && get(times(rpg->shop.c_shop1)) >= 0.5
#define over2 rpg->mouse.x > rpg->perso.pos.x + 67 && rpg->mouse.x < \
rpg->perso.pos.x + 180 && rpg->mouse.y > rpg->perso.pos.y + 18 && \
rpg->mouse.y < rpg->perso.pos.y + 60 && get(times(rpg->shop.c_shop2)) >= 0.5
#define over3 rpg->mouse.x > rpg->perso.pos.x - 177 && rpg->mouse.x < \
rpg->perso.pos.x - 64 && rpg->mouse.y > rpg->perso.pos.y + 87 && rpg->mouse.y \
< rpg->perso.pos.y + 130 && get(times(rpg->shop.c_shop3)) >= 0.5
#define over4 rpg->mouse.x > rpg->perso.pos.x - 23 && rpg->mouse.x < \
rpg->perso.pos.x + 90 && rpg->mouse.y > rpg->perso.pos.y + 87 && rpg->mouse.y \
< rpg->perso.pos.y + 130 && get(times(rpg->shop.c_shop4)) >= 0.5
#define over5 rpg->mouse.x > rpg->perso.pos.x + 137 && rpg->mouse.x < \
rpg->perso.pos.x + 250 && rpg->mouse.y > rpg->perso.pos.y + 87 && \
rpg->mouse.y < rpg->perso.pos.y + 130 && \
get(times(rpg->shop.c_shop5)) >= 0.5
#define MAX_LINE_LENGTH 1024
#define MyKeyinter rpg->keys.interact == 2
#define MyKeybook rpg->keys.book_int == 2
