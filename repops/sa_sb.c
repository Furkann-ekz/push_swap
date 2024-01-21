/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:04:34 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 17:56:06 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *arr)
{
	long	temp;

	temp = arr->stack_a[1];
	arr->stack_a[1] = arr->stack_a[0];
	arr->stack_a[0] = temp;
	write (1, "sa\n", 3);
}
