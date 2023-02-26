/*
** EPITECH PROJECT, 2020
** put nbr
** File description:
** put nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_putchar('2');
            nb = -147483648;
        }
        nb = nb * (-1);
    }
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
