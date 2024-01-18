/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:57:15 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/18 14:24:54 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_list *arr)
{
	int		i;
	long	tmp;

	i = 0;
	i = arr->sentinel - 1;
	while (i > 0)
	{
		tmp = arr->stack_a[i];
		arr->stack_a[i] = arr->stack_a[i - 1];
		arr->stack_a[i - 1] = tmp;
	}
	arr->stack_a[i] = arr->stack_b[0];
	write (1, "pa\n", 3);
	return (1);
}

int	pb(t_list *arr)
{
	int		i;

	i = 0;
	arr->stack_b[0] = arr->stack_a[0];
	while (i < arr->sentinel)
	{
		arr->stack_a[i] = arr->stack_a[i + 1];
		i++;
	}
	write (1, "pb\n", 3);
	return (1);
}
