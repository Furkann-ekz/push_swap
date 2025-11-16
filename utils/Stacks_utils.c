/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stacks_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:25:18 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/16 14:13:20 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

size_t	strlen_for_stack(t_list *list)
{
	size_t	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

t_list	*find_last_node(t_list *a)
{
	if (!a)
		return (NULL);
	while (a->next)
		a = a->next;
	return (a);
}

t_list	*find_max_index_node(t_list **b)
{
	t_list	*node;
	t_list	*find;
	long	required;

	required = -1;
	node = *b;
	find = NULL;
	while (node)
	{
		if (node->required_index > required)
		{
			required = node->required_index;
			find = node;
		}
		node = node->next;
	}
	if (required == -1)
		return (NULL);
	return (find);
}

void	update_physical_index(t_list *list)
{
	size_t	i;

	i = 0;
	while (list)
	{
		list->index = i;
		list = list->next;
		i++;
	}
}
