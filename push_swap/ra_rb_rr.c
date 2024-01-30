/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:04:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/30 20:56:06 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_list **a)
{
	rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_list **b)
{
	rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write (1, "rr\n", 3);
}
