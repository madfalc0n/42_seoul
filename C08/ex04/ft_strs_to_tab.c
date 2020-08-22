/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:54:47 by myokim            #+#    #+#             */
/*   Updated: 2020/08/21 09:54:49 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *src)
{
	int				i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int				i;
	char			*dest;

	if ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)) == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*stock;
	int				i;

	if ((stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))) == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].size = ft_strlen(av[i]);
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].size = 0;
	stock[i].copy = 0;
	return (stock);
}
