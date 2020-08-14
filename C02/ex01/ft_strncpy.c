/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:39:43 by myokim            #+#    #+#             */
/*   Updated: 2020/08/14 00:29:45 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;
	char			tmp;
	char			tmp2;

	i = 0;
	while (i < n)
	{
		tmp = *dest;
		tmp2 = *src;
		dest = &tmp2;
		if (tmp2 == '\0')
			return (dest);
		dest++;
		src++;
		i++;
	}
	return (dest);
}
