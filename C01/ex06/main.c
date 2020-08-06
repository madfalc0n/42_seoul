#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	int result;
	char str[] = "hellllo";

	result = ft_strlen(str);
	printf("%d\n", result);
	return (0);

}
