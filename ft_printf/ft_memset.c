/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:08:21 by jhamon            #+#    #+#             */
/*   Updated: 2018/02/11 18:16:49 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strc;

	strc = str;
	i = 0;
	while (i < n)
	{
		strc[i] = c;
		i++;
	}
	return (strc);
}
