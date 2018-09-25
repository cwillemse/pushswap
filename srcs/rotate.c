#include "push_swap.h"

void	ra(t_push_swap *stacks)
{
	if (stacks->a->next == NULL)
		return ;
	t_swap *tmp;
	t_swap *tmp2;

	tmp = stacks->a;
	stacks->a = stacks->a->next;
	tmp2 = stacks->a;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;	
}

void	rb(t_push_swap *stacks)
{
	if (stacks->b->next == NULL)
		return ;
	t_swap *tmp;
	t_swap *tmp2;

	tmp = stacks->b;
	stacks->b = stacks->b->next;
	tmp2 = stacks->b;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;
}

void	rr(t_push_swap *stacks)
{
	ra(stacks);
	rb(stacks);
}
