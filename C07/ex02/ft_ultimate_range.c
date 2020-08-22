/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 18:29:00 by myokim            #+#    #+#             */
/*   Updated: 2020/08/20 18:29:15 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	cnt;
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	if ((arr = (int *)malloc(sizeof(int) * len)) == 0)
		return (-1);
	cnt = 0;
	while (cnt < len)
	{
		arr[cnt] = min;
		min++;
		cnt++;
	}
	*range = arr;
	return (cnt);
}
