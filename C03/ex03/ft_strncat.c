/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:00:04 by myokim            #+#    #+#             */
/*   Updated: 2020/08/13 17:01:38 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int	i;
	unsigned	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
