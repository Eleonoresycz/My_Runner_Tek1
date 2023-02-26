/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_put_octal
*/
#include "../../include/my.h"

void my_put_octal(int nb)
{
    int octalnb = 0;
    int i = 1;

    for (nb; nb != 0; i *= 10) {
        octalnb += (nb %8) * i;
        nb /= 8;
    }
    my_put_nbr(octalnb);
}