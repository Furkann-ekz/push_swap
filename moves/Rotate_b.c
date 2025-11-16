/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:39:25 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/16 16:00:52 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	rb(t_list **b, bool print)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	first = *b;
	second = first->next;
	last = find_last_node(*b);
	second->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
	*b = second;
	if (print)
		write (1, "rb\n", 3);
}
