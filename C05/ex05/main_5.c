#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d : %d\n", i, ft_sqrt(i));
        i++;
    }
    return (0);

}