/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:27:11 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 18:01:31 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error2(t_list *arr)
{
	write (1, "sequential argument!\n", 21);
	get_free(arr);
	exit (1);
}

long	*b_creat(t_list *arr)
{
	int		i;
	long	*b;

	i = 0;
	b = (long *)malloc(sizeof(long) * arr->sentinel);
	if (!b)
		return (NULL);
	while (i < arr->sentinel)
		b[i] = 0;
	return (b);
}

int	main(int ac, char **av)
{
	t_list	*arr;

	arr = (t_list *)malloc(sizeof(t_list));
	if (!arr || ac <= 2)
		return (0);
	arr->sentinel = ac - 1;
	arr->a_count = ac - 1;
	arr->b_count = 0;
	arr->temp_count = ac - 1;
	if (arg_control(av) != 0)
		ft_error(arr);
	arr->stack_a = ft_creator(av, arr);
	if (array_control(arr) == 1)
		ft_error(arr);
	if (sort_control(arr) == 0)
		ft_error2(arr);
	sortemp(arr);
	arr->stack_a = ft_creator(av, arr);
	sorter(arr);
	get_free(arr);
}
