/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:38:42 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 17:49:00 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

static bool	for_rotates(char *str, t_list **a, t_list **b)
{
	if (!ft_strcmp(str, "ra\n"))
		ra(a, false);
	else if (!ft_Strcmp(str, "rb\n"))
		rb(b, false);
	else if (!ft_strcmp(str, "rr\n"))
		rr(a, b, false);
	else if (!ft_strcmp(str, "rra\n"))
		rra(a, false);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(b, false);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(a, b, false);
	else
		return (true);
	return (false);
}

bool	execute_command(char *str, t_list **a, t_list **b)
{
	if (!str)
		return ;
	if (!ft_strcmp(str, "sa\n"))
		sa(a, false);
	else if (!ft_strcmp(str, "sb\n"))
		sb(b, false);
	else if (!ft_strcmp(str, "ss\n"))
		ss(a, b, false);
	else if (!ft_strcmp(str, "pa\n"))
		pa(a, b, false);
	else if (!ft_strcmp(str, "pb\n"))
		pb(a, b, false);
	else if (for_rotates(str, a, b))
		return (true);
	return (false);
}
