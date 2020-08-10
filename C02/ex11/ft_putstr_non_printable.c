#include <stdio.h>

int main(void)
{
	int i;
	char a[10] = "con\ntu";

	i = 0;
	while (i < 10)
	{
		printf("%d : %d :%c\n", i, a[i] ,a[i]);
		i++;
	}
}
