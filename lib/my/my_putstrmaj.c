/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_putstrmaj
*/
#include "../../include/my.h"

void my_put_octal(int nb);

int my_putstrmaj(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 127)
            my_put_octal(str[i]);
        if (str[i] < 8) {
            my_putstr("\\00");
            my_put_octal(str[i]);
        } else if (str[i] < 32) {
            my_putstr("\\0");
            my_put_octal(str[i]);
        }
        else {
            my_putchar(str[i]);
        }
    }
    return (0);
}
