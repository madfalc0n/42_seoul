/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:10:07 by myokim            #+#    #+#             */
/*   Updated: 2020/08/18 19:10:29 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_strlen(char *base)
{
	int			i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int				ft_val_check(char *base, int len)
{
	int			i;
	int			j;

	i = 0;
	if (len <= 1)
		return (0);
	while (i < len - 1)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void			ft_recur(long long nbr, char *base, int len)
{
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_recur(nbr / len, base, len);
	ft_recur(nbr % len, base, len);
}

void			conv_nbr_base(int nbr, char *base, int len)
{
	long long	tmp;

	tmp = nbr;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
	}
	ft_recur(tmp, base, len);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int			len;

	len = ft_strlen(base);
	if (ft_val_check(base, len) == 0)
		return ;
	conv_nbr_base(nbr, base, len);
}
