int ft_atoi(char *str)
{
    int letter;
    int result;
    int sign;

    sign = 1;
    letter = 0;
    result = 0;
    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (str[letter] >= '0' && str[letter] <= '9')
    {
        result = result * 10 + str[letter] - '0';
        letter++;
    }
    return (result * sign);
}