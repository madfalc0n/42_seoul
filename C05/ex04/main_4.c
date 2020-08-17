#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d : %d\n", i, ft_fibonacci(i));
        i++;
    }
    return (0);
}