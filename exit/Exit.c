/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:47:49 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/10 17:41:52 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	exit_error(t_list **a, t_list **b, int exit_num)
{
	if (a && *a)
	{
		frees(*a);
		*a = NULL;
	}
	if (b && *b)
	{
		frees(*b);
		*b = NULL;
	}
	if (exit_num != 0)
		write (2, "Error\n", 6);
	exit (exit_num);
}
