#include "push_swap.h"

void	pa(t_push_swap *stacks)
{
	if (stacks->a == NULL)
		return ;
	t_swap *tmp;
	t_swap *tmp2;

	tmp = stacks->a;
	tmp2 = stacks->b;
	stacks->a = stacks->a->next;
	tmp->next = tmp2;
	stacks->b = tmp;
}

void	pb(t_push_swap *stacks)
{
	if (stacks->b == NULL)
		return ;
	t_swap *tmp;
	t_swap *tmp2;

	tmp = stacks->b;
	tmp2 = stacks->a;
	stacks->b = stacks->b->next;
	tmp->next = tmp2;
	stacks->a = tmp;

}
