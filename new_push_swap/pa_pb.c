/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:57:15 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/15 11:53:12 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(long *stack_a, long *stack_b, static int sentinel)
{
	int			i;
	long		temp;

	i = 0;
	stack_b[0] = stack_a[0];
	sentinel--;
	while (i < sentinel)
	{
		temp = stack_a[i];
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i] = temp;
}
