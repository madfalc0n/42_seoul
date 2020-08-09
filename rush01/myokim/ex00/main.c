/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:01:12 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 21:37:24 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		assign(int **grid, int **permu);
void	free_mem(int **grid, int **permu, int *array);
void	print_result(int **grid);
int 	except(char **argv);
void	grid_init(int **grid, int *array);
void	permu_init(int **permu, int *array, int s, int cur);
void	grid_input_init(char **argv, int **grid);
void	building(int **grid, int i);

int	main(int argc, char **argv)
{
	int	**grid;
	int **permu;
	int *array;

	grid = (int **)malloc(sizeof(int *) * 6);
	permu = (int **)malloc(sizeof(int *) * 24);
	array = (int *)malloc(sizeof(int ) * 4);
	if ( argc != 2 || except(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	assign(grid, permu);
	grid_init(grid, array);
	// permu_init(permu, array, s, e);
	grid_input_init(argv, grid);
	building(grid, 1);
	// print_result(grid);
	free_mem(grid, permu, array);
	return (0);
}
