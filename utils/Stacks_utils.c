/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stacks_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:25:18 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/17 18:05:47 by fekiz            ###   ########.fr       */
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

void	update_physical_index(t_list **list)
{
	t_list	*node;
	size_t	i;

	i = 0;
	node = *list;
	while (node)
	{
		node->index = i;
		node = node->next;
		i++;
	}
}
