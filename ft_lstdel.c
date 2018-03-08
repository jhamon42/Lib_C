/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:11:32 by jhamon            #+#    #+#             */
/*   Updated: 2017/12/03 17:11:35 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *tmp_h;

	tmp = *alst;
	tmp_h = *alst;
	while (tmp)
	{
		tmp_h = tmp;
		tmp = tmp->next;
		(*del)(tmp_h->content, tmp_h->content_size);
		tmp_h->content_size = 0;
		free(tmp_h);
		tmp_h = NULL;
	}
	*alst = NULL;
}
