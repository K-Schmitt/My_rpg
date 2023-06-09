/*
** EPITECH PROJECT, 2022
** lib csfml
** File description:
** lib csfml
*/

#pragma once

#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <SFML/Window/Keyboard.h>
#include "define.h"
#include <stdio.h>

typedef struct stocksprite_t {
    sfTexture *img_texture;
    sfSprite *img_sprite;
    sfVector2u size;
    sfVector2f scale;
    sfVector2f scale_r;
    sfVector2f pos;
    sfIntRect z;
    sfClock *Clock;
    float frame;
    float r;
    int click;
    int draw;
    int sizeX;
    int state;
} stocksprite;

typedef struct stockenemi_t {
    sfTexture *img_texture;
    sfSprite *img_sprite;
    sfVector2f scale;
    sfVector2f scale_r;
    sfVector2f pos;
    sfIntRect z;
    sfClock *Clock;
    float frame;
    float r;
    int click;
    int draw;
    float life;
    float max_life;
    float degat;
    int lvl;
    float def;
    int xp;
    int state;
    int sizeX;

} stockennemie;

typedef struct colli_t {
    sfFloatRect rect;
    struct colli_t *next;
} colli;

typedef struct stocktext_t {
    char *name;
    sfFont *font;
    sfText *text;
    struct stocktext_t *next;
} stocktext;

typedef struct stockrect_t {
    int radius;
    sfVector2f pos;
    sfRectangleShape *name;
    struct stockrect_t *next;
} stockrect;

typedef struct stockfps_t {
    sfClock *Clockfp;
    float fp;
    float fps;
} stockfps;

typedef struct zone_t {
    sfFloatRect size;
    stockrect fond;
    float xsize;
} zone;

typedef struct data_t {
    float life;
    float max_life;
    float speed;
    float resist;
    float attack;
    int book;
    int lvl;
    float b_resist;
    float b_attack;
    int nb_speed;
    int nb_resist;
    int nb_attack;
    int coin;
    int xp;
    int maxXP;
    sfKeyCode up_k;
    sfKeyCode down_k;
    sfKeyCode right_k;
    sfKeyCode left_k;
    sfKeyCode inv_k;
    sfKeyCode int_k;
    sfKeyCode books_k;
    sfClock *clock_speed;
    sfClock *clock_resist;
    sfClock *clock_attack;
} data;

typedef struct item_t {
    stocksprite stick;
    stocksprite sword;
    stocksprite pistol;
    stocksprite ammo;
    stocksprite spell;
    stocksprite whisky;
    stocksprite cactus;
    stocksprite mushroom;
    stocksprite strenght;
    stocksprite chat_inv;
} item;

typedef struct particle_t {
    sfCircleShape *snow;
    sfVector2f pos_snow;
    sfRenderTexture *rt_part;
    stocksprite sprite_part;
    sfVertexArray* footprint;
} particle;

typedef struct shop_t {
    stocksprite shop_bg;
    stocksprite ammo_s;
    stocksprite whisky_s;
    stocksprite cactus_s;
    stocksprite mushroom_s;
    stocksprite strenght_s;
    stocktext coin_nb_s;
    stocksprite coin_s;
    stocktext shop_des;
    stocktext price_1;
    stocktext price_2;
    stocktext price_3;
    stocktext price_4;
    stocktext price_5;
    stocksprite banner[5];
    sfClock *c_shop1;
    sfClock *c_shop2;
    sfClock *c_shop3;
    sfClock *c_shop4;
    sfClock *c_shop5;
    bool is_open;
} shops;

typedef struct book_t {
    int page;
    stocksprite book_s;
    stocksprite arrow_l;
    stocksprite arrow_r;
    stocksprite bg_title;
    stocksprite quest1;
    stocksprite quest2;
    stocktext page1;
    stocktext page2;
    stocktext page3;
    stocktext page4;
    stocktext page5;
    stocktext page6;
    stocktext title;
    stocktext t_quest;
    stocktext t_how;
    char *page_1;
    char *page_2;
    char *page_3;
    char *page_4;
    char *page_5;
    char *page_6;
    sfClock *c_book;
    sfClock *c_page;
    bool b_is_press;
} books;

