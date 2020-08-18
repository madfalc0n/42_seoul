#include <stdio.h>

int ft_find_next_prime(int nb);
int ft_find_next_prime2(int nb);

int main(void)
{
    int i;
    int result;
    int result2;

    i = 1;
    while (i < 200)
    {
        result = ft_find_next_prime(i);
        result2 = ft_find_next_prime2(i);
        if (result != 0)
            printf("%d : result1 : %d    result2 : %d\n", i, result, result2);
        i++;
    }
    return (0);

}