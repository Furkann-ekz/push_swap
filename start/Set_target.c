/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_target.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:49:24 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 14:14:49 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static t_list	*find_target_for_a(t_list *a_now, t_list **b)
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

void	set_targets_for_a(t_list **a, t_list **b)
{
	t_list	*node_a;
	t_list	*target;

	node_a = *a;
	while (node_a)
	{
		target = find_target(node_a, b);
		if (target == NULL)
			node_a->target = find_max_index_node(b);
		else
			node_a->target = target;
		node_a = node_a->next;
	}
}

static t_list	*find_target_for_b(t_list *node_b, t_list **a)
{
	t_list	*node_a;
	t_list	*target;
	long	target_index;

	node_a = *a;
	target = NULL;
	target_index = LONG_MIN;
	while (node_a)
	{
		if (node_a->required_index < node_b->required_index
			&& node_a->required_index > target_index)
		{
			target_index = node_a->required_index;
			target = node_a;
		}
		node_a = node_a->next;
	}
	return (target);
}

void	set_targets_for_b(t_list **a, t_list **b)
{
	t_list	*node_b;
	t_list	*target;

	node_b = *b;
	while (node_b)
	{
		target = find_target_for_b(node_b, a);
		if (target == NULL)
			node_b->target = find_min_index_node(a);
		else
			node_b->target = target;
		node_b = node_b->next;
	}
}
