/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:00:48 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:44 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->required_index;
	second = (*a)->next->required_index;
	third = (*a)->next->next->required_index;
	if (first < third && third < second)
	{
		sa(a, true);
		ra(a, true);
	}
	else if (first > second && third > first)
		sa(a, true);
	else if (first > third && second > first)
		rra(a, true);
	else if (first > second && second > third)
	{
		sa(a, true);
		rra(a, true);
	}
	else if (first > third && third > second)
		ra(a, true);
}