typedef struct inventory {
    stocksprite invent_bg;
    stocksprite slot_ne;
    stocksprite slot_e;
    stocksprite slot_a;
    stocksprite coin;
    stocksprite perso;
    stocktext invent_text;
    bool is_press;
    sfClock *clock;
    sfClock *clock_rm;
    sfClock *clock_rmall;
    sfClock *clock_use;
    float select_x;
    float select_y;
    int select;
    int options;
    int occup[16];
    int id_item[16];
    int nb_item[16];
    int in_case[16];
    int id_active;
    int sel_a;
    int slot;
    sfVector2f pos_item[16];
    stocktext title_des;
    stocktext desciption;
    stocktext title_opt;
    stocktext rm;
    stocktext rm_all;
    stocktext use;
    stocktext lvl;
    stocktext life;
    stocktext attack;
    stocktext resist;
    stocktext speed;
    stocktext lvl_nb;
    stocktext life_nb;
    stocktext attack_nb;
    stocktext resist_nb;
    stocktext speed_nb;
    stocktext coin_nb;
    stockrect opt_rect;
    stocksprite desc_bg;
    stocktext nb_i[16];
} invent;

typedef struct pnj_t {
    stocksprite archi;
    stocksprite lucas;
    stockennemie *barman;
    stocksprite gaetan;
    stocksprite *cat;
    stocksprite folle;
    stocksprite cowboy;
} pnj;

typedef struct anime_t {
    stockennemie brouillard;
    sfClock *anime_clock;
    float time;
    char *nstr;
    int end;
} anime;

typedef struct quete_t {
    int quete_chat;
    int chat_actif;
    int lucas;
    stocksprite *pique;
    stocksprite sword;
    int b1_p1;
    int b2_p1;
    int b3_p1;
    int b1_p2;
    int b2_p2;
    int b3_p2;
    int b1_p3;
    int b2_p3;
    int b3_p3;
    int boss1;
    int boss2;
    int boss3;
    int archi;
    char *name;
    int cowboy;
    int sortie_epee;
} quetes;

typedef struct save_t {
    char **file;
    int option;
    char *path;
    char *new_s;
    char *x_s;
    char *y_s;
    char *zone_s;
    char *intro_s;
    char *end_s;
    char *book_s;
    char *life_s;
    char *lvl_s;
    char *attack_s;
    char *resist_s;
    char *speed_s;
    char *coin_s;
    char *archi_s;
    char *folle_s;
    char *name_s;
} save;

typedef struct key_t {
    int interact;
    int book_int;
} key;

typedef struct dialogue_t {
    stocksprite dialogue;
    stocksprite dialogue_oui;
    stocksprite dialogue_non;
    stocksprite tete;
    stocktext dialog_text;
    stocktext dialog_text1;
    stocktext dialog_text2;
    stocktext name;
    sfClock *dial_clock;
    sfMusic *dial_song;
    char *bob;
    char *str;
    int nb;
} dialogue;

typedef struct music_t {
    int music_s;
    sfMusic *main;
    sfMusic *neige;
    sfMusic *grotte;
    sfMusic *intro;
    sfMusic *bar;
    sfMusic *shop;
    sfMusic *fight;
    sfMusic *desert;
    sfMusic *meow;
    sfSoundBuffer *meowbuf;
} mus;

typedef struct anim_fight_s {
    sfCircleShape *circle;
    sfClock *clock;
    float duration;
    float radius;
    float time;
} anim_fight_t;

typedef struct lifebar_s {
    sfRectangleShape *life_foreground;
    sfRectangleShape *life_background;
    sfVector2f size;
} lifebar_t;

typedef enum player {
    PLAYER,
    ENNEMY,
} player_t;

typedef struct fight_s {
    anim_fight_t *anim;
    lifebar_t *lifebar;
    sfSprite *perso;
    sfTexture *texture_perso;
    sfText *life;
    sfText *life_ennemy;
    stocksprite equip_bar;
    stocksprite equip_unusable;
    stocksprite equip_unusable_block;
    stocksprite select_bar;
    stocksprite  background;
    stocksprite convex;
    int select;
    int slot[4];
    int slot_id;
    sfBool is_pressed;
    stockennemie *ennemy;
    sfFloatRect mouse_hb;
    sfBool my_round;
    int convex_nb;
    player_t state_player;
    sfClock *clock;
    lifebar_t *lifebar1;
    lifebar_t *lifebar2;
} fight_t;

