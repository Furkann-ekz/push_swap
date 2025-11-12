/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:24:12 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/12 15:37:30 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	pa(t_list **a, t_list **b, bool print)
{
	t_list	*node_a;
	t_list	*node_b;

	if (!a || !b || !(*a) || !(*b) || !(*a)->next || !(*b)->next)
		return ;
	node_a = *a;
	node_b = *b;
	node_b->prev = node_a;
	node_a->next = node_b;
	node_a->prev = NULL;
	if (print)
		write (1, "pb\n", 3);
}
