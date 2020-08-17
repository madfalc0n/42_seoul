/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 05:35:55 by myokim            #+#    #+#             */
/*   Updated: 2020/08/16 05:41:50 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *n_list)
{
	int i;
	
	i = 0;
	while (n_list[i] != '\0')
		i++;
	return (i);
}

int conv_num(char *n_list, int m_cnt)
{
	int i;
	int cnt;
	int result;

	i = ft_strlen(n_list) - 1;
	cnt = 1;
	result = 0;
	while (i > -1)
	{
		if (n_list[i] != 0)
		{
			result += ((n_list[i] - 48) * cnt);
		}
		cnt *= 10;
		i--;
	}

	if (m_cnt % 2 == 0)
		return (-1 * result);
	else
		return (result);
}

int conv_a_to_num(char *str)
{
    int i;
    int num_cnt;
	int mi_cnt;
	int j;
	char n_list[1000];

    i = 0;
	j = 0;
    num_cnt = 1;
	mi_cnt = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '-')
            mi_cnt++;
        else if (str[i] >= '0' && str[i] <= '9')
        {
			n_list[j] = str[i];
            num_cnt++;
			j++;
        }
        else if (!(str[i] >= '0' && str[i] <= '9') && num_cnt > 1) //숫자 쌓이고 있는데 갑자기 다른놈 튀어나온 경우
            break ;
        i++;
    }
	return (conv_num(str, mi_cnt));
}

int ft_atoi(char *str)
{
	int result;

	printf("origin str: %s\n", str);
	result = conv_a_to_num(str);
	return (result);
}
