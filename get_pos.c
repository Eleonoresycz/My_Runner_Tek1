/*
** EPITECH PROJECT, 2020
** Projets
** File description:
** my_runner
*/

#include "struct.h"

void get_pos(void)
{
    st.fl.xsky = sfRectangleShape_getPosition(st.spt.sky).x;
    st.fl.xsky1 = sfRectangleShape_getPosition(st.spt.sky1).x;
    st.fl.xtree = sfRectangleShape_getPosition(st.spt.tree).x;
    st.fl.xtree1 = sfRectangleShape_getPosition(st.spt.tree1).x;
    st.fl.xground = sfRectangleShape_getPosition(st.spt.ground).x;
    st.fl.xground1 = sfRectangleShape_getPosition(st.spt.ground1).x;
    st.fl.ymob = sfRectangleShape_getPosition(st.spt.mob).y;
    st.fl.xmob = sfRectangleShape_getPosition(st.spt.mob).x;
    st.fl.xcube = sfRectangleShape_getPosition(st.spt.cube).x;
    st.fl.ycube = sfRectangleShape_getPosition(st.spt.cube).y;
    st.fl.xwall = sfRectangleShape_getPosition(st.spt.wall).x;
    st.fl.ywall = sfRectangleShape_getPosition(st.spt.wall).y;
    st.fl.xhup = sfRectangleShape_getPosition(st.spt.hup).x;
    st.fl.yhup = sfRectangleShape_getPosition(st.spt.hup).y;
    st.fl.xblue = sfRectangleShape_getPosition(st.spt.blue).x;
}

void move_backgroud(void)
{
    move_sky();
    move_sky1();
    move_tree();
    move_tree1();
    move_ground();
    move_ground1();
    move_cube();
    move_wall();
    move_hup();
}

int game(int i)
{
    move_backgroud();
    i = lose(i);
    draw();
    return (i);
}