/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:04:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 17:36:54 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *arr)
{
	int		i;

	i = arr->a_count;
	while (i > 0)
	{
		arr->stack_a[i] = arr->stack_a[i - 1];
		i--;
	}
	arr->stack_a[0] = arr->stack_b[0];
	arr->a_count++;
	arr->b_count--;
	i = 0;
	while (i < arr->b_count)
	{
		arr->stack_b[i] = arr->stack_b[i + 1];
		i++;
	}
	write (1, "pa\n", 3);
}

long	*new_stacka(t_list	*arr)
{
	int		i;
	long	*a;

	i = 0;
	a = (long *)malloc(sizeof(long) * arr->a_count);
	if (!a)
		return (NULL);
	while (i < arr->a_count)
	{
		a[i] = arr->stack_a[i + 1];
		i++;
	}
	free(arr->stack_a);
	arr->stack_a = NULL;
	return (a);
}

long	*pb(t_list *arr)
{
	int		i;
	long	*b;

	arr->b_count++;
	b = (long *)malloc(sizeof(long) * arr->b_count + 1);
	if (!b)
		return (NULL);
	i = arr->b_count;
	if (i != 1)
	{
		while (i > 0)
		{
			b[i] = arr->stack_b[i - 1];
			i--;
		}
	}
	b[0] = arr->stack_a[0];
	arr->stack_a = new_stacka(arr);
	arr->a_count--;
	write (1, "pb\n", 3);
	free(arr->stack_b);
	return (b);
}
