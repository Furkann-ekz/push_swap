/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_cheapest_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:51:43 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/16 18:46:07 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	ft_max(int num1, int num2)
{
	if (num1 >= num2)
		return (num1);
	return (num2);
}

void	set_cheapest_node(t_list **a)
{
	t_list	*node;
	t_list	*cheapest;
	long	total_cost;
	long	min_cost;

	node = *a;
	cheapest = NULL;
	min_cost = LONG_MAX;
	while (node)
	{
		node->cheapest = false;
		if ((node->cost_a >= 0 && node->cost_b >= 0)
			|| (node->cost_a < 0 && node->cost_b < 0))
			total_cost = ft_max(ft_abs(node->cost_a), ft_abs(node->cost_b));
		else
			total_cost = ft_abs(node->cost_a) + ft_abs(node->cost_b);
		if (total_cost < min_cost)
		{
			min_cost = total_cost;
			cheapest = node;
		}
		node = node->next;
	}
	cheapest->cheapest = true;
}
