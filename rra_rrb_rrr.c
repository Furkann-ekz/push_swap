/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:19:30 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/27 13:54:48 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_list **stack)
{
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_list **a, bool print)
{
	rev_rotate(a);
	if (!print)
		write (1, "rra\n", 4);
}

void	rrb(t_list **b, bool print)
{
	rev_rotate(b);
	if (!print)
		write (1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		write (1, "rrr\n", 4);
}
