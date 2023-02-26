/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_put_binary
*/
#include "../../include/my.h"

int my_put_binary(int nb)
{
    int binarynb = 0;
    int i = 1;

    for (nb; nb != 0; i *= 10) {
        binarynb += (nb %2) * i;
        nb /= 2;
    }
    my_put_nbr(binarynb);
}