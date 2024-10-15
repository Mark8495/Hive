void *ft_strcpy(char *dest, char *src)
{
    int letter;

    letter = 0;
    while (src[letter] != '\0')
    {
        dest[letter] = src[letter];
        letter++;
    }
    dest[letter] = '\0';
    return (dest);
}