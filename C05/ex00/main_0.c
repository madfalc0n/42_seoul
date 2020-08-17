#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d : %d\n", i, ft_iterative_factorial(i));
        i++;
    }
    return (0);
}