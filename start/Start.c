/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:38:31 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/10 15:42:54 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include "stdio.h"

// static void	start_two(t_list **a, t_list **b)
// {}

void	first_start(const char **av, t_list **a, t_list **b)
{
	size_t	i;
	t_list	*node;

	node = NULL;
	i = -1;
	while (av[++i])
	{
		node = new_node(ft_atoi(av[i]));
		if (!node)
			exit_error(a, NULL, 1);
		add_node_to_stack(a, node);
	}
	check_sorted(a);
	get_index(*a);
	(void)b;
	if (strlen_for_stack(*a) == 2)
		sa(a);
	if (strlen_for_stack(*a) == 3)
	{
		sort_three(*a);
		return ;
	}
	start_two(a, b);
}
