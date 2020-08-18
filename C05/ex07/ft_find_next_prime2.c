int ft_find_next_prime2(int nb)
{
    if (nb < 2)
        return (ft_find_next_prime2(nb + 1));
    if (nb < 4 )
        return (nb);
    if (nb % 2 == 0 || nb % 3 == 0)
        return (ft_find_next_prime2(nb + 1));
    return (nb);
}