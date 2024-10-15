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