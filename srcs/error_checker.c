/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:13:48 by cwillems          #+#    #+#             */
/*   Updated: 2018/09/25 14:06:04 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		error_checking(char	*tmp, t_swap *cmp)
{
	if (ft_isdigit(*tmp) == 0)
		return (-1);
	else if (ft_strlen(tmp) == 10)
	{
		if (!(ft_atoi(tmp) > 1000000000 && ft_atoi(tmp) < 2147483647))
			return (-1);
	}
	else if (ft_strlen(tmp) == 11)
	{
		if (!(ft_atoi(tmp) < -1000000000 && ft_atoi(tmp) > -2147483648))
			return (-1);
	}
	else if (ft_strlen(tmp) > 11)
		return (-1);
	return (cduplicates(ft_atoi(tmp), cmp));
}

int	cduplicates(int	tp, t_swap *cmp)
{
	t_swap *tmp;

	tmp = cmp;

	if (tmp == 0)
		return (1);
	while (tmp)
	{
		if (tmp->value == tp)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}
