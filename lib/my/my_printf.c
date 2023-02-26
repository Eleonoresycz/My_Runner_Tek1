/*
** EPITECH PROJECT, 2020
** B-PSU-100-LIL-1-1-myprintf-eleonore.sycz
** File description:
** my_printf
*/
#include "../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

void my_putchar(char c);
void my_put_octal(int nb);
void my_put_majhexa(int nb);
void my_put_adress(unsigned long long int nb);
void my_put_dec_unsigned(unsigned nb);
void my_put_binary(int nb);
void my_putstrmaj(char const *str);
void my_put__hexa(int nb);
void my_put__majhexa(int nb);
void my_put__adress(unsigned long long int nb);
void my_put__dec_unsigned(unsigned nb);
void my_put__binary(int nb);
void my_putstr__maj(char const *str);


void display1(char c, void *arg)
{
    switch (c) {
    case 'c':
        my_putchar((char)arg);
        break;
    case 'd':
        my_put_nbr((int)arg);
        break;
    case 'i':
        my_put_nbr((int)arg);
        break;
    case 'o':
        my_put_octal((int)arg);
        break;
    case 'u':
    my_put_dec_unsigned((unsigned)arg);
        break;
    default:
        break;
    }
}

void display2(char c, void *arg)
{
    switch (c) {
    case 'x':
        my_put_hexa((int)arg);
        break;
    case 'X':
        my_put_majhexa((int)arg);
        break;
    case 'p':
        my_put_adress((unsigned long long int)arg);
        break;
    case 's':
        my_putstr(arg);
        break;
    case 'S':
        my_putstrmaj(arg);
        break;
    default:
        break;
    }
}

void display3(char c, void *arg)
{
    switch (c) {
    case 'b':
        my_put_binary((int)arg);
        break;
    case '%':
        my_putchar('%');
        break;
    default:
        break;
    }
}

void display4(char c, char a, void *arg)
{
    switch (c) {
    case '#':
        switch (a) {
        case 'o':
            my_putchar('0');
            my_put_octal((int)arg);
            break;
        case 'x':
            my_put__hexa((int)arg);
            break;
        case 'X':
            my_put__majhexa((int)arg);
            break;
        default:
            break;
        }
    default:
        break;
    }
}

void my_printf(char *str, ...)
{
    void *arg;
    va_list list;

    va_start(list, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '%')
            my_putchar(str[i]);
        if (str[i] == '%') {
            (str[i+1] != '%' ? arg = va_arg(list, void *) : 0);
            display1(str[i + 1], arg);
            display2(str[i + 1], arg);
            display3(str[i + 1], arg);
            i++;
            display4(str[i], str[i + 1], arg);
        }
    }
    va_end(list);
}