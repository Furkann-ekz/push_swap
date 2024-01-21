/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:19:30 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 17:43:19 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortemp(t_list *arr)
{
	long	num;
	int		i;

	i = 0;
	arr->temp = (long *)malloc(sizeof(long) * (arr->sentinel));
	if (!arr->temp)
		return ;
	while (i < arr->sentinel)
	{
		num = ft_number(arr);
		arr->temp[i] = num;
		i++;
	}
	free(arr->stack_a);
	return ;
}

void	tmpra(t_list *arr)
{
	int		i;
	long	*tmp;

	i = 0;
	arr->temp_count--;
	tmp = (long *)malloc(sizeof(long) * arr->temp_count);
	if (!tmp)
		return ;
	while (i < arr->temp_count)
	{
		tmp[i] = arr->temp[i + 1];
		i++;
	}
	free(arr->temp);
	arr->temp = tmp;
}

void	sorter(t_list *arr)
{
	int	i;

	while (arr->a_count > 2)
	{
		i = 0;
		while (arr->temp[0] != arr->stack_a[i])
			i++;
		if (i <= arr->a_count / 2)
		{
			while (arr->temp[0] != arr->stack_a[0])
				ra(arr);
			arr->stack_b = pb(arr);
			tmpra(arr);
		}
		else if (i >= arr->a_count / 2)
		{
			while (arr->temp[0] != arr->stack_a[0])
				rra(arr);
			arr->stack_b = pb(arr);
			tmpra(arr);
		}
	}
	a_sort(arr);
	a_push(arr);
}

void	a_push(t_list *arr)
{
	int	i;
	int	j;

	i = -1;
	j = arr->b_count;
	while (++i < j)
		pa(arr);
}

void	a_sort(t_list *arr)
{
	if (arr->stack_a[0] < arr->stack_a[1])
		ra(arr);
}
