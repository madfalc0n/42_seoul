int ft_is_prime2(int nb)
{
    if (nb < 2)
        return (0);
    if (nb < 4 )
        return (1);
    if (nb % 2 == 0 || nb % 3 == 0)
        return (0);
    return (1);
}