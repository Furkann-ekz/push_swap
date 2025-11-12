/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:24:48 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/12 15:43:01 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	pb(t_list **a, t_list **b, bool print)
{
	t_list	*node_a;
	t_list	*node_b;
	t_list	*new_first_a;

	if (!a || !(*a))
		return ;
	if (print)
		write (1, "pb\n", 3);
	node_a = *a;
	new_first_a = (*a)->next;
	if (*b)
		node_b = *b;
	if (node_b)
	{
		node_a->next = node_b;
		node_a->prev = NULL;
		node_b->prev = node_a;
	}
	new_first_a->prev = NULL;
	(*a) = new_first_a;
	(*b) = node_a;
}
