/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** Copy a string
*/
#include "../../include/my.h"
#include <stdlib.h>

char *my_strdup (char const *src)
{
    int a = my_strlen(src);
    char *str = malloc(sizeof(char) * (a + 1) + 1);

    for (int i = 0; i <= a; i++)
        str[i] = src [i];
    str[a + 1] = '\0';
    return (str);
}
