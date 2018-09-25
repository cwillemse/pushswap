/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:27:41 by cwillems          #+#    #+#             */
/*   Updated: 2018/09/25 14:16:53 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    add_list(t_push_swap *stacks, int value)
{
	t_swap *new;
	t_swap *tmp;

	tmp = stacks->a;
	ft_putstr("\nloki");
	new = (t_swap*)malloc(sizeof(t_swap));
	new->value = value;
	new->next = 0;
	ft_putnbr(new->value);
	if (stacks == 0)
		stacks->a = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
