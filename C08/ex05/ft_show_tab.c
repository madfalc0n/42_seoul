/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:52:08 by myokim            #+#    #+#             */
/*   Updated: 2020/08/21 10:07:13 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void		ft_print(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_print(nb / 10);
		ft_print(nb % 10);
	}
}

void		ft_write(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void		ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_write(par->str);
		write(1, "\n", 1);
		ft_print(par->size);
		write(1, "\n", 1);
		ft_write(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
