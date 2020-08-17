#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d : %d\n", i, ft_iterative_power(i,2));
        i++;
    }
    return (0);
}