/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:57:25 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 15:20:25 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(int **grid)
{
	int	i;
	int	j;
	char temp_char;

	i = 0;
	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			temp_char = grid[j][i] + '0';
			write(1, &temp_char, 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
