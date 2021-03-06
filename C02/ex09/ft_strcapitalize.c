/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:12:17 by myokim            #+#    #+#             */
/*   Updated: 2020/08/10 18:47:53 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		i;

	if ((str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ')
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		}
		else
		{
			if ((str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
