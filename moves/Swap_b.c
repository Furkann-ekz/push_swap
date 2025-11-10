/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:20:29 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/10 15:35:26 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	sb(t_list **b)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;

	if (!b || !*b || !(*b)->next)
		return ;
	first_node = *b;
	second_node = first_node->next;
	if (second_node->next)
		third_node = second_node->next;
	else
		third_node = NULL;
	first_node->next = third_node;
	first_node->prev = second_node;
	second_node->next = first_node;
	second_node->prev = NULL;
	if (third_node)
		third_node->prev = first_node;
	*b = second_node;
}
