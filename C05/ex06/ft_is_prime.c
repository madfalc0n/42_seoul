int ft_is_prime(int nb)
{
    int i;
    int j;

    if (nb < 2)
        return (0);
    i = 2;
    while ( i < nb / 2 + 1)
    {
        j = i;
        while (j < nb / 2 + 1)
        {
            if (i * j == nb)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}