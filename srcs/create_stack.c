/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:56:17 by cwillems          #+#    #+#             */
/*   Updated: 2018/09/25 14:16:14 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		create_stack(char	**contents, t_push_swap *ps)
{
	int		count1;
	int		count2;
	char	**tmp;

	count1 = 0;
	tmp = 0;

	while (contents[++count1])
	{
		tmp = ft_strsplit(contents[count1], 32);
		count2 = -1;
		while (tmp[++count2])
		{
			if (error_checking(tmp[count2], ps->a) == -1)
			{
				free2(&tmp);
				return (-1);
			}
			add_list(ps, ft_atoi(tmp[count2]));
		}
	}
	return (1);
}