typedef struct ennemis_t {
    stockennemie *spider;
    stockennemie *squel;
    stockennemie *mage;
    stockennemie *dsquel;
    stockennemie *snowman;
    stockennemie *boss;
} ennemis;

typedef struct RPG_s {
    int cheat;
    stockfps gfps;
    stocksprite map_b;
    stocksprite map_h;
    stocksprite perso;
    stocksprite cursor;
    colli *col;
    stockrect hitboxa;
    stockrect hitboxr;
    stockrect hitboxp;
    data stat;
    save saves;
    pnj pnjs;
    quetes quete;
    key keys;
    anime animes;
    dialogue dial;
    mus music;
    invent inv;
    item obj;
    ennemis adv;
    shops shop;
    books book;
    particle part[1000];
    sfVector2f mouse;
    sfRenderWindow *window;
    sfView *area;
    sfView *mini_map;
    sfFloatRect size;
    sfEvent event;
    sfTexture *collision;
    sfTexture *map_princ_b;
    sfTexture *map_princ_h;
    sfTexture *cave1_b;
    sfTexture *cave1_h;
    sfTexture *cave2_b;
    sfTexture *cave2_h;
    sfTexture *bar_b;
    sfTexture *bar_h;
    sfTexture *house1_b;
    sfTexture *house1_h;
    sfTexture *house2_b;
    sfTexture *house2_h;
    sfTexture *house3_b;
    sfTexture *house3_h;
    sfTexture *bar2_b;
    sfTexture *bar2_h;
    sfTexture *bar3_b;
    sfTexture *bar3_h;
    sfTexture *volcan_b;
    sfTexture *volcan_h;
    sfImage *image;
    sfColor cur;
    sfImage *f_image;
    sfColor f_cur;
    sfSprite *test_col;
    sfSprite *start;
    sfSprite *play_start_one;
    sfSprite *play_two;
    sfSprite *play_three;
    sfFloatRect rect_play_start_one;
    sfFloatRect rect_play_two;
    sfFloatRect rect_play_three;
    sfSprite *setting;
    sfSprite *quit;
    sfSprite *start_selected;
    sfSprite *setting_selected;
    sfSprite *quit_selected;
    sfSprite *background;
    sfTexture *texture;
    sfFloatRect rect_start;
    sfFloatRect rect_setting;
    sfFloatRect rect_quit;
    sfSprite *save_one;
    sfSprite *save_two;
    sfSprite *save_three;
    sfVector2f mouseresize;
    sfVector2i mousebis;
    sfText *names;
    sfText *lifes;
    sfText *levels;
    sfText *text;
    sfText *name;
    sfText *life;
    sfText *level;
    sfText *names_two;
    sfText *lifes_two;
    sfText *levels_two;
    sfText *text_two;
    sfText *name_two;
    sfText *life_two;
    sfText *level_two;
    sfText *names_three;
    sfText *lifes_three;
    sfRectangleShape *zone_text;
    sfText *levels_three;
    sfText *text_three;
    sfText *name_three;
    sfText *life_three;
    sfText *level_three;
    sfText *resolution;
    sfRectangleShape *resolution_rec;
    sfFloatRect rect_resolution;
    sfRectangleShape *rect_1920x1080;
    sfText *text_1920x1080;
    sfRectangleShape *rect_1280x720;
    sfText *text_1280x720;
    sfSprite *back;
    sfText *tuch_txt;
    int i;
    int y;
    bool is_open;
    bool tuch;
    int zone;
    int intro;
    char *buffer;
    sfSprite *menuech;
    sfSprite *setting_ech;
    sfSprite *start_ech;
    sfSprite *quit_ech;
    sfVector2f pos_ech;
    sfVector2f pos_quit_ech;
    sfVector2f pos_setting_ech;
    sfVector2f pos_start_ech;
    sfText *booked;
    sfText *invent;
    sfText *up;
    sfText *down;
    sfText *left;
    sfText *right;
    sfText *interact;
    sfRectangleShape *rect_booked;
    sfRectangleShape *rect_invent;
    sfRectangleShape *rect_up;
    sfRectangleShape *rect_down;
    sfRectangleShape *rect_left;
    sfRectangleShape *rect_right;
    sfRectangleShape *rect_interact;
    sfText *tuch_down;
    sfText *tuch_right;
    sfText *tuch_left;
    sfText *tuch_int;
    sfText *tuch_inv;
    sfText *tuch_books;
    bool ech;
    bool ech_quit;
    bool ech_setting;
    sfSprite *save_one_del;
    sfSprite *save_two_del;
    sfSprite *save_three_de;
    sfFont *font;
    fight_t *fight;
    sfSprite *plus;
    sfSprite *moins;
    sfRectangleShape *rect_plus;
    sfRectangleShape *rect_moins;
    int sound_mod;
    char buff_one;
    char buff_two;
    char buff_three;
    char buff_four;
} RPG;

