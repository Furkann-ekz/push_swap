/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:27:11 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/16 17:16:03 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_creator(char **av, int sentinel)
{
	long	*array;
	int		i;
	int		j;

	i = 1;
	j = 0;
	array = (long *)malloc(sizeof(long) * sentinel);
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
// pvt'a göre push b veya diğer sıralamalar başlayacak int i = 0 oluşturup eğer stack_a[i] < pivot | stack_a[i] -> push_b
long	*push_swap(long *stack_a, long *stack_b, long pvt, int *sentinel)
{
	int	i;
	int	count;

	i = 0;
	count = *sentinel;
	stack_b = (long *)malloc(sizeof(long) * count);
	if (!stack_b)
		return (NULL);
	if (pvt > stack_a[i])
		pb(stack_a, stack_b, sentinel);
	return (stack_a);
}

long	pvt_crt(long *array, int *sentinel, long *temp, long pvt)
{
	int	c;

	c = *sentinel;
	if (array_control(array, c) == 1)
		ft_error(1);
	else
		pvt = pivot(temp, c);
	push_swap(array, temp, pvt, sentinel);
	return (pvt);
}

int	main(int ac, char **av)
{
	long	*temp;
	long	*array;
	long	pvt;
	int		*sentinel;

	ac--;
	sentinel = &ac;
	pvt = 0;
	temp = NULL;
	array = NULL;
	if (arg_control(av) == 0)
	{
		temp = ft_creator(av, *sentinel);
		array = ft_creator(av, *sentinel);
	}
	else
		ft_error(1);
	pvt_crt(array, sentinel, temp, pvt);
	// push_swap(array, temp, pvt);
}
