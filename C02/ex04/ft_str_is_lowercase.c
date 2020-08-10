/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:36:15 by myokim            #+#    #+#             */
/*   Updated: 2020/08/10 16:38:18 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_lowercase(char *str)
{
	char	a;

	while (1)
	{
		a = *str;
		if (a == '\0')
			break ;
		if (!(a >= 'a' && a <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
