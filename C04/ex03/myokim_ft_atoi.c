/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:00:13 by myokim            #+#    #+#             */
/*   Updated: 2020/08/18 14:07:26 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			conv_num(int start_cnt, int stop_cnt, int m_cnt, char *str)
{
	int		i;
	int		cnt;
	int		result;

	cnt = 1;
	result = 0;
	i = stop_cnt;
	while (i >= start_cnt)
	{
		if (str[i] != 0)
			result += ((str[i] - 48) * cnt);
		cnt *= 10;
		i--;
	}
	if (m_cnt != 0 && m_cnt % 2 != 0)
		return (-1 * result);
	else
		return (result);
}

int			conv_a_to_num(char *str)
{
	int		i;
	int		sw;
	int		start_cnt;
	int		mi_cnt;

	i = 0;
	mi_cnt = 0;
	start_cnt = 0;
	sw = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && sw == 0)
			mi_cnt++;
		else if (str[i] >= '0' && str[i] <= '9' && sw == 0)
		{
			sw = 1;
			start_cnt = i;
		}
		else if (!(str[i] >= '0' && str[i] <= '9') && sw != 0)
			break ;
		i++;
	}
	return (conv_num(start_cnt, i - 1, mi_cnt, str));
}

int			ft_atoi(char *str)
{
	int		result;

	result = conv_a_to_num(str);
	return (result);
}
