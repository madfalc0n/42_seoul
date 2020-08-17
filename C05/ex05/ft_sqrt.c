int ft_sqrt(int nb)
{
    int i;

    if (nb == 1)
        return (1);
    i = 2;
    while ( i < nb - i + 1)
    {
        if (nb == i * i)
            return (i);
        i++;
    }
    return (0);
}