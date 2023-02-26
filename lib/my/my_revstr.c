/*
** EPITECH PROJECT, 2020
** revstr
** File description:
** recstr
*/

char my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int j = 0;
    char dest[my_strlen(str)];

    while (i >=  0) {
        dest[j] = str[i];
        i = i-1;
        j = j+1;
    }
    while (i < j) {
        str[i] = dest[i];
        i++;
    }
    return (str);
}
