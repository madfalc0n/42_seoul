int ft_recursive_factorial(int nb)
{
    int result;

    if (nb == 1)
        return 1;

    return (nb * ft_recursive_factorial(nb - 1));
}