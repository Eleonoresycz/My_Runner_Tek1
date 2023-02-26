/*
** EPITECH PROJECT, 2021
** Projets
** File description:
** fct
*/
#include "include/struct.h"
#include <stdlib.h>

int power(int nb, int pow)
{
    for (int i = 0; i < pow - 1; i++) {
        nb *= 10;
    }
    return (nb);
}

char *convert_int(int nb)
{
    char *value = malloc(sizeof(char) * my_nbrlen(nb) + 1);
    int pow_ten = power(1, my_nbrlen(nb));
    int i = 0;
    int nb_cpy = nb;

    for (i; i < my_nbrlen(nb_cpy); i++) {
        value[i] = (nb_cpy / pow_ten % 10) + '0';
        pow_ten /= 10;
    }
    value[i] = '\0';
    return (value);
}

void print_score(void)
{
    st.txt.police = sfFont_createFromFile("src/police.ttf");
    st.txt.text = sfText_create();
    st.txt.nb = sfText_create();
    sfText_setFont(st.txt.text, st.txt.police);
    sfText_setString(st.txt.text, "SCORE");
    sfText_setPosition(st.txt.text, st.txt.score);
}

int lose(int i)
{
    if (st.fl.xmob + 65 >= st.fl.xcube && st.fl.ymob >= st.fl.ycube)
            i = 1;
    if (st.fl.xmob + 65 >= st.fl.xhup && st.fl.ymob == 280)
            i = 1;
    if (st.fl.xmob + 65 >= st.fl.xwall)
            i = 1;
    return (i);
}

void end(int i)
{
    if (i >= 1) {
            sfRenderWindow_clear(st.don.window, sfBlack);
            sfSprite_setTexture(st.spt.lose, st.txr.lose, sfTrue);
            sfRenderWindow_drawSprite(st.don.window, st.spt.lose, NULL);
        }
        if (st.nb_score >= 6 && i != 1) {
            sfRenderWindow_clear(st.don.window, sfBlack);
            sfSprite_setTexture(st.spt.win, st.txr.win, sfTrue);
            sfRenderWindow_drawSprite(st.don.window, st.spt.win, NULL);
            st.pos.win.x = 100;
            st.pos.win.y = 200;
            sfRectangleShape_setPosition(st.spt.win, st.pos.win);
        }
}