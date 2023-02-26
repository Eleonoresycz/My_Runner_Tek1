/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** project
*/
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strcat(char *dest, char const *src)
{
    int destlen = my_strlen(dest);
    int srclen = my_strlen(src);
    char *dest1 = malloc(sizeof(char) * (destlen + srclen) + 1);
    dest1 = my_strcpy(dest1, dest);
    int i = destlen;

    for (int ii = 0; i < destlen + srclen; i++, ii++)
        dest1[i] = src[ii];
    dest1[i] = '\0';
    return dest1;
}