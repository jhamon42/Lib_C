/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charnumb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 06:48:43 by jhamon            #+#    #+#             */
/*   Updated: 2018/02/05 01:44:42 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_charnumb(char const *s1, int c)
{
	int				i;
	int				j;
	unsigned char	*str1;

	i = 0;
	j = -1;
	str1 = (unsigned char *)s1;
	while (str1[++j] != '\0')
		if (str1[j] == c)
			i++;
	return (i);
}
