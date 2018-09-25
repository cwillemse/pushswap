#include "push_swap.h"

void	rra(t_push_swap *stacks)
{
	if (stacks->a->next == NULL)
		return ;
	t_swap *tmp;
	t_swap *tmp2;
	t_swap *tmp3;

	tmp = stacks->a;
	tmp2 = stacks->a;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp3 = tmp2->next;
	tmp2->next = NULL;
	tmp3->next = tmp;
	stacks->a = tmp3;
}

void	rrb(t_push_swap *stacks)
{
	if (stacks->b->next == NULL)
		return ;
	t_swap *tmp;
	t_swap *tmp2;
	t_swap *tmp3;

	tmp = stacks->b;
	tmp2 = stacks->b;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp3 = tmp2->next;
	tmp2->next = NULL;
	tmp3->next = tmp;
	stacks->a = tmp3;
}

void	rrr(t_push_swap *stacks)
{
	rra(stacks);
	rrb(stacks);
}
