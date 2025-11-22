/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:32:57 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/22 16:33:19 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

bool	start(char **av, t_list **a, t_list **b)
{
	size_t	i;
	t_list	*node;

	node = NULL;
	i = -1;
	while (av[++i])
	{
		node = new_node(ft_atoi(av[i]), av);
		node->index = i;
		if (!node)
			return (true);
		add_node_to_stack(a, node);
	}
	if (process_commands(a, b))
		return (true);
	return (false);
}
