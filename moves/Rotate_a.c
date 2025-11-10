/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:23:39 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/10 17:32:22 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	ra(t_list **a)
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
}
