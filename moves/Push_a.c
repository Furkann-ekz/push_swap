/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:24:12 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:02 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static void	a_is_empty(t_list **a, t_list **b)
{
	t_list	*b_first;
	t_list	*b_next;

	b_next = NULL;
	if ((*b)->next)
		b_next = (*b)->next;
	b_first = *b;
	b_first->next = NULL;
	b_first->prev = NULL;
	*a = b_first;
	if (b_next)
		b_next->prev = NULL;
	*b = b_next;
}

static void	a_is_not_empty(t_list **a, t_list **b)
{
	t_list	*a_first;
	t_list	*b_first;
	t_list	*b_second;

	b_second = NULL;
	if ((*b)->next)
		b_second = (*b)->next;
	b_first = *b;
	a_first = *a;
	(*a)->prev = *b;
	(*b)->next = *a;
	(*b)->prev = NULL;
	if (b_second)
		b_second->prev = NULL;
	*a = *b;
	*b = b_second;
}

void	pa(t_list **a, t_list **b, bool print)
{
	if (!b || !(*b))
		return ;
	if (print)
		write (1, "pa\n", 3);
	if (!a || !(*a))
		a_is_empty(a, b);
	else
		a_is_not_empty(a, b);
}
