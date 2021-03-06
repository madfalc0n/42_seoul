/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 11:54:23 by myokim            #+#    #+#             */
/*   Updated: 2020/08/19 11:54:41 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	i;

	if (nb == 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (nb == i * i)
		return (i);
	return (0);
}
