/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 07:26:00 by jhamon            #+#    #+#             */
/*   Updated: 2018/02/14 17:14:34 by jhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_pc(t_list *var, int i)
{
	if (i != 1)
	{
		if (var->champ > 1)
		{
			if (var->moin == 1)
			{
				ft_copyinbuff('%', var);
				while (--var->champ)
					ft_copyinbuff(' ', var);
				return ;
			}
			else if (var->zero == 1)
			{
				while (--var->champ)
					ft_copyinbuff('0', var);
				return ((void)ft_copyinbuff('%', var));
			}
			while (--var->champ)
				ft_copyinbuff(' ', var);
		}
	}
	ft_copyinbuff('%', var);
}
