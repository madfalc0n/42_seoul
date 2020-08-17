#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d : %d\n", i, ft_recursive_power(i,2));
        i++;
    }
    return (0);
}