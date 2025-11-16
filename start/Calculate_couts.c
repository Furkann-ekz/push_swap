/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculate_couts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:37:24 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/16 18:45:50 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static t_list	*find_target(t_list *a_now, t_list **b)
{
	t_list	*b_now;
	t_list	*target;
	long	target_index;

	b_now = *b;
	target = NULL;
	target_index = LONG_MIN;
	while (b_now)
	{
		if (b_now->required_index < a_now->required_index
			&& b_now->required_index > target_index)
		{
			target_index = b_now->required_index;
			target = b_now;
		}
		b_now = b_now->next;
	}
	return (target);
}

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

void	move_max_to_top_of_b(t_list **b)
{
	t_list	*cheapest_node;
	size_t	size;
	long	cost;

	size = strlen_for_stack(*b);
	cheapest_node = find_max_index_node(b);
	if (cheapest_node->index <= size / 2)
		cost = cheapest_node->index;
	else
		cost = (size - cheapest_node->index) * -1;
	if (cost > 0)
	{
		while (--cost >= 0)
			rb(b, true);
	}
	else
	{
		while (++cost <= 0)
			rrb(b, true);
	}
}

void	set_targets_for_a(t_list **a, t_list **b)
{
	t_list	*a_now;
	t_list	*target;

	a_now = *a;
	while (a_now)
	{
		target = find_target(a_now, b);
		if (target == NULL)
			a_now->target = find_max_index_node(b);
		else
			a_now->target = target;
		a_now = a_now->next;
	}
}
