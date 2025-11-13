/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:00:48 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/13 14:25:13 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	sort_three(t_list **a, t_list **b)
{
	int	first;
	int	second;
	int	third;

	if (!b || !(*b) || !a || !(*a) || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first == 0 && second == 2 && third == 1)
	{
		sa(a, true);
		ra(a, true);
	}
	else if (first == 1 && second == 0 && third == 2)
		sa(a, true);
	else if (first == 1 && second == 2 && third == 0)
		rra(a, true);
	else if (first == 2 && second == 1 && third == 0)
	{
		sa(a, true);
		rra(a, true);
	}
	else if (first == 2 && second == 0 && third == 1)
		ra(a, true);
}
