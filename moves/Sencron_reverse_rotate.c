/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sencron_reverse_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:43:38 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:19 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	rrr(t_list **a, t_list **b, bool print)
{
	rra(a, false);
	rrb(b, false);
	if (print)
		write (1, "rrr\n", 4);
}
