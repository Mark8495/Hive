#include <unistd.h>

int ft_strlen(char *str)
{
    int letter;

    letter = 0;
    while (str[letter] != '\0')
    {
        letter++;
    }
    return (letter);
}