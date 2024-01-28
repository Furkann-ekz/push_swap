/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:02:00 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/27 13:59:12 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **dst, t_list **src)
{
	t_list	*push;

	if (!*src)
		return ;
	push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push->prev = NULL;
	if (!*dst)
	{
		*dst = push;
		push->next = NULL;
	}
	else
	{
		push->next = *dst;
		push->next->prev = push;
		*dst = push;
	}
}

void	pa(t_list **a, t_list **b, bool print)
{
	push(a, b);
	if (!print)
		write (1, "pa\n", 3);
}

void	pb(t_list **b, t_list **a, bool print)
{
	push(b, a);
	if (!print)
		write (1, "pb\n", 3);
}

void	min_on_top(t_list **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->med)
			ra(a, false);
		else
			rra(a, false);
	}
}
