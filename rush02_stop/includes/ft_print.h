/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 00:28:59 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/16 00:30:21 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
#define FT_PRINT_H



char		*ft_read_dict(void);
void		ft_check_value(char *str, char *dict, int value);
int			ft_check_1000(char *digit);
void		ft_print_1000(int a);
void        ft_dict_print(char *str, char *dict, int digit);

#endif
