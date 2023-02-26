/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_put_dec_unsigned
*/
#include "../../include/my.h"

unsigned my_put_dec_unsigned(unsigned nb)
{
    unsigned i = 0;

    if (nb >= 0) {
        if (nb >= 10) {
            i = (nb % 10);
            nb = (nb - i) / 10;
            my_put_nbr(nb);
            my_putchar(48 + i);
        }
        else
            my_putchar(48 + nb % 10);
    }
}