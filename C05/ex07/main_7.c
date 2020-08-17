#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
    int i;
    int result;

    i = 1;
    while (i < 200)
    {
        result = ft_find_next_prime(i);
        if (result != 0)
            printf("%d : %d\n", i, result);
        i++;
    }
    return (0);

}