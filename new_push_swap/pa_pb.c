/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:57:15 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/16 17:17:12 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(long *stack_a, long *stack_b, int *sentinel)
{
	int		i;
	int		count;
	long	temp;

	i = 0;
	count = *sentinel;
	stack_b[0] = stack_a[0];
	count--;
	while (i < count)
	{
		temp = stack_a[i];
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i] = temp;
}
