/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 18:29:36 by myokim            #+#    #+#             */
/*   Updated: 2020/08/21 14:30:46 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_total_strlen(int size, char **strs, char *sep)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		cnt += ft_strlen(strs[i]);
		i++;
	}
	cnt += ft_strlen(sep) * (size - 1);
	return (cnt);
}

void		ft_strcat(char *result, char *str)
{
	int		i;
	int		j;

	i = 0;
	while (result[i])
		i++;
	j = 0;
	while (str[j])
	{
		result[i + j] = str[j];
		j++;
	}
	result[i + j] = '\0';
}

char		*ft_merge_str(int size, char **strs, char *sep, int total_len)
{
	int		i;
	int		j;
	char	*result;

	if ((result = (char *)malloc(sizeof(char) * total_len + 1)) == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = ft_total_strlen(size, strs, sep);
	return (ft_merge_str(size, strs, sep, total_len));
}
