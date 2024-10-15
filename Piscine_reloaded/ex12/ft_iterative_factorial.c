int ft_iterative_factorial(int nb)
{
    int output;

    output = 1;
    if (nb < 0)
        return (0);
    while (nb > 0)
    {
        output *= nb;
        nb--;
    }
    return (output);
}