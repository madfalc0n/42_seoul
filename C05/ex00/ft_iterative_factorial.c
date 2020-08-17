int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    while ( nb > 0)
    {    
        result *= nb;
        nb--;
    }
    return (result);
}