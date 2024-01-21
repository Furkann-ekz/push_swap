/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacka_crt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:57:11 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 15:45:11 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_creator(char **av, t_list *arr)
{
	int		i;
	int		j;
	long	*array;

	i = 1;
	j = 0;
	array = (long *)malloc(sizeof(long) * arr->sentinel);
	if (!array)
		return (NULL);
	while (av[i])
	{
		array[j] = ft_atoi(av[i]);
		j++;
		i++;
	}
	return (array);
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

int	sort_control(t_list *arr)
{
	int		i;
	long	num;

	i = 0;
	while (i < arr->sentinel)
	{
		num = arr->stack_a[i];
		if (little_controler(num, arr) == 0)
			i++;
		else
			return (1);
	}
	return (0);
}
