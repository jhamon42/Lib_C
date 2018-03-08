/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 08:49:36 by jhamon            #+#    #+#             */
/*   Updated: 2018/02/11 18:13:25 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (s)
	{
		if (!(new_str = (char *)malloc((len + 1) * sizeof(char))))
			return (NULL);
		new_str[len] = '\0';
		return (ft_strncpy(new_str, (s + start), len));
	}
	return (NULL);
}
