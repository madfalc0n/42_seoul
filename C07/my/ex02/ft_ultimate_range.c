#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *arr;
    int cnt;
    int len;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    len = max - min;
    if ((arr = (int *)malloc(sizeof(int) * len)) == 0)
    {
        *range = 0;
        return (-1);
    }
    cnt = 0;
    while (cnt < len)
    {
        arr[cnt] = min;
        min++;
        cnt++;
    }
    *range = arr;
    cnt = 0;
    while (cnt < len)
    {
        printf("%d ", *range[cnt]);
        cnt++;
    }
    printf("\n");

    return (cnt);
}
