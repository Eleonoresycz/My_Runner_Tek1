/*
** EPITECH PROJECT, 2020
** Projets
** File description:
** my_runner
*/

#include "struct.h"

void load_pos(void)
{
    st.pos.sky.x = 1280;
    st.pos.sky.y = 0;
    st.pos.sky1.x = 0;
    st.pos.sky1.y = 0;
    st.pos.tree.x = 0;
    st.pos.tree.y = 0;
    st.pos.tree1.x = 1279;
    st.pos.tree1.y = 0;
    st.pos.ground.x = 0;
    st.pos.ground.y = 430;
    st.pos.ground1.x = 1280;
    st.pos.ground1.y = 430;
}

void load_pos2(void)
{
    st.pos.cube.x = 500;
    st.pos.cube.y = 350;
    st.pos.wall.x = 700;
    st.pos.wall.y = 200;
    st.pos.hup.x = 900;
    st.pos.hup.y = 260;
    st.pos.mob.x = 50;
    st.pos.mob.y = 380;
    st.pos.blue.x = 110;
    st.pos.blue.y = 390;
}

void set_pos(void)
{
    sfRectangleShape_setPosition(st.spt.sky, st.pos.sky);
    sfRectangleShape_setPosition(st.spt.sky1, st.pos.sky1);
    sfRectangleShape_setPosition(st.spt.tree, st.pos.tree);
    sfRectangleShape_setPosition(st.spt.tree1, st.pos.tree1);
    sfRectangleShape_setPosition(st.spt.ground, st.pos.ground);
    sfRectangleShape_setPosition(st.spt.ground1, st.pos.ground1);
    sfRectangleShape_setPosition(st.spt.cube, st.pos.cube);
    sfRectangleShape_setPosition(st.spt.wall, st.pos. wall);
    sfRectangleShape_setPosition(st.spt.hup, st.pos.hup);
    sfRectangleShape_setPosition(st.spt.mob, st.pos.mob);
    sfRectangleShape_setPosition(st.spt.blue, st.pos.blue);
}

void load_bgr(void)
{
    st.bgr.sky1.x = -0.2;
    st.bgr.sky.x = -0.2;
    st.bgr.tree.x = -0.50;
    st.bgr.tree1.x = -0.50;
    st.bgr.ground.x = -1.20;
    st.bgr.ground1.x = -1.20;
    st.bgr.cube.x = -1.20;
    st.bgr.wall.x = -1.20;
    st.bgr.hup.x = -1.20;
}

int load_music(void)
{
    st.music = sfMusic_createFromFile("src/music.ogg");
    if (!st.music)
        return (1);
    st.jump = sfMusic_createFromFile("src/music_jump.ogg");
    if (!st.jump)
        return (1);
    st.attack = sfMusic_createFromFile("src/attack.ogg");
    if (!st.attack)
        return (1);
    return (0);
}