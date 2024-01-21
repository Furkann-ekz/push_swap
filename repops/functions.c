/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:02:00 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 18:01:34 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	white_spaces(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	get_free(t_list *arr)
{
	if (arr->stack_a)
	{
		free(arr->stack_a);
		arr->stack_a = NULL;
	}
	if (arr->stack_b)
	{
		free(arr->stack_b);
		arr->stack_b = NULL;
	}
	if (arr->temp)
	{
		free(arr->temp);
		arr->temp = NULL;
	}
}

long	ft_number(t_list *arr)
{
	int		i;
	long	num;

	i = 0;
	while (i < arr->sentinel)
	{
		num = arr->stack_a[i];
		if (little_controler(num, arr) != 0)
			i = little_controler(num, arr);
		else if (little_controler(num, arr) == 0)
			break ;
	}
	i = 0;
	while (num != arr->stack_a[i])
		i++;
	arr->stack_a[i] = 3000000000;
	return (num);
}

int	little_controler(long cont, t_list *arr)
{
	int	i;

	i = 0;
	while (i < arr->sentinel)
	{
		if (cont <= arr->stack_a[i])
			i++;
		else
			return (i);
	}
	return (0);
}

void	ft_error(t_list *arr)
{
	write (1, "wrong/same argument!\n", 21);
	get_free(arr);
	exit(1);
}
