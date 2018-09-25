#include "push_swap.h"

int	minx(t_push_swap *ps)
{
	t_swap *tmp;
	int	min;

	tmp = ps->a;
	min = 2147483647;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

int	maxx(t_push_swap *ps)
{
	t_swap *tmp;
	int	max;

	max = -2147483648;
	tmp = ps->b;
	while (tmp)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

int	sort(t_push_swap *ps)
{
	t_swap *tmp;

	tmp = ps->a;
	if (ps->size > 3)
		push_stackb(ps);
	while (check_s(ps) != 1)
	{
		if (tmp->value > tmp->next->value)
			print_op(ps, "sa");
		else
			print_op(ps, "rra");
	}
	if (ps->size > 3)
		push_stacka(ps);
	return (1);
}

void	push_stackb(t_push_swap *ps)
{
	t_swap *tmp;
	int	min;
	int	counter;

	counter = ps->size - 3;
	min = 0;
	tmp = ps->a;
	while (counter)
	{
		min = minx(ps);
		while (tmp->value != min)
			print_op(ps, "ra");
		print_op(ps, "pb");
		counter--;
	}
}

void	push_stacka(t_push_swap *ps)
{
	t_swap *tmp;
	int	max;
	int	counter;

	counter = ps->size - 3;
	max = 0;
	tmp = ps->b;
	while (counter)
	{
		max = maxx(ps);
		while (tmp->value != max)
			print_op(ps, "rb");
		print_op(ps, "pa");
		counter--;
	}
}

