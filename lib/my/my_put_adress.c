/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_put_adress
*/
#include "../../include/my.h"
#include <stdlib.h>

unsigned long long my_put_adress(unsigned long long nb)
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
    my_putstr("0x");
    my_putstr(my_revstr(str));
}