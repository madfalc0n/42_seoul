/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:37:33 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 22:26:43 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		look_up(int **grid, int i);
int		check_left_row(int **grid, int i);
int 	check_right_row(int **grid, int i);
void	building(int **grid, int i);
int		check_up_col(int ** grid, int i);
int		check_down_col(int **grid, int i);
void	print_result(int **grid);
int		next_permutation(int *a, int n);
int		promising(int **grid, int i);

void	building(int **grid, int i)
{
    int j;
	int result;
   
	result = promising(grid, i);
    if (result == 0)
	{
		building(grid, i);
	}
	else
	{
		printf("%d\n",i);	
        if (i == 5)
		{
			j = 1;
			while (j < 5)
			{
				if (!check_up_col(grid, j) || !check_down_col(grid, j))
				{
					return ;
				}
				j++;
			} 
			//print_result(grid);
		}
		else
		{
			building(grid, i + 1);
		}
    }
}

int promising(int **grid, int i)
{
	int	key;

	key = 1;
	if (i == 1)
	{
		if (!(check_left_row(grid, i)) || !(check_right_row(grid, i)))
			key = 0;
	}
	else
	{
    	if(!look_up(grid, i))
		{
			key = 0;
		}
       	if (!(check_left_row(grid, i)) || !(check_right_row(grid, i)))
		{
			key = 0;
    	}
	}
	if (key == 0)
		next_permutation(&grid[i][1], 4);
    return key;
}

int	look_up(int **grid, int i)
{
	int	j;
	int	save;
	int save_i;

	j = 1;
	save = grid[i][j];
	save_i = i;
	while (j < 5)
	{
		i = save_i;
		while (i > 1)
		{
			if (grid[--i][j] == save)
				return (0);
		}
		j++;
	}
	return (1);
}
