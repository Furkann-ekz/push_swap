/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:24:19 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:04 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	rra(t_list **a, bool print)
{
	t_list	*first;
	t_list	*middle;
	t_list	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = *a;
	last = find_last_node(*a);
	middle = last->prev;
	middle->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*a = last;
	if (print)
		write (1, "rra\n", 4);
}
