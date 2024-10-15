#include <unistd.h>

void ft_putchar(char c);

void ft_putstr(char *str)
{
    int letter;

    letter = 0;
    while (str[letter])
    {
        write(1, &str[letter], 1);
        letter++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    int letter;

    letter = 0;
    while (s1[letter] != '\0' || s2[letter] != '\0')
    {
        if (s1[letter] == s2[letter])
            letter++;
        else
            return (s1[letter] - s2[letter]);
    }
    return (0);
}

void ft_swap(char **av, int i)
{
    char *tmp;

    tmp = av[i];
    av[i] = av[i + 1];
    av[i + 1] = tmp;
}

int main(int ac, char **av)
{
    int i;

    if (ac > 1)
    {
        if (ac > 2)
        {
            i = 0;
            while (++i < ac - 1)
                if (ft_strcmp(av[i], av[i + 1]) > 0)
                {
                    ft_swap(av, i);
                    i = 0;
                }
        }
        i = 0;
        while (++i < ac)
        {
            ft_putstr(av[i]);
            ft_putchar('\n');
        }
    }
    return (0);
}