int ft_count_if(char **tab, int (*f)(char *))
{
    int h;
    int num;

    h = 0;
    num = 0;
    while (tab[h])
    {
        if (f(tab[h]) == 1)
            num++;
        h++;
    }
    return (num);
}