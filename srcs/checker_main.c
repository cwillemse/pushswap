/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:55:02 by cwillems          #+#    #+#             */
/*   Updated: 2018/09/25 14:06:57 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_push_swap		*ps;

		ps = (t_push_swap*)malloc(sizeof(t_push_swap));
		ps->a = 0;
		ps->b = 0;
		if (create_stack(argv, ps) == -1)
			return (derror("ERROR\n"));
		if (next_line(ps) == -1)
			return (derror("ERROR\n"));
		if (csort(ps) == -1)
			return (derror("KO\n"));
		else
			return (derror("OK\n"));
	}
	return (0);
}

int	derror(char *msg)
{
	ft_putstr(msg);
	return (1);
}


void	free2(char	***all)
{
	char	**tmp;
	int		counter;

	counter = -1;
	tmp = *all;
	while (tmp[++counter])
		free(tmp[counter]);
	free(tmp);
}

int	next_line(t_push_swap *ps)
{
	char	*line;

	while (get_next_line(0, &line) > 0)
	{
		if (ft_strcmp(line, "pa") == 0)
			pa(ps);
		else if (ft_strcmp(line, "pb") == 0)
			pb(ps);
		else if (ft_strcmp(line, "ra") == 0)
			ra(ps);
		else if (ft_strcmp(line, "rb") == 0)
			rb(ps);
		else if (ft_strcmp(line, "rr") == 0)
			rr(ps);
		else if (ft_strcmp(line, "sa") == 0)
			sa(ps);
		else if (ft_strcmp(line, "sb") == 0)
			sb(ps);
		else if (ft_strcmp(line, "ss") == 0)
			ss(ps);
		else if (ft_strcmp(line, "rra") == 0)
			rra(ps);
		else if (ft_strcmp(line, "rrb") == 0)
			rrb(ps);
		else if (ft_strcmp(line, "rrr") == 0)
			rrr(ps);
		else
			return (-1);
		ft_strdel(&line);
	}
	return (1);
}

int	csort(t_push_swap *stacks)
{
	t_swap *tmp;
	t_swap *tmp2;

	tmp = stacks->a;
	tmp2 = stacks->a;

	ft_putstr("jdhsajkdhaksjhdkajshd\n");
	while (tmp2)
	{
		ft_putnbr(tmp2->value);
		ft_putchar(' ');
		tmp2 = tmp2->next;
	}
	if (stacks->b != NULL)
		return (-1);
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}

