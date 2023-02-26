/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** move_bgrd2
*/
#include "struct.h"

void move_ground(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.grd)) > 10) {
        if (st.fl.xground <= -1280) {
            st.pos.ground.x = 1275;
            sfRectangleShape_setPosition(st.spt.ground, st.pos.ground);
        } else {
            st.pos.ground.x -= 1;
            sfRectangleShape_setPosition(st.spt.ground, st.pos.ground);
            sfRenderWindow_drawSprite(st.don.window, st.spt.ground, NULL);
            sfClock_restart(st.time.grd);
        }
    }
}

void move_ground1(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.grd1)) > 10) {
        if (st.fl.xground1 <= -1280) {
            st.pos.ground1.x = 1275;
            sfRectangleShape_setPosition(st.spt.ground1, st.pos.ground1);
        } else {
            st.pos.ground1.x -= 1;
            sfRectangleShape_setPosition(st.spt.ground1, st.pos.ground1);
            sfRenderWindow_drawSprite(st.don.window, st.spt.ground1, NULL);
            sfClock_restart(st.time.grd1);
        }
    }
}

void move_cube(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.cube)) > 10) {
        if (st.fl.xcube <= -80) {
            st.pos.cube.x = (rand() %  (st.max - st.min) + 1) + st.min;
            sfRectangleShape_setPosition(st.spt.cube, st.pos.cube);
            st.nb_score++;
        } else {
            st.pos.cube.x -= 1;
            sfRectangleShape_setPosition(st.spt.cube, st.pos.cube);
            sfRenderWindow_drawSprite(st.don.window, st.spt.cube, NULL);
            sfClock_restart(st.time.cube);
        }
    }
}

void move_wall(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.wall)) > 10) {
        if (st.fl.xwall <= -100) {
            st.pos.wall.x = (rand() %  (st.max - st.min) + 1) + st.min;
            sfRectangleShape_setPosition(st.spt.wall, st.pos.wall);
            st.nb_score++;
        } else {
            st.pos.wall.x -= 1;
            sfRectangleShape_setPosition(st.spt.wall, st.pos.wall);
            sfRenderWindow_drawSprite(st.don.window, st.spt.wall, NULL);
            sfClock_restart(st.time.wall);
        }
    }
}

void move_hup(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.hup)) > 10) {
        if (st.fl.xhup <= -100) {
            st.pos.hup.x = (rand() %  (st.max - st.min) + 1) + st.min;
            sfRectangleShape_setPosition(st.spt.hup, st.pos.hup);
            st.nb_score++;
        } else {
            st.pos.hup.x -= 1;
            sfRectangleShape_setPosition(st.spt.hup, st.pos.hup);
            sfRenderWindow_drawSprite(st.don.window, st.spt.hup, NULL);
            sfClock_restart(st.time.hup);
        }
    }
}