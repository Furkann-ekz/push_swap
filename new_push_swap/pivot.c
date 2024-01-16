/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:58:42 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/15 11:52:06 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int c)
{
	if (c == 1)
		write (1, "wrong/same argument\n", 20);
	exit (1);
}

int	white_spaces(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	little_controler(long cont, int sentinel, long *array)
{
	int		i;

	i = 0;
	while (i < sentinel)
	{
		if (cont <= array[i])
			i++;
		else
			return (i);
	}
	return (0);
}

long	ft_number(int sentinel, long *array)
{
	int		i;
	long	num;

	i = 0;
	while (i < sentinel)
	{
		num = array[i];
		if (little_controler(num, sentinel, array) != 0)
			i = little_controler(num, sentinel, array);
		else if (little_controler(num, sentinel, array) == 0)
			break ;
	}
	i = 0;
	while (num != array[i])
		i++;
	array[i] = 3000000000;
	return (num);
}

long	pivot(long *array, int sentinel)
{
	long	*arr;
	long	num;
	int		count;

	count = 0;
	arr = (long *)malloc(sizeof(long) * sentinel);
	if (!arr)
		return (0);
	while (count < sentinel)
	{
		num = ft_number(sentinel, array);
		arr[count] = num;
		count++;
	}
	count = 0;
	while (count < (sentinel / 2))
		count++;
	num = arr[count];
	free(arr);
	free(array);
	return (num);
}
