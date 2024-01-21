/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:03:05 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 17:55:53 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *arr)
{
	int		i;
	long	temp;

	i = 0;
	temp = arr->stack_a[0];
	while (i < arr->a_count - 1)
	{
		arr->stack_a[i] = arr->stack_a[i + 1];
		i++;
	}
	arr->stack_a[i] = temp;
	write (1, "ra\n", 3);
}
