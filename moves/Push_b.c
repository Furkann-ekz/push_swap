/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:24:48 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/16 18:45:20 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static void	b_is_empty(t_list **a, t_list **b)
{
	t_list	*a_first;
	t_list	*a_second;

	a_second = NULL;
	a_first = *a;
	if ((*a)->next)
		a_second = (*a)->next;
	*b = a_first;
	(*b)->prev = NULL;
	(*b)->next = NULL;
	if (a_second)
		a_second->prev = NULL;
	*a = a_second;
}

static void	b_is_not_empty(t_list **a, t_list **b)
{
	t_list	*a_first;
	t_list	*a_second;
	t_list	*b_first;

	a_second = NULL;
	if ((*a)->next)
		a_second = (*a)->next;
	a_first = *a;
	b_first = *b;
	(*b)->prev = *a;
	(*a)->next = *b;
	(*a)->prev = NULL;
	if (a_second)
		a_second->prev = NULL;
	*b = *a;
	*a = a_second;
}

void	pb(t_list **a, t_list **b, bool print)
{
	if (!a || !(*a))
		return ;
	if (print)
		write (1, "pb\n", 3);
	if (!b || !(*b))
		b_is_empty(a, b);
	else
		b_is_not_empty(a, b);
}
