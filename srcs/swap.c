#include "push_swap.h"

void	sa(t_push_swap *stacks)
{
	if (stacks->a->next == NULL)
		return ;
	t_swap	*tmp;
	t_swap	*tmp2;

	tmp = stacks->a;
	tmp2 = stacks->a->next;
	tmp =  (stacks->a->next->next != NULL) ? stacks->a->next->next : 0;
	tmp2->next = tmp;
	stacks->a = tmp2;
}

void	sb(t_push_swap *stacks)
{
	if (stacks->a->next == NULL)
		return ;
	t_swap     *tmp;
	t_swap     *tmp2;

	tmp = stacks->b;
	tmp2 = stacks->b->next;
	tmp =  (stacks->b->next->next != NULL) ? stacks->b->next->next : 0;
	tmp2->next = tmp;
	stacks->b = tmp2;
}

void	ss(t_push_swap *stacks)
{
	sa(stacks);
	sb(stacks);
}
