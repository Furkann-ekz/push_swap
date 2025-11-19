/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:44:22 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:06 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	rrb(t_list **b, bool print)
{
	t_list	*first;
	t_list	*middle;
	t_list	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	first = *b;
	last = find_last_node(*b);
	middle = last->prev;
	middle->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*b = last;
	if (print)
		write (1, "rrb\n", 4);
}
