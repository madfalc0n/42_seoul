int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    return nb * ft_recursive_power(nb, power - 1);
}