/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 21:36:30 by myokim            #+#    #+#             */
/*   Updated: 2020/08/10 12:52:19 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	char	a;

	a = 0;
	while (1)
	{
		a = *str;
		if (a == '\0')
		{
			break ;
		}
		write(1, &a, 1);
		str++;
	}
}
