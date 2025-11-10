/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:14:01 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/10 17:42:23 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

void	check_sorted(t_list **list)
{
	t_list	*temp;
	int		num;

	if (!list || !(*list) || !(*list)->next)
		return ;
	temp = *list;
	while (temp->next)
	{
		num = temp->num;
		temp = temp->next;
		if (num > temp->num)
			return ;
	}
	exit_error(list, NULL, 0);
}
