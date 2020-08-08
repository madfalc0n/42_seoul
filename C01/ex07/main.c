#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int a[] = {1,2,3,4};

	for (int i = 0 ; i < 4 ; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	ft_rev_int_tab(a,4);
	
	for (int i = 0 ; i < 4 ; i++)
        {
                printf("%d", a[i]);
        }
	printf("\n");
	
	return (0);
}
