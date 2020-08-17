#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d : %d\n", i, ft_recursive_factorial(i));
        i++;
    }
    return (0);
}