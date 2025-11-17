/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Find_min_max_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:05:55 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/17 18:06:01 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

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