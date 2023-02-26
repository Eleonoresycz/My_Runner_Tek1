/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** move_bgrd
*/
#include "struct.h"

void move_sky(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.sky)) > 40) {
        if (st.fl.xsky <= -1280) {
            st.pos.sky.x = 1280;
            sfRectangleShape_setPosition(st.spt.sky, st.pos.sky);
        } else {
            st.pos.sky.x -= 1;
            sfRectangleShape_setPosition(st.spt.sky, st.pos.sky);
            sfRenderWindow_drawSprite(st.don.window, st.spt.sky, NULL);
            sfClock_restart(st.time.sky);
        }
    }
}

void move_sky1(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.sky1)) > 40) {
        if (st.fl.xsky1 <= -1280) {
            st.pos.sky1.x = 1280;
            sfRectangleShape_setPosition(st.spt.sky1, st.pos.sky1);
        } else {
            st.pos.sky1.x -= 1;
            sfRectangleShape_setPosition(st.spt.sky1, st.pos.sky1);
            sfRenderWindow_drawSprite(st.don.window, st.spt.sky1, NULL);
            sfClock_restart(st.time.sky1);
        }
    }
}

void move_tree(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.tree)) > 10) {
        if (st.fl.xtree <= -1280) {
            st.pos.tree.x = 1275;
            sfRectangleShape_setPosition(st.spt.tree, st.pos.tree);
        } else {
            st.pos.tree.x -= 1.2;
            sfRectangleShape_setPosition(st.spt.tree, st.pos.tree);
            sfRenderWindow_drawSprite(st.don.window, st.spt.tree, NULL);
            sfClock_restart(st.time.tree);
        }
    }
}

void move_tree1(void)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(st.time.tree1)) > 10) {
        if (st.fl.xtree1 <= -1280) {
            st.pos.tree1.x = 1275;
            sfRectangleShape_setPosition(st.spt.tree1, st.pos.tree1);
        } else {
            st.pos.tree1.x -= 1.2;
            sfRectangleShape_setPosition(st.spt.tree1, st.pos.tree1);
            sfRenderWindow_drawSprite(st.don.window, st.spt.tree1, NULL);
            sfClock_restart(st.time.tree1);
        }
    }
}