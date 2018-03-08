/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 19:10:54 by jhamon            #+#    #+#             */
/*   Updated: 2018/02/11 18:14:14 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long		ft_atoi(const char *str)
{
	long long i;
	long long j;
	long long num;

	i = 0;
	j = -1;
	num = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || \
	str[i] == '\t' || str[i] == ' ' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		j = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (i > 18)
		num = j;
	if (j == 0)
		num *= -1;
	return (num);
}
