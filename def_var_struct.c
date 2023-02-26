/*
** EPITECH PROJECT, 2020
** Projets
** File description:
** my_runner
*/

#include "struct.h"

void loading_var(void)
{
    load_textures();
    load_sprites();
    set_textures();
    load_pos();
    load_pos2();
    set_pos();
    load_bgr();
    load_music();
}

void load_textures(void)
{
    st.txr.sky = sfTexture_createFromFile("src/sky.jpg", NULL);
    st.txr.sky1 = sfTexture_createFromFile("src/sky.jpg", NULL);
    st.txr.tree = sfTexture_createFromFile("src/tree.png", NULL);
    st.txr.tree1 = sfTexture_createFromFile("src/tree.png", NULL);
    st.txr.ground = sfTexture_createFromFile("src/ground.jpg", NULL);
    st.txr.ground1 = sfTexture_createFromFile("src/ground.jpg", NULL);
    st.txr.cube = sfTexture_createFromFile("src/cube.png", NULL);
    st.txr.wall = sfTexture_createFromFile("src/wall.png", NULL);
    st.txr.hup = sfTexture_createFromFile("src/hup.png", NULL);
    st.txr.mob = sfTexture_createFromFile("src/mob.jpg", NULL);
    st.txr.blue = sfTexture_createFromFile("src/ball.png", NULL);
    st.txr.lose = sfTexture_createFromFile("src/lose.jpg", NULL);
    st.txr.win = sfTexture_createFromFile("src/win.png", NULL);
}

void load_sprites(void)
{
    st.spt.sky = sfSprite_create();
    st.spt.sky1 = sfSprite_create();
    st.spt.tree = sfSprite_create();
    st.spt.tree1 = sfSprite_create();
    st.spt.ground = sfSprite_create();
    st.spt.ground1 = sfSprite_create();
    st.spt.cube = sfSprite_create();
    st.spt.wall = sfSprite_create();
    st.spt.hup = sfSprite_create();
    st.spt.mob = sfSprite_create();
    st.spt.blue = sfSprite_create();
    st.spt.lose = sfSprite_create();
    st.spt.win = sfSprite_create();
}

void set_textures(void)
{
    sfSprite_setTexture(st.spt.sky , st.txr.sky, sfTrue);
    sfSprite_setTexture(st.spt.sky1, st.txr.sky1, sfTrue);
    sfSprite_setTexture(st.spt.tree, st.txr.tree, sfTrue);
    sfSprite_setTexture(st.spt.tree1, st.txr.tree1, sfTrue);
    sfSprite_setTexture(st.spt.ground, st.txr.ground, sfTrue);
    sfSprite_setTexture(st.spt.ground1, st.txr.ground1, sfTrue);
    sfSprite_setTexture(st.spt.cube, st.txr.cube, sfTrue);
    sfSprite_setTexture(st.spt.wall, st.txr.wall, sfTrue);
    sfSprite_setTexture(st.spt.hup, st.txr.hup, sfTrue);
    sfSprite_setTexture(st.spt.mob, st.txr.mob, sfTrue);
    sfSprite_setTexture(st.spt.blue, st.txr.blue, sfTrue);
    sfSprite_setTexture(st.spt.lose, st.txr.lose, sfTrue);
    sfSprite_setTexture(st.spt.win, st.txr.win, sfTrue);
}

void defvar(void)
{
    st.txt.score.x = 800;
    st.txt.score.y = 20;
    st.nb_score = 0;
    st.txt.val_nb.x = 800;
    st.txt.val_nb.y = 70;
    st.max = 3000;
    st.min = 1000;
}