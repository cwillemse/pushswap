/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:40:19 by cwillems          #+#    #+#             */
/*   Updated: 2018/09/25 14:17:29 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "get_next_line.h"
# include <stdlib.h>

typedef struct	s_push
{
	int value;
	struct s_push *next;
}				t_swap;

typedef struct	s_push_swap
{
	t_swap *a;
	t_swap *b;
	int	size;
}				t_push_swap;

int		create_stack(char	**contents, t_push_swap *ps);
int		error_checking(char	*tmp, t_swap *cmp);
int		cduplicates(int tp, t_swap *cmp);
void    add_list(t_push_swap *stacks, int value);
void	free2(char	***all);
int		derror(char *msg);
void	pa(t_push_swap *stacks);
void	pb(t_push_swap *stacks);
void	ra(t_push_swap *stacks);
void	rb(t_push_swap *stacks);
void	rr(t_push_swap *stacks);
void	sa(t_push_swap *stacks);
void	sb(t_push_swap *stacks);
void	ss(t_push_swap *stacks);
void	rra(t_push_swap *stacks);
void	rrb(t_push_swap *stacks);
void	rrr(t_push_swap *stacks);
int		next_line(t_push_swap *ps);
int		csort(t_push_swap *stacks);
int		minx(t_push_swap *ps);
int		maxx(t_push_swap *ps);
int		sort(t_push_swap *ps);
void	push_stackb(t_push_swap *ps);
void	push_stacka(t_push_swap *ps);
void	push_stack(t_push_swap *ps);
int		print_op(t_push_swap *ps, char *line);
void	create_size(t_push_swap *ps);
int		check_s(t_push_swap *ps);


#endif
