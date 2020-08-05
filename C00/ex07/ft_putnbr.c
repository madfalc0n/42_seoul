/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:59:00 by myokim            #+#    #+#             */
/*   Updated: 2020/08/05 17:33:09 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numb(char c)
{
	write(1, &c, 1);
}

void	int_to_str(int nb)
{
	if (nb / 10 == 0)
	{
		print_numb(48 + nb);
	}
	else
	{
		int_to_str(nb / 10);
		print_numb(48 + nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		print_numb('0');
	}
	else if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			print_numb('-');
			nb = nb * (-1);
			int_to_str(nb);
		}
	}
	else
	{
		int_to_str(nb);
	}
}
