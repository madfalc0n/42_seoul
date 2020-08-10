#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int index;
	int int_size;

	index = 0;
	int_size = (int)size;
	while (index < int_size - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	while (src[index] != '\0')
		index++;
	return (index);
}

int main(void)
{
	char src[10] = "232323";
	char dst[10] = "111111";

	printf("%s\n", dst);
	printf("%u\n",ft_strlcpy(dst, src, 4));
	printf("%s\n", dst);
}