typedef struct itemfunc_s {
    sfSprite *sprite;
    int convex;
    sfVector2i x_y;
    sfVector2f scale;
    void (*func)(RPG *rpg);
} itemfunc_t;

void draw_sound(RPG *rpg);
void generate_sound(RPG *rpg);
void destroy_all(RPG *rpg);
sfSprite *save_one_del(int x, int y);
sfText *tuch_left_text(void);
void suite(RPG *rpg);
sfText *tuch_inv_text(void);
sfText *tuch_book_text(void);
sfText *tuch_int_text(void);
void tuch_left(RPG *rpg);
void tuch_inventory(RPG *rpg);
void tuch_book(RPG *rpg);
void tuch_intera(RPG *rpg);
void tuch_right(RPG *rpg);
void tuch_down(RPG *rpg);
sfText *tuch_right_text(void);
sfText *tuch_down_text(void);
sfRectangleShape *create_livre(void);
sfRectangleShape *create_inventaire(void);
sfRectangleShape *create_up(void);
sfRectangleShape *create_down(void);
sfRectangleShape *create_left(void);
sfRectangleShape *create_right(void);
sfRectangleShape *create_invent(void);
void draw_text_and_square(RPG *rpg);
sfText *livre(void);
sfText *inventaire(void);
sfText *haut(void);
sfText *bas(void);
sfText *gauche(void);
sfText *droite(void);
sfText *interaction(void);
int menu(RPG *rpg);
void create_change(RPG *rpg);
int detec(RPG *menu);
void echpmenu(RPG *menu);
void draw_menu(RPG *menu);
void draw_menu_selected(RPG *menu);
void save_one_text(RPG *menu);
void save_two_text(RPG *menu);
void save_three_text(RPG *menu);
sfSprite *create_start_ech(RPG *menu);
sfSprite *create_setting_ech(RPG *menu);
sfSprite *create_quit_ech(RPG *menu);
sfRectangleShape *zone_txt(void);
sfSprite *menuech(RPG *menu);
void tuch_up(RPG *rpg);
void appel(RPG *rpg);
sfText *tuch_text(void);
sfSprite *create_supp_button(void);
sfSprite *create_play_button(void);
sfSprite *create_play_button_two(void);
sfSprite *create_play_button_three(void);
sfSprite *create_start_button(void);
sfSprite *create_setting_button(void);
sfSprite *create_quit_button(void);
sfSprite *create_start_button_selected(void);
sfSprite *create_quit_button_selected(void);
sfSprite *create_setting_button_selected(void);
sfSprite *create_save_one(void);
sfSprite *create_save_two(void);
sfSprite *create_save_three(void);
sfSprite *background(void);
sfText *create_resolution_text(void);
void setting(RPG *rpg);
sfRectangleShape *create_resolution_rect(void);
sfRectangleShape *create_1920x1080_rect(void);
sfText *create_1920x1080_text(void);
sfRectangleShape *create_1280x720_rect(void);
sfText *create_1280x720_text(void);
void resolution(RPG *menu);
sfText *create_save_one_text(void);
sfText *create_save_one_life(void);
sfText *create_save_one_name(void);
sfText *create_save_one_level(void);
sfText *create_save_two_text(void);
sfText *create_save_two_life(void);
sfText *create_save_two_name(void);
sfText *create_save_two_level(void);
sfText *create_save_three_text(void);
sfText *create_save_three_life(void);
sfText *create_save_three_name(void);
sfText *create_save_three_level(void);
sfText *create_name(int x, int y);
sfText *create_life(int x, int y);
sfText *create_level(int x, int y);
sfIntRect recti(int l, int t, int w, int h);
sfFloatRect rectf(int l, int t, int w, int h);
sfVector2f vecf(float x, float y);
sfVector2i veci(float x, float y);
sfVector2u vecu(unsigned int x, unsigned int y);
void detect_fps(RPG *rpg);
void sizemin(sfRenderWindow *window);
void wlose_window(RPG *rpg);
void actuwindow(RPG *rpg);
void init_window(RPG *rpg);
void actu_sprite(RPG *rpg, stocksprite bob);
sfVector2f nscale(RPG *rpg, float x, float y);
sfSprite *create_perso(stocksprite *bob, char *path, sfVector2f z,
sfVector2i t);
sfSprite *create_sprite(stocksprite *bob, char *path, sfVector2f scale);
void animate(stocksprite *bob, float frame, int left);
sfVector2f centre(RPG *rpg);
int sizmap(char *map);
void makemap(char *pmap, RPG *rpg);
void game(RPG *rpg);
int create_text(stocktext *x, char *str, int charasize, sfVector2f pos);
int create_text2(stocktext *x, char *str, float charasize, sfVector2f pos);
void create_rect(stockrect *x, sfVector2f size, sfVector2f pos, int opt);
void choose(RPG *menu);
void setting(RPG *menu);
int detec(RPG *menu);
void create_txt(RPG *menu);
void txt(RPG *menu);
void create(RPG *menu);
void actu_all(RPG *rpg);
void init_all(RPG *rpg);
void draw_all(RPG *rpg);
void free_all(RPG *rpg);
void move_player(RPG *rpg);
int recup_collision(RPG *rpg);
int collision(RPG *rpg, int direction);
void display_inventory(RPG *rpg);
void case_click_top(RPG *rpg);
void case_click_bottom(RPG *rpg);
void display_select(RPG *rpg);
void init_item(RPG *rpg);
void case_click_active(RPG *rpg);
void description_item(RPG *rpg, int item);
sfVector2f enter_pos(RPG *rpg, int i);
int ups(RPG *rpg);
int down(RPG *rpg);
int left(RPG *rpg);
void instance(RPG *rpg);
double my_atof(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int my_intlenght(int value);
char *my_revstr(char *src);
char *my_int_to_str(int nb);
int make_save(RPG *rpg);
void load_pos(RPG *rpg);
void draw_item(RPG *rpg, int i);
void delete_item(RPG *rpg);
void delete_item_6(RPG *rpg);
void print_options(RPG *rpg, int item);
void use_whisky(RPG *rpg);
void update_effect(RPG *rpg);
void use_cactus(RPG *rpg);
void use_mushroom(RPG *rpg);
void use_potion(RPG *rpg);
void move_item(RPG *rpg);
void is_released(RPG *rpg, int i);
void add_item(RPG *rpg);
void init_inventory_3(RPG *rpg);
void draw_stat(RPG *rpg);
void actu_inventory(RPG *rpg);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char *str);
void start_dialogue(RPG *rpg, char *path, int nb);
char *recup_info(int nb, char *path);
void init_map(RPG *rpg);
int teleport_house1(RPG *rpg);
int teleport_house1_map(RPG *rpg);
int teleport_house2(RPG *rpg);
int teleport_house2_map(RPG *rpg);
int col_up(RPG *rpg);
int col_down(RPG *rpg);
int teleport_map_col1(RPG *rpg);
int col_right(RPG *rpg);
int col_left(RPG *rpg);
int teleport_map2(RPG *rpg);
int teleport_bar1(RPG *rpg);
int teleport_bar_col1(RPG *rpg);
int teleport_map1(RPG *rpg);
int teleport_map2_col1(RPG *rpg);
int teleport_map2_col2(RPG *rpg);
int teleport_col2_map2_1(RPG *rpg);
int teleport_col2_map2_2(RPG *rpg);
int teleport_map2_col2_2(RPG *rpg);
void save_game(RPG *rpg);
char *float_to_str(float nb);
int float_size(float nb);
char **my_str_to_word_array(char* str);
void init_pnj(RPG *rpg);
void move_pnj(RPG *rpg);
int my_strcmp(const char *compar1, const char *compar2);
void draw_pnj(RPG *rpg);
void animation(RPG *rpg);
void start_dialogue_anime(RPG *rpg);
void init_dialogue(RPG *rpg, char *path, int nb);
void actu_anime2(RPG *rpg, float distance);
void move_archi(RPG *rpg, sfVector2f time, sfVector2f distance, int sen);
void tpp(RPG *rpg, char *path, sfTexture *map, sfTexture *map2);
int my_atoi(char const *str);
void interact_zone1(RPG *rpg);
void interact_instance(RPG *rpg);
void interact_zone2(RPG *rpg);
void interact_zone3(RPG *rpg);
void interact_zone4(RPG *rpg);
void interact_zone5(RPG *rpg);
void shop(RPG *rpg);
void init_music(sfMusic **song, char *path, int volume);
void init_all_sound(RPG *rpg);
void init_chat(RPG *rpg);
void init_chat2(RPG *rpg);
void draw_cat(RPG *rpg);
void actu_cat(RPG *rpg);
void push_in_inventory(RPG *rpg, int id);
int dialogue_next(RPG *rpg, char *path);
void start_dialogue_opt(RPG *rpg, char *path, int nb, int *quete);
void init_shop(RPG *rpg);
void set_particle(RPG *rpg);
void display_snow(RPG *rpg);
char *my_strcat(char* dest, char* const src);
void add_level(RPG *rpg);
void die(RPG *rpg);
void is_over(RPG *rpg);
void init_pique(RPG *rpg);
void draw_pique(RPG *rpg);
int col_piq(RPG *rpg, int sens);
int col_cat(RPG *rpg, int sens);
void actu_pique(RPG *rpg);
void actu_button(RPG *rpg);
void buy_click(RPG *rpg);
void push_in_inventory(RPG *rpg, int id);
void init_quest(RPG *rpg);
void interact_zone6(RPG *rpg);
void new_save(RPG *rpg);
void create_text4(stocktext *x, char *str, float charasize, sfVector2f pos);
void book(RPG *rpg);
void init_book(RPG *rpg);
char *make_book(char *path);
void add_quest(RPG *rpg);
void save_5(RPG *rpg, FILE *file);
void init_spider(RPG *rpg);
void draw_spider(RPG *rpg);
void animate_entity(stockennemie *bob, float frame, int left);
void actu_spider(RPG *rpg);
void move(stockennemie *bob, int sens, sfVector2f distance,
sfVector2f frameleft);
void set_patern(stockennemie *bob, float distance, sfVector2f mouvement,
sfClock *clock);
void move_entity(stockennemie *bob, float distance);
void init_squel(RPG *rpg);
void draw_squel(RPG *rpg);
void actu_squel(RPG *rpg);
sfSprite *create_entity(stockennemie *bob, char *path, sfVector2f z,
sfVector2i t);
void move_entity2(stockennemie *bob, float distance);
void init_mage(RPG *rpg);
void draw_mage(RPG *rpg);
void actu_mage(RPG *rpg);
int col_pnj(RPG *rpg, stocksprite *bob, int sens);
void add_xp(RPG *rpg, int xp);
void start_dialogue_info(RPG *rpg, char *path, int nb, char *opt);
char *get_name_item(int item);
void create_text5(stocktext *x, char *str, float charasize, sfVector2f pos);
void add_name(RPG *rpg);
void init_touche(RPG *rpg);
void dialogue_pnj(RPG *rpg);
void free_song(RPG *rpg);
void init_quete(RPG *rpg);
void actu_quete(RPG *rpg);
void actu_key(RPG *rpg);
void init_key(RPG *rpg);
void start_dialogue_action(RPG *rpg, char *path, int nb, int (*fonc)(RPG *));
void init_boss(RPG *rpg);
void actu_boss(RPG *rpg);
void draw_boss(RPG *rpg);
void init_all_spider(RPG *rpg);
void init_all_squel(RPG *rpg);
void init_dsquel(RPG *rpg);
void actu_dsquel(RPG *rpg);
void draw_dsquel(RPG *rpg);
int init_dialogue_opt(RPG *rpg);
void init_dialogue_opt2(RPG *rpg);
void init_snowman(RPG *rpg);
void actu_snowman(RPG *rpg);
void draw_snowman(RPG *rpg);
void init_sword(RPG *rpg);
void actu_sword(RPG *rpg);
void draw_sword(RPG *rpg);
void add_controle(RPG *rpg);
char *get_str(sfKeyCode key);
int teleport_map2_house3(RPG *rpg);
int teleport_house3_map2(RPG *rpg);
int teleport_hub4(RPG *rpg);
void load_map_4(RPG *rpg);
void display_footprint(RPG *rpg);
int teleport_map3_map2(RPG *rpg);
int teleport_map2_map3(RPG *rpg);
int teleport_map3_bar3(RPG *rpg);
int teleport_bar3_map3(RPG *rpg);
int teleport_bar3_map4(RPG *rpg);
int teleport_map4_bar3(RPG *rpg);
void set_paternh(stockennemie *bob, float distance, sfVector2f mouvement);
void set_paternv(stockennemie *bob, float distance, sfVector2f mouvement,
sfClock *clock);
int col_ennemie(RPG *rpg, stockennemie *bob, int sens);
void init_barman(RPG *rpg);
void actu_barman(RPG *rpg);
void draw_barman(RPG *rpg);
int teleport_map4_volcan(RPG *rpg);
int teleport_volcan_map4(RPG *rpg);
void interact_zone11(RPG *rpg);
void init_fight(RPG *rpg);
int fight(RPG *rpg, stockennemie *ennemy);
int check_mouse(RPG *rpg, int x, int y);
itemfunc_t *get_items(RPG *rpg);
float calc_damage(float damage, int pourcent);
void use_stick(RPG *rpg);
void use_sword(RPG *rpg);
void use_pistol(RPG *rpg);
void use_spell(RPG *rpg);
void use_hand(RPG *rpg);
void transition_cercle(RPG *rpg, float duration);
void draw_select(RPG *rpg);
void draw_fight(RPG *rpg);
void update_lifebar(RPG *rpg, float currentLife, lifebar_t *lifebar,\
float maxLife);
sfColor interpolate_color(sfColor color_start, sfColor color_end,\
float percent);
lifebar_t *set_health_bar(RPG *rpg, sfVector2f size, sfVector2i pos);
void draw_ennemy(RPG *rpg);
void draw_inventoryf(RPG *rpg);
void set_fight(RPG *rpg);
void init_ennemy(RPG *rpg, stockennemie *ennemy);
void player_action(RPG *rpg);
void ennemy_action(RPG *rpg);
void choice_player_start(RPG *rpg);
void check_round(RPG *rpg);
void update_life(RPG *rpg);
void on_click_zone(RPG *rpg, sfSprite *sprite);
void interact_zone10(RPG *rpg);
void display_item_number(RPG *rpg, int i);
void change_music(RPG *rpg);
void cut_music(RPG *rpg);
void cheat_mod_tp4(RPG *rpg);
void init_dsquel2(RPG *rpg);
void action_dsquel(RPG *rpg, stockennemie bob, int i);
void reset_all(RPG *rpg);
int right(RPG *rpg);
void init_pos_pique2(RPG *rpg);
int check_in_inv(RPG *rpg, int id);
void remove_in_inv(RPG *rpg, int id);
void use_whisky2(RPG *rpg);
void use_cactus2(RPG *rpg);
void use_mushroom2(RPG *rpg);
void use_potion2(RPG *rpg);
