/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   All_couts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:37:24 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/15 16:13:54 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

t_list	*find_max_index_node(t_list **b)
{
	t_list	*node;
	t_list	*find;
	long	index;

	index = -1;
	node = *b;
	find = NULL;
	while (node)
	{
		if (node->index > index)
		{
			index = node->index;
			find = node;
		}
		node = node->next;
	}
	if (index == -1)
		return (NULL);
	return (find);
}

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
		if (b_now->index < a_now->index && b_now->index > target_index)
		{
			target_index = b_now->index;
			target = b_now;
		}
		b_now = b_now->next;
	}
	return (target);
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
