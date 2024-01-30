/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_Sb_ss_st.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:03:05 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/30 21:03:57 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **head)
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_list	**a)
{
	swap(a);
	write (1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write (1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write (1, "ss\n", 3);
}

void	sort_three(t_list **a)
{
	t_list	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}
