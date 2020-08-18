#include <stdio.h>

int ft_atoi(char *str);

int main(int args, char **argv)
{
	char *a;

	printf("intput : %d\n", args);

	a = argv[1];
	printf("intput : %s\n", a);
	printf("result : %d\n",ft_atoi(a));
	return (0);
}
