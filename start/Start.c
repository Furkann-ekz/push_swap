/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:38:31 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/15 16:18:39 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"
#include "stdio.h"

static void	continued(t_list **a, t_list **b)
{
	pb(a, b, 1);
	pb(a, b, 1);
	while (strlen_for_stack(*a) > 3)
	{
		set_targets_for_a(a, b);
	}
}

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
		sa(a, true);
	if (strlen_for_stack(*a) == 3)
	{
		sort_three(a, b);
		return ;
	}
	continued(a, b);
}
