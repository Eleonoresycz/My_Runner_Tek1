/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_put_hexa
*/
#include "../../include/my.h"
#include <stdlib.h>

int my_put_majhexa(int nb)
{
    char *str = malloc(sizeof(char)* 10);
    int i = 0;
    int tmp = 0;

    for (i; nb != 0; i++) {
        tmp = nb %16;
        if (tmp > 10) {
            tmp += 55;
            str[i] = tmp;
        } else {
            tmp += 48;
            str[i] = tmp;
        }
        nb /= 16;
    }
    my_putstr(my_revstr(str));
}

int my_put_hexa(int nb)
{
    char *str = malloc(sizeof(char)* 10);
    int i = 0;
    int tmp = 0;

    for (i; nb != 0; i++) {
        tmp = nb %16;
        if (tmp > 10) {
            tmp += 87;
            str[i] = tmp;
        } else {
            tmp += 48;
            str[i] = tmp;
        }
        nb /= 16;
    }
    my_putstr(my_revstr(str));
}

int my_put__majhexa(int nb)
{
    char *str = malloc(sizeof(char)* 10);
    int i = 0;
    int tmp = 0;

    if (nb == 0)
        my_put_nbr(nb);
    for (i; nb != 0; i++) {
        tmp = nb %16;
        if (tmp > 10) {
            tmp += 55;
            str[i] = tmp;
        } else {
            tmp += 48;
            str[i] = tmp;
        }
        nb /= 16;
    }
    my_putstr("0X");
    my_putstr(my_revstr(str));
}

int my_put__hexa(int nb)
{
    char *str = malloc(sizeof(char)* 10);
    int i = 0;
    int tmp = 0;

    if (nb == 0)
        my_put_nbr(nb);
    for (i; nb != 0; i++) {
        tmp = nb %16;
        if (tmp > 10) {
            tmp += 87;
            str[i] = tmp;
        } else {
            tmp += 48;
            str[i] = tmp;
        }
        nb /= 16;
    }
    my_putstr("0x");
    my_putstr(my_revstr(str));
}