/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:12:09 by jhamon            #+#    #+#             */
/*   Updated: 2017/12/03 18:02:23 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *li;

	if (!(li = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		li->content = NULL;
		li->content_size = 0;
	}
	else
	{
		if (!(li->content = malloc(content_size * sizeof(*content))))
			return (NULL);
		ft_strcpy(li->content, content);
		li->content_size = content_size;
	}
	li->next = NULL;
	return (li);
}
