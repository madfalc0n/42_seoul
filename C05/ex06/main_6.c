#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    int i;
    int result;

    i = 1;
    while (i < 101)
    {
        result = ft_is_prime(i);
        if (result != 0)
            printf("%d : %d\n", i, result);
        i++;
    }
    return (0);

}