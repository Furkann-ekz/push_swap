/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:38:31 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 16:11:04 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static void	continued(t_list **a, t_list **b)
{
	pb(a, b, 1);
	pb(a, b, 1);
	while (strlen_for_stack(*a) > 3)
	{
		update_physical_index(a);
		update_physical_index(b);
		set_targets_for_a(a, b);
		calculate_cost_for_a(a, b, strlen_for_stack(*a));
		set_cheapest_node_for_a(a);
		execute_move_for_a(a, b);
	}
	sort_three(a);
	while (strlen_for_stack(*b) > 0)
	{
		update_physical_index(a);
		update_physical_index(b);
		set_targets_for_b(a, b);
		calculate_cost_for_b(a, b, strlen_for_stack(*b));
		set_cheapest_node_for_b(b);
		execute_move_for_b(a, b);
	}
	update_physical_index(a);
	final_spin(a);
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
		node->index = i;
		if (!node)
			exit_error(a, NULL, 1);
		add_node_to_stack(a, node);
	}
	check_sorted(a);
	get_require_index(*a);
	(void)b;
	if (strlen_for_stack(*a) == 2)
		return (sa(a, true));
	if (strlen_for_stack(*a) == 3)
	{
		sort_three(a);
		return ;
	}
	continued(a, b);
}
