/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculate_couts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:37:24 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 14:31:43 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	calculate_cost_for_a(t_list **a, t_list **b, size_t size_a)
{
	t_list	*node_a;
	size_t	position_a;
	size_t	position_target_b;
	size_t	size_b;

	node_a = *a;
	size_b = strlen_for_stack(*b);
	while (node_a)
	{
		position_a = node_a->index;
		if (position_a <= size_a / 2)
			node_a->cost_a = position_a;
		else
			node_a->cost_a = (size_a - position_a) * -1;
		position_target_b = node_a->target->index;
		if (position_target_b <= size_b / 2)
			node_a->cost_b = position_target_b;
		else
			node_a->cost_b = (size_b - position_target_b) * -1;
		node_a = node_a->next;
	}
}

void	calculate_cost_for_b(t_list **a, t_list **b, size_t size_b)
{
	t_list	*node_b;
	size_t	position_b;
	size_t	position_target_a;
	size_t	size_a;

	node_b = *b;
	size_a = strlen_for_stack(*a);
	while (node_b)
	{
		position_b = node_b->index;
		if (position_b <= size_b / 2)
			node_b->cost_b = position_b;
		else
			node_b->cost_b = (size_b - position_b) * -1;
		position_target_a = node_b->target->index;
		if (position_target_a <= size_a / 2)
			node_b->cost_a = position_target_a;
		else
			node_b->cost_a = (size_a - position_target_a) * -1;
		node_b = node_b->next;
	}
}
