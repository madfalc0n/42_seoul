/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:39:43 by myokim            #+#    #+#             */
/*   Updated: 2020/08/10 16:10:26 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char tmp;
	char tmp2;

	i = 0;
	while (i < n)
	{
		tmp = *dest;
		tmp2 = *src;
		printf("des : %c src : %c\n", tmp ,tmp2);
		dest = &tmp2;
		if (tmp2 == '\0')
			return (dest);
		dest++;
		src++;
		i++;
	}
	return (dest);
}

int main(void)
{
	char dst[5] = "Hello";
	char src[3] = "com";
	
	printf("%s\n", ft_strncpy(dst, src, 5));	
}
