/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Final.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:23:45 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:02:05 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	final_spin(t_list **a)
{
	t_list	*node;
	size_t	size;
	size_t	index;
	int		cost;

	node = *a;
	while (node)
	{
		if (node->required_index == 0)
			break ;
		node = node->next;
	}
	size = strlen_for_stack(*a);
	index = node->index;
	if (index <= size / 2)
		cost = index;
	else
		cost = (size - index) * -1;
	if (cost > 0)
		while (--cost >= 0)
			ra(a, true);
	else
		while (++cost <= 0)
			rra(a, true);
}
