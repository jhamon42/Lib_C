/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 08:50:20 by jhamon            #+#    #+#             */
/*   Updated: 2017/11/28 10:55:38 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_compt(int nbr)
{
	int		i;

	i = 0;
	if (nbr == 0)
		return (2);
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr >= 1)
	{
		i++;
		nbr /= 10;
	}
	i++;
	return (i);
}

char			*ft_itoa(int nbr)
{
	char	*nbr_str;
	int		i;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648\0"));
	i = ft_compt(nbr);
	if (!(nbr_str = (char *)malloc(i * sizeof(char))))
		return (NULL);
	nbr_str[i - 1] = '\0';
	i -= 2;
	if (nbr == 0)
		nbr_str[0] = '0';
	if (nbr < 0)
	{
		nbr_str[0] = '-';
		nbr *= -1;
	}
	while (nbr >= 1)
	{
		nbr_str[i] = (nbr % 10 + '0');
		nbr /= 10;
		i--;
	}
	return (nbr_str);
}
