/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** level
*/

#include "../../include/csfmlib.h"
#include "../../include/define.h"

void add_xp(RPG *rpg, int xp)
{
    rpg->stat.xp += xp;
    if (rpg->cheat == 0)
        start_dialogue_info(rpg, "./assets/dialogue/xp.txt", 6,
    my_strcat(my_int_to_str(xp), " xp \0"));
    if (rpg->stat.xp > rpg->stat.maxXP) {
        rpg->stat.maxXP *= 1.8;
        add_level(rpg);
    }
}

void add_level(RPG *rpg)
{
    rpg->stat.lvl++;
    rpg->stat.attack += 0.5;
    rpg->stat.resist += 0.5;
    if (rpg->stat.life <= 100)
        rpg->stat.max_life += 5;
    else
        rpg->stat.life = 100;
    rpg->stat.life = rpg->stat.max_life;
}

static void reset_lvl(RPG *rpg)
{
    if (rpg->stat.lvl > 1) {
        rpg->stat.lvl -= 1;
        rpg->stat.attack -= 0.5;
        rpg->stat.resist -= 0.5;
        rpg->stat.max_life -= 5;
    }
    if (rpg->stat.coin >= 20)
        rpg->stat.coin -= 10;
    else
        rpg->stat.coin = 10;
    rpg->stat.speed = 1;
}

void die(RPG *rpg)
{
    rpg->stat.life = rpg->stat.max_life;
    reset_lvl(rpg);
    rpg->stat.maxXP /= 1.8;
    rpg->collision =
    sfTexture_createFromFile("./assets/collission/house-a_col.png", NULL);
    rpg->image = sfTexture_copyToImage(rpg->collision);
    sfSprite_setTexture(rpg->map_b.img_sprite, rpg->house1_b, 0);
    sfSprite_setTexture(rpg->map_h.img_sprite, rpg->house1_h, 0);
    sfView_setCenter(rpg->area, vecf(144, 160));
    rpg->zone = 2;
}
