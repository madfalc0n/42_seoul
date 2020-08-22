/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:28:36 by myokim            #+#    #+#             */
/*   Updated: 2020/08/21 14:28:37 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int	range;
	int	*mem;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	if ((mem = (int *)malloc(range * sizeof(int))) == NULL)
		return (0);
	i = 0;
	while (min < max)
		mem[i++] = min++;
	return (mem);
}
