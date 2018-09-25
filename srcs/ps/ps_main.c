#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_push_swap		*ps;

		ps = (t_push_swap*)malloc(sizeof(t_push_swap));
		if (create_stack(argv, ps) == -1)
			return (1);
		sort(ps);	
	}
	return (1);
}

int	print_op(t_push_swap *ps, char *line)
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
	ft_putstr(line);
	ft_putchar('\n');
	return (1);
}

void	create_size(t_push_swap *ps)
{
	t_swap *tmp;

	ps->size = 0;
	tmp = ps->a;
	while (tmp)
	{
		++(ps->size);
		tmp = tmp->next;
	}
}

int	check_s(t_push_swap *ps)
{
	t_swap *tmp;

	tmp = ps->a;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}

