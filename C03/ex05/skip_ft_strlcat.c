#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned dst_len;
	unsigned src_len;

	dst_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0 || dst_len > size)
	{
		return (src_len + size);
	}
	else if (dst_len < size)
	{
		i = 0;
		size -= dst_len;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[dst_len + i] = src[i];
			i++;
		}
		dest[dst_len + i] = '\0';
		return (src_len + dst_len);
	}
}

int main(void)
{
	printf("%d", ft_strlcat("fuck", "gggdmmrrr" , 7));
}