#include <unistd.h>

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