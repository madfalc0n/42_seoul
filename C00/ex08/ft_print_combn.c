/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 13:01:08 by myokim            #+#    #+#             */
/*   Updated: 2020/08/05 15:35:00 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_combn(char c[], int num)
{
	int		tmp;

	tmp = 0;
	while (tmp < num)
	{
		write(1, &c[tmp], 1);
		tmp++;
	}
}

void		rest_in_peace(int end, char sav_c[])
{
	int		tmp;
	int		cnt;

	tmp = 0;
	cnt = 0;
	while (tmp < end)
	{
		if (sav_c[tmp] == (9 - end + 1 + tmp) + 48)
		{
			cnt++;
		}
		tmp++;
	}
	if (cnt != end)
	{
		print_combn(", ", 2);
	}
}

void		comb_proc(int start, int end, int cur, char sav_c[])
{
	int		tmp;

	if (start == end)
	{
		print_combn(sav_c, end);
		rest_in_peace(end, sav_c);
	}
	else
	{
		tmp = cur + 1;
		while (tmp <= (9 - end + start + 1))
		{
			sav_c[start] = tmp + 48;
			comb_proc(start + 1, end, tmp, sav_c);
			tmp++;
		}
	}
}

void		ft_print_combn(int n)
{
	int		tmp;
	char	sav_char[n];

	tmp = 0;
	while (tmp <= (9 - n + 1))
	{
		sav_char[0] = 48 + tmp;
		comb_proc(1, n, tmp, sav_char);
		tmp++;
	}
}
