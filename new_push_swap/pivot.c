/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:58:42 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/18 14:20:15 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_error(t_list *arr)
{
	write (1, "wrong/same argument\n", 20);
	get_free(arr);
	free(arr);
	arr = NULL;
	exit (1);
}

int	white_spaces(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
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

long	pivot(t_list *arr)
{
	long	num;
	int		i;

	i = 0;
	arr->temp = (long *)malloc(sizeof(long) * (arr->sentinel));
	if (!arr->temp)
		return (0);
	while (i < arr->sentinel)
	{
		num = ft_number(arr);
		arr->temp[i] = num;
		i++;
	}
	i = 0;
	while (i < (arr->sentinel / 2))
		i++;
	num = arr->temp[i];
	arr->pvt_i = i;
	return (num);
}
