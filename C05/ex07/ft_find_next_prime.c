int ft_find_next_prime(int nb)
{
    int i;
    int j;
    int result;

    i = 2;
    j = nb / 2 ;
    result = 1;
    while ( i < nb / 2 + 1)
    {
        j = i;
        while (j < nb / 2 + 1)
        {
            if (i * j == nb)
            {
                result = 0;
            }
            j++;
        }
        i++;
    }
    if (result == 0)
        return (ft_find_next_prime(nb + 1));
    else
        return (nb);
}