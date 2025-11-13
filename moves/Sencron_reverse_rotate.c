/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sencron_reverse_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:43:38 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/13 15:45:26 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	rrr(t_list **a, t_list **b, bool print)
{
	if (print)
		write (1, "rrr\n", 4);
	rra(a, false);
	rrb(b, false);
}
