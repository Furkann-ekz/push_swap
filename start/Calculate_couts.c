/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculate_couts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:37:24 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/17 17:59:13 by fekiz            ###   ########.fr       */
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
