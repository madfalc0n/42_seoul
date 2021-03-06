/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:48:29 by myokim            #+#    #+#             */
/*   Updated: 2020/08/16 04:38:03 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_recur(int nb);

void		ft_recur(int nb)
{
	char	tmp;

	if (nb < 10)
	{
		tmp = nb + '0';
		write(1, &tmp, 1);
		return ;
	}
	else
	{
		ft_recur(nb / 10);
		tmp = (nb % 10) + '0';
		write(1, &tmp, 1);
	}
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_recur(nb);
	}
	else if (nb > 0)
	{
		ft_recur(nb);
	}
}
