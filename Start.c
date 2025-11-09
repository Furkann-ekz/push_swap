/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:38:31 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/09 17:00:28 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	start(const char **av)
{
	size_t	i;
	t_list	*a;
	t_list	*b;
	t_list	*node;

	a = NULL;
	b = NULL;
	node = NULL;
	i = -1;
	while (av[++i])
	{
		node = new_node(ft_atoi(av[i]));
		if (!node)
			exit_error(&a, NULL, 1);
		add_node_to_stack(&a, node);
	}
	check_sorted(&a);
}
