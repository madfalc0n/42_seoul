#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int a[] = {5,3,9,6,2,1};
	
	for (int i = 0 ; i < 6 ; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	ft_sort_int_tab(a,6);
        for (int i = 0 ; i < 6 ; i++)
        {
                printf("%d", a[i]);
        }
	printf("\n");
	return (0);
}
