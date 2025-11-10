/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Create_stack_and_nodes.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:25:39 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/09 16:13:20 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

t_list	*new_node(int num)
{
	t_list	*node;

	node = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!node)
		return (NULL);
	node->num = num;
	node->cost_a = -1;
	node->cost_b = -1;
	node->index = -1;
	node->target = NULL;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

static t_list	*find_last_node(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	add_node_to_stack(t_list **stack, t_list *new_node)
{
	t_list	*last_node;

	if (!stack)
		return ;
	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	last_node = find_last_node(*stack);
	last_node->next = new_node;
	new_node->prev = last_node;
}
