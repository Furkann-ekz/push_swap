/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Free_allocations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:54:45 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:01 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	frees(t_list *list)
{
	t_list	*temp;

	temp = list;
	if (!list)
		return ;
	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
