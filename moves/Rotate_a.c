/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:23:39 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:09 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	ra(t_list **a, bool print)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = *a;
	second = first->next;
	last = find_last_node(*a);
	second->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
	*a = second;
	if (print)
		write (1, "ra\n", 3);
}
