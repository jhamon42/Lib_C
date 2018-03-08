/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:12:00 by jhamon            #+#    #+#             */
/*   Updated: 2017/12/03 17:12:03 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *head_tmp;
	t_list *tmp_i;

	if (lst)
	{
		if (!(tmp = malloc(sizeof(t_list))))
			return (NULL);
		tmp = (*f)(lst);
		head_tmp = tmp;
		lst = lst->next;
	}
	while (lst)
	{
		if (!(tmp_i = malloc(sizeof(t_list))))
			return (NULL);
		tmp_i = (*f)(lst);
		tmp->next = tmp_i;
		tmp = tmp->next;
		lst = lst->next;
	}
	return (head_tmp);
}
