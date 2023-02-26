/*
** EPITECH PROJECT, 2021
** Projets
** File description:
** my_nbrlen
*/
#include <stdio.h>

int my_nbrlen(int nb)
{
    int result = 0;

    if (nb < 10)
        return (1);
    for (int i = 10; nb != 0; i * 10) {
        nb = nb / i;
        result++;
    }
    return (result);
}