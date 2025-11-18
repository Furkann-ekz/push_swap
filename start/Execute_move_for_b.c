/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execute_move_for_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:38:37 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 14:46:53 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static void	double_plus(t_list **node, t_list **a, t_list **b)
{
	while ((*node)->cost_a > 0 && (*node)->cost_b > 0)
	{
		rr(a, b, true);
		(*node)->cost_a--;
		(*node)->cost_b--;
	}
	if ((*node)->cost_a > 0)
	{
		while ((*node)->cost_a > 0)
		{
			ra(a, true);
			(*node)->cost_a--;
		}
	}
	else if ((*node)->cost_b > 0)
	{
		while ((*node)->cost_b > 0)
		{
			rb(b, true);
			(*node)->cost_b--;
		}
	}
}

static void	a_plus_b_minus(t_list **node, t_list **a, t_list **b)
{
	while ((*node)->cost_a > 0)
	{
		ra(a, true);
		(*node)->cost_a--;
	}
	while ((*node)->cost_b < 0)
	{
		rrb(b, true);
		(*node)->cost_b++;
	}
}

static void	a_minus_b_plus(t_list **node, t_list **a, t_list **b)
{
	while ((*node)->cost_a < 0)
	{
		rra(a, true);
		(*node)->cost_a++;
	}
	while ((*node)->cost_b > 0)
	{
		rb(b, true);
		(*node)->cost_b--;
	}
}

static void	double_minus(t_list **node, t_list **a, t_list **b)
{
	while ((*node)->cost_a < 0 && (*node)->cost_b < 0)
	{
		rrr(a, b, true);
		(*node)->cost_a++;
		(*node)->cost_b++;
	}
	if ((*node)->cost_a < 0)
	{
		while ((*node)->cost_a < 0)
		{
			rra(a, true);
			(*node)->cost_a++;
		}
	}
	else if ((*node)->cost_b < 0)
	{
		while ((*node)->cost_b < 0)
		{
			rrb(b, true);
			(*node)->cost_b++;
		}
	}
}

void	execute_move_for_b(t_list **a, t_list **b)
{
	t_list	*node;

	node = *b;
	while (node->cheapest == false)
		node = node->next;
	if (node->cost_a >= 0 && node->cost_b >= 0)
		double_plus(&node, a, b);
	else if (node->cost_a >= 0 && node->cost_b < 0)
		a_plus_b_minus(&node, a, b);
	else if (node->cost_a < 0 && node->cost_b >= 0)
		a_minus_b_plus(&node, a, b);
	else if (node->cost_a < 0 && node->cost_b < 0)
		double_minus(&node, a, b);
	pa(a, b, true);
}
