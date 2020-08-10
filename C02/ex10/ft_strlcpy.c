/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:06:42 by myokim            #+#    #+#             */
/*   Updated: 2020/08/10 20:34:08 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("up to : %s\n", dest);
	while (src[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	char src[10] = "232323";
	char dst[10] = "111111";

	printf("%s\n", dst);
	printf("%u\n",ft_strlcpy(dst, src, 4));
	printf("%s\n", dst);
}
