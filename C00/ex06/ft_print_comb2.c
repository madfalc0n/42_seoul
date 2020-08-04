/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 18:53:46 by myokim            #+#    #+#             */
/*   Updated: 2020/08/03 20:40:20 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void print_comb(char c)
{
	write(1, &c, 1);
}

void sub_comb2(int a, int b)
{
	print_comb(48 + a / 10);
	print_comb(48 + a % 10);	
	print_comb(' ');
	print_comb(48 + b / 10);
	print_comb(48 + b % 10);
	if (!(a == 98 && b == 99))
	{
		print_comb(',');
		print_comb(' ');
	}
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			sub_comb2(a,b);
			b++;
		}
		a++;
	}
	


 
}
