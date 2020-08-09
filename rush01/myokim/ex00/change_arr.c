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

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int next_permutation(int *a){
    int i = 3;
    while(i > 0 && a[i] <= a[i-1])
        i -= 1;
    if(i <= 0)
        return 0;
    int j = 3;
    while(a[i-1] >= a[j])
        j -= 1;
    swap( &a[i-1], &a[j]);
    j = 3;
    while(i < j)
    {
        swap(&a[i], &a[j]);
        i +=1;
        j -=1;
    }
    return 1;
}


// int	next_permutation(int **permu, int row, int cur)
// {
//     int	i;
// 	int tmp;
	
// 	i = 1;
// 	while (i < 4)
// 	{
// 		ft_swap(grid, index, depth);
// 		grid[index][i] = grid[index][i+1];
// 		i++;
// 	}
// 	grid[index][4] = tmp;

//     return (1);
// }

// void	ft_swap(int **grid, int index)
// {
// 	int tmp;

// 	tmp = grid[index][2];
// 	grid[index][2] = grid[index][3];
// 	grid[index][3] = tmp;
// }


// #include <unistd.h>
// #include <stdio.h>

// int	next_permutation(int **grid, int index)
// {
//     int	i;
// 	int tmp;
	
// 	tmp = grid[index][1];
// 	i = 1;
// 	while (i < 4)
// 	{
// 		grid[index][i] = grid[index][i+1];
// 		i++;
// 	}
// 	grid[index][4] = tmp;

//     return (1);
// }

// void	ft_swap(int **grid, int index)
// {
// 	int tmp;

// 	tmp = grid[index][2];
// 	grid[index][2] = grid[index][3];
// 	grid[index][3] = tmp;
// }

// #include <unistd.h>
// #include <stdio.h>

// void	ft_swap(int *a, int *b)
// {
// 	int	temp;
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// int	next_permutation(int *a, int n)
// {
//     int	i;
// 	int	j;

// 	i = n - 1;
//     while (i > 0 && a[i] <= a[i - 1])
// 	{
// 		i -= 1;
// 	}
//     if (i <= 0)
// 	{
// 		return (0);
// 	}
// 	j = n - 1;
//     while (a[i-1] >= a[j])
// 	{
//         j -= 1;
// 	}
//     ft_swap(&a[i - 1], &a[j]);
// 	j = n - 1;
// 	while (i < j)
// 	{ 
// 		ft_swap(&a[i], &a[j]);
//         i += 1;
//         j -= 1;
//     }
//     return (1);
// }