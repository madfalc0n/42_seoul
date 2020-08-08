/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:09:12 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 16:56:01 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char **argv);

int	except(char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 1;
	if (ft_strlen(argv) < 31 || ft_strlen(argv) > 31)
		return (1);
	while (i < 32)
	{
		if (argv[1][i] < '1' || argv[1][i] > '4')
			return (1);
		if (argv[1][j] != ' ' && j < 31)
			return (1);
		i += 2;
		j += 2;
	}
	return (0);
}

int ft_strlen(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
		i++;
	return (i);
}
