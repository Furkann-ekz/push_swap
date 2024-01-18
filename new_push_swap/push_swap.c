/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:27:11 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/18 14:23:57 by fekiz            ###   ########.fr       */
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
// pvt'a göre push b veya diğer sıralamalar başlayacak int i = 0 oluşturup eğer stack_a[i] < pivot | stack_a[i] -> push_b

long	push_swap(t_list *arr)
{
	static int	count;
	int			i;

	i = 0;
	count = 0;
	arr->stack_b = (long *)malloc(sizeof(long) * (arr->sentinel));
	if (!arr->stack_b)
		return (0);
	printf("\n\n***%ld***\n\n", arr->stack_a[0]);
	if (arr->pvt > arr->stack_a[i])
		count += pb(arr);
	printf("%ld\n", arr->stack_b[0]);
	return (1);
}

void	pvt_crt(t_list *arr, char **av)
{
	if (array_control(arr) == 1)
		ft_error(arr);
	else
		arr->pvt = pivot(arr);
	free(arr->stack_a);
	arr->stack_a = ft_creator(av, arr);
}

int	main(int ac, char **av)
{
	t_list	*arr;

	arr = (t_list *)malloc(sizeof(t_list));
	if (!arr)
		return (0);
	arr->sentinel = ac - 1;
	if (arg_control(av) != 0)
		ft_error(arr);
	arr->stack_a = ft_creator(av, arr);
	pvt_crt(arr, av);
	push_swap(arr);
	//printf("\n\n***%d***\n\n", arr->pvt_i);
}
