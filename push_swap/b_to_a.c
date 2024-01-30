/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:57:11 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/30 21:14:22 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_b(t_list *a, t_list *b)
{
	t_list	*current_a;
	t_list	*target;
	long	best_index;

	while (b)
	{
		best_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->nbr > b->nbr
				&& current_a->nbr < best_index)
			{
				best_index = current_a->nbr;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (best_index == LONG_MAX)
			b->target = find_min(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	init_nodes_b(t_list *a, t_list *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
