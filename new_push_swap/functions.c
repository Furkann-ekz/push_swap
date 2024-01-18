/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:18:04 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/18 14:13:06 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_control(t_list *arr, long c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < arr->sentinel)
	{
		if (c == arr->stack_a[i])
			count++;
		i++;
	}
	return (count);
}

int	array_control(t_list *arr)
{
	int		i;
	long	c;

	i = 0;
	while (i < arr->sentinel)
	{
		c = arr->stack_a[i];
		if (num_control(arr, c) == 1)
		{
			if (c > 2147483647 || c < -2147483648)
				return (1);
			i++;
		}
		else
			return (1);
	}
	return (0);
}

int	arg_control(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			while (av[i][j] && white_spaces(av[i][j]) == 1)
				j++;
			if (av[i][j] && (av[i][j] == '-' || av[i][j] == '+'))
				j++;
			while (av[i][j] && (av[i][j] >= '0' && av[i][j] <= '9'))
				j++;
			if (av[i][j] && !(av[i][j] >= '0' && av[i][j] <= '9'))
				return (1);
		}
		j = 0;
		i++;
	}
	return (0);
}
