/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:03:51 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 17:56:03 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *arr)
{
	int		i;
	long	temp;

	i = arr->a_count - 1;
	temp = arr->stack_a[i];
	while (i > 0)
	{
		arr->stack_a[i] = arr->stack_a[i - 1];
		i--;
	}
	arr->stack_a[0] = temp;
	write (1, "rra\n", 4);
}
