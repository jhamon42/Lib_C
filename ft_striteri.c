/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 08:51:08 by jhamon            #+#    #+#             */
/*   Updated: 2017/11/25 08:03:46 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	if (s && (*f))
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
