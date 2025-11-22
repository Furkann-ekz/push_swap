/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Free_allocations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:54:45 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/22 16:21:00 by fekiz            ###   ########.fr       */
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

void	free_str(char **str, bool control)
{
	int	i;

	i = 0;
	if (!str || control == false)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
