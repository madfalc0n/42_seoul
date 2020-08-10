/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:49:41 by myokim            #+#    #+#             */
/*   Updated: 2020/08/10 12:51:55 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		result;
	int		tmp;
	char	a;

	tmp = 0;
	result = 0;
	while (1)
	{
		a = *str;
		if (a == '\0')
		{
			break ;
		}
		str++;
		result++;
	}
	return (result);
}
