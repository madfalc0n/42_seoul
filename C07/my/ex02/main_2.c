#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int i;
    int **range;


    i = 0;
    printf("len : %d\n",ft_ultimate_range(range,-2 , 20));
    while (i < 23)
    {
        printf("%d ",range[i]);
        i++;
    }
    printf("\n");


}