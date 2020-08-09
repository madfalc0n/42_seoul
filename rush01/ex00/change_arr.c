/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 20:01:55 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 22:04:46 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	next_permutation(int **grid, int index)
{
    int	i;
	int tmp;
	
	tmp = grid[index][1];
	i = 1;
	while (i < 4)
	{
		grid[index][i] = grid[index][i+1];
		i++;
	}
	grid[index][4] = tmp;

    return (1);
}
