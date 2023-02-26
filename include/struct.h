/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "my.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

typedef struct textures
{
    sfTexture* sky1;
    sfTexture* sky;
    sfTexture* tree;
    sfTexture* tree1;
    sfTexture* ground;
    sfTexture* ground1;
    sfTexture* mob;
    sfTexture* cube;
    sfTexture* wall;
    sfTexture* hup;
    sfTexture* blue;
    sfTexture* lose;
    sfTexture* win;
}texture;

typedef struct sprites
{
    sfSprite* sky1;
    sfSprite* sky;
    sfSprite* tree;
    sfSprite* tree1;
    sfSprite* ground;
    sfSprite* ground1;
    sfSprite* mob;
    sfSprite* cube;
    sfSprite* wall;
    sfSprite* hup;
    sfSprite* blue;
    sfSprite* lose;
    sfSprite* win;
}sprite;

typedef struct positions
{
    sfVector2f sky1;
    sfVector2f sky;
    sfVector2f tree;
    sfVector2f tree1;
    sfVector2f ground;
    sfVector2f ground1;
    sfVector2f mob;
    sfVector2f cube;
    sfVector2f wall;
    sfVector2f hup;
    sfVector2f blue;
    sfVector2f lose;
    sfVector2f win;
}position;

typedef struct backgrounds
{
    sfVector2f sky;
    sfVector2f sky1;
    sfVector2f tree;
    sfVector2f tree1;
    sfVector2f ground;
    sfVector2f ground1;
    sfVector2f mob;
    sfVector2f cube;
    sfVector2f wall;
    sfVector2f hup;
    sfVector2f blue;
}background;

typedef struct textes
{
    sfFont *police;
    sfText *nb;
    sfText *text;
    sfVector2f score;
    sfVector2f val_nb;
}texte;

typedef struct floats
{
    float xsky;
    float xsky1;
    float xtree;
    float xtree1;
    float xground;
    float xground1;
    float ymob;
    float xmob;
    float xcube;
    float ycube;
    float xwall;
    float ywall;
    float xhup;
    float yhup;
    float xblue;
}floats_;

typedef struct clocks
{
    sfClock *mob;
    sfClock *cube;
    sfClock *wall;
    sfClock *hup;
    sfClock *sky;
    sfClock *sky1;
    sfClock *tree;
    sfClock *tree1;
    sfClock *grd;
    sfClock *grd1;
}clock;


typedef struct displays
{
    sfRenderWindow* window;
    sfEvent event;
}display;

typedef struct globales
{
    texture txr;
    sprite spt;
    position pos;
    background bgr;
    texte txt;
    display don;
    floats_ fl;
    sfMusic *music;
    sfMusic* jump;
    sfMusic* attack;
    clock time;
    int max;
    int min;
    int nb_score;
}globale;

extern globale st;

/* initialisation */
void loading_var(void);
void load_textures(void);
void load_bgr(void);
void set_pos(void);
void load_pos(void);
void load_pos2(void);
void set_textures(void);
void load_sprites(void);
int load_music(void);
void start(void);

/* Animations */
void get_pos(void);
void anim(void);
void user(void);
void jump(void);
void move_sky(void);
void move_sky1(void);
void move_tree(void);
void move_tree1(void);
void move_ground(void);
void move_ground1(void);
void move_cube(void);
void move_wall(void);
void move_hup(void);

/* Destruction */
void destroy(void);
void destroy1(void);
void destroy2(void);

/* Autres trucs useless */
int my_nbrlen(int nb);
char *convert_int(int nb);
int lose(int i);
void set_txt(void);
void first(void);
void action(void);

/* score */
void print_score(void);
int game(int i);
void end(int i);
void draw(void);

#endif /* !STRUCT_H_ */
