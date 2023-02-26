/*
** EPITECH PROJECT, 2020
** Projets
** File description:
** my_runner
*/
#include "include/struct.h"

void jump(void)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
        st.pos.mob.y = 280;
        sfRectangleShape_setPosition(st.spt.mob, st.pos.mob);
        st.pos.blue.y = 290;
        sfRectangleShape_setPosition(st.spt.blue, st.pos.blue);
    }
    if (st.don.event.key.type == sfEvtKeyReleased
    && st.don.event.key.code == sfKeySpace) {
        sfMusic_play(st.jump);
        st.pos.mob.y = 380;
        sfRectangleShape_setPosition(st.spt.mob, st.pos.mob);
        st.pos.blue.y = 390;
        sfRectangleShape_setPosition(st.spt.blue, st.pos.blue);
    }
}

void user(void)
{
    if (sfKeyboard_isKeyPressed(sfKeyC) == sfTrue) {
        sfMusic_play(st.attack);
        st.pos.blue.x = 200;
        sfRectangleShape_setPosition(st.spt.blue, st.pos.blue);
    }
    if (st.fl.xblue + 8 >= st.fl.xwall) {
        st.pos.wall.x = (rand() %  (st.max - st.min) + 1) + st.min;
        sfRectangleShape_setPosition(st.spt.wall, st.pos.wall);
        st.nb_score++;
    }
    if (st.fl.xblue == 200) {
        st.pos.blue.x = 110;
        sfRectangleShape_setPosition(st.spt.blue, st.pos.blue);
    }
}

void anim(void)
{
    jump();
    user();
}

void first(void)
{
    start();
    loading_var();
    sfMusic_play(st.music);
    sfMusic_setLoop(st.music, sfTrue);
    print_score();
}

void set_txt(void)
{
    sfText_setFont(st.txt.nb, st.txt.police);
    sfText_setString(st.txt.nb, convert_int(st.nb_score));
    sfText_setPosition(st.txt.nb, st.txt.val_nb);
}