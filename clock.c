/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** clock
*/
#include "struct.h"

void start(void)
{
    st.time.mob = sfClock_create();
    st.time.wall = sfClock_create();
    st.time.hup = sfClock_create();
    st.time.cube = sfClock_create();
    st.time.sky = sfClock_create();
    st.time.sky1 = sfClock_create();
    st.time.tree = sfClock_create();
    st.time.tree1 = sfClock_create();
    st.time.grd = sfClock_create();
    st.time.grd1 = sfClock_create();
}