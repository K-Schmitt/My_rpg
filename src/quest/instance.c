/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** instance
*/

#include "../../include/csfmlib.h"

int my_atoi(char const *str)
{
    int i;
    int nb = 0;
    int neg = 0;
    for (i = 0; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            neg = -1;
    for (;str[i] >= 48 && str[i] <= 57; i++) {
        nb *= 10;
        nb += (str[i] - 48);
        if (nb * neg < -2147483647 || nb > 2147483647)
            return (0);
    }
    if (neg == -1)
        nb *= neg;
    return (nb);
}

static void load_inv(RPG *rpg)
{
    for (int i = 0; i < 16; i++) {
        if (rpg->saves.file[6 + i][0] != '0') {
            rpg->inv.occup[i] = 1;
            rpg->inv.id_item[i] = my_atoi(rpg->saves.file[22 + i]);
            rpg->inv.nb_item[i] = my_atoi(rpg->saves.file[6 + i]);
            continue;
        }
        rpg->inv.occup[i] = 0;
        rpg->inv.id_item[i] = 0;
        rpg->inv.nb_item[i] = 0;
    }
    for (int i = 18; i < 24; i++)
        if (my_atoi(rpg->saves.file[i + 68]) == 0)
            rpg->pnjs.cat[i].draw = 0;
    for (int i = 24; i < 29; i++)
        if (my_atoi(rpg->saves.file[i + 71]) == 0)
            rpg->pnjs.cat[i].draw = 0;
}

static void load_stat(RPG *rpg)
{
    rpg->stat.book = my_atof(rpg->saves.file[38]);
    rpg->stat.life = my_atof(rpg->saves.file[39]);
    rpg->stat.lvl = my_atoi(rpg->saves.file[40]);
    rpg->stat.attack = my_atof(rpg->saves.file[41]);
    rpg->stat.resist = my_atof(rpg->saves.file[42]);
    rpg->stat.speed = my_atof(rpg->saves.file[43]);
    rpg->stat.coin = my_atoi(rpg->saves.file[44]);
    rpg->intro = my_atoi(rpg->saves.file[4]);
    rpg->stat.xp = my_atoi(rpg->saves.file[75]);
    rpg->stat.maxXP = my_atoi(rpg->saves.file[76]);
    rpg->stat.max_life = my_atoi(rpg->saves.file[100]);
}

void instance(RPG *rpg)
{
    load_inv(rpg);
    if (rpg->saves.file[0][0] == '0')
        return;
    load_stat(rpg);
    load_pos(rpg);
}
