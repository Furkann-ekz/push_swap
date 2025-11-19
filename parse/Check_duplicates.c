/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:07:03 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:31 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

int	check_duplicates(const char **av)
{
	size_t	i;
	size_t	j;
	int		num1;
	int		num2;

	i = -1;
	while (av[++i])
	{
		j = i;
		num1 = ft_atoi(av[i]);
		while (av[++j])
		{
			num2 = ft_atoi(av[j]);
			if (num1 == num2)
				return (1);
		}
	}
	return (0);
}
