/*
** EPITECH PROJECT, 2021
** Destroy variables
** File description:
** destroy_var
*/
#include "struct.h"

void destroy1(void)
{
    sfRenderWindow_destroy(st.don.window);
    sfTexture_destroy(st.txr.sky1);
    sfTexture_destroy(st.txr.sky);
    sfTexture_destroy(st.txr.tree);
    sfTexture_destroy(st.txr.tree1);
    sfTexture_destroy(st.txr.ground);
    sfTexture_destroy(st.txr.ground1);
    sfTexture_destroy(st.txr.mob);
    sfSprite_destroy(st.spt.sky);
    sfSprite_destroy(st.spt.sky1);
    sfSprite_destroy(st.spt.tree);
    sfSprite_destroy(st.spt.tree1);
    sfSprite_destroy(st.spt.ground);
    sfSprite_destroy(st.spt.ground1);
    sfSprite_destroy(st.spt.mob);
    sfMusic_destroy(st.music);
    sfMusic_destroy(st.jump);
}

void destroy2(void)
{
    sfMusic_destroy(st.attack);
    sfTexture_destroy(st.txr.cube);
    sfTexture_destroy(st.txr.wall);
    sfTexture_destroy(st.txr.hup);
    sfTexture_destroy(st.txr.blue);
    sfTexture_destroy(st.txr.lose);
    sfTexture_destroy(st.txr.win);
    sfSprite_destroy(st.spt.cube);
    sfSprite_destroy(st.spt.wall);
    sfSprite_destroy(st.spt.hup);
    sfSprite_destroy(st.spt.blue);
    sfSprite_destroy(st.spt.lose);
    sfSprite_destroy(st.spt.win);
    sfText_destroy(st.txt.text);
    sfText_destroy(st.txt.nb);
}

void destroy(void)
{
    destroy1();
    destroy2();
}

void draw(void)
{
    sfRenderWindow_drawSprite(st.don.window, st.spt.mob, NULL);
    sfRenderWindow_drawSprite(st.don.window, st.spt.blue, NULL);
    sfRenderWindow_drawText(st.don.window, st.txt.text, NULL);
    sfRenderWindow_drawText(st.don.window, st.txt.nb, NULL);
}

void action(void)
{
    if (st.don.event.type == sfEvtClosed
    || st.don.event.key.code == sfKeyEscape)
        sfRenderWindow_close(st.don.window);
        anim();
}