/*
** EPITECH PROJECT, 2020
** put nbr
** File description:
** put nbr
*/

int my_getnbr(char *str)
{
    int i = 0;
    int a = 1;
    int nb = 0;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            a *= -1;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else
            return (nb * a);
    }
    return (nb * a);
}

