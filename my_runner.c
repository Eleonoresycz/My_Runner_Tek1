/*
** EPITECH PROJECT, 2020
** Projets
** File description:
** my_runner
*/

#include "include/struct.h"

globale st;

int displayed(void)
{
    sfVideoMode mode = {1000, 600, 32};
    int i = 0;

    defvar();
    st.don.window = sfRenderWindow_create(mode, "window", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(st.don.window, 60);
    first();
    while (sfRenderWindow_isOpen(st.don.window)
    && sfRenderWindow_hasFocus(st.don.window))
    {
        set_txt();
        srand(time(NULL));
        get_pos();
        while (sfRenderWindow_pollEvent(st.don.window, &st.don.event))
            action();
        i = game(i);
        end(i);
        sfRenderWindow_display(st.don.window);
    }
    destroy();
    return (0);
}

void help(void)
{
    my_printf("Finite runner created with CSFML.\n\n");
    my_printf("USAGE\n  ./my_runner map.txt\n\n");
    my_printf("OPTIONS\n -i                launch the game in infinity");
    my_printf(" mode.\n -h                print the usage and quit.\n\n");
    my_printf("USER INTERACTIONS\n SPACE_KEY        jump.\n");
    my_printf(" c                attack.\n");
}

int main(int ac, char **av)
{
    if (ac != 2){
        my_printf("./my_runner: bad arguments: 0 given but 1 is required\n");
        my_printf("retry with -h\n");
        return (84);
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    displayed();
    return (0);
}
