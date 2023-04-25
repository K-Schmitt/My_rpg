/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** sound
*/

#include "../../include/csfmlib.h"

void init_music(sfMusic **song, char *path, int volume)
{
    (*song) = sfMusic_createFromFile(path);
    sfMusic_setLoop((*song), sfTrue);
    sfMusic_setVolume((*song), volume);
}

void init_all_sound(RPG *rpg)
{
    init_music(&rpg->music.main, "./assets/song/main.ogg", 60);
    init_music(&rpg->music.grotte, "./assets/song/ruins-theme.ogg", 60);
    init_music(&rpg->music.intro, "./assets/song/intro.ogg", 60);
    init_music(&rpg->music.shop, "./assets/song/shop.ogg", 60);
    init_music(&rpg->music.desert, "./assets/song/desert.ogg", 60);
    init_music(&rpg->music.bar, "./assets/song/bar.ogg", 60);
    init_music(&rpg->music.neige, "./assets/song/snow.ogg", 60);
    init_music(&rpg->music.fight, "./assets/song/fight.ogg", 60);
    rpg->music.meow = sfMusic_createFromFile("./assets/song/meow.ogg");
    sfMusic_setVolume(rpg->music.meow, 80);
}

void free_song(RPG *rpg)
{
    sfMusic_destroy(rpg->music.grotte);
    sfMusic_destroy(rpg->music.intro);
    sfMusic_destroy(rpg->music.main);
    sfMusic_destroy(rpg->music.shop);
    sfMusic_destroy(rpg->music.desert);
    sfMusic_destroy(rpg->music.bar);
    sfMusic_destroy(rpg->music.meow);
    sfMusic_destroy(rpg->music.fight);
    sfMusic_destroy(rpg->music.neige);
}
