#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    int i;

    i = 1;
    while (i < 101)
    {
        printf("%d : %d\n", i, ft_sqrt(i));
        i++;
    }
    printf("%d : %d\n", i, ft_sqrt(65535));
    return (0);

}