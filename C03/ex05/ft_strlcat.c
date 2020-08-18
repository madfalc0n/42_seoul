/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 00:59:24 by myokim            #+#    #+#             */
/*   Updated: 2020/08/16 04:56:07 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *src)
{
	int				i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned		int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int src_size;
	unsigned	int dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (size == 0)
		return (src_size);
	if (size < dest_size)
		return (src_size + size);
	i = 0;
	while (src[i] != '\0' && i + dest_size < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
