/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:32:57 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:00:58 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

void	start(const char **av, t_list **a, t_list **b)
{
	size_t	i;
	t_list	*node;

	node = NULL;
	i = -1;
	while (av[++i])
	{
		node = new_node(ft_atoi(av[i]));
		node->index = i;
		if (!node)
			exit_error(a, NULL, 1);
		add_node_to_stack(a, node);
	}
	process_commands(a, b);
}
