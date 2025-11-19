/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:38:42 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 13:35:37 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

static bool	for_rotates(char *str, t_list **a, t_list **b)
{
	if (!ft_strcmp(str, "ra"))
		ra(a, false);
	else if (!ft_strcmp(str, "rb"))
		rb(b, false);
	else if (!ft_strcmp(str, "rr"))
		rr(a, b, false);
	else if (!ft_strcmp(str, "rra"))
		rra(a, false);
	else if (!ft_strcmp(str, "rrb"))
		rrb(b, false);
	else if (!ft_strcmp(str, "rrr"))
		rrr(a, b, false);
	else
		return (true);
	return (false);
}

bool	execute_command(char *str, t_list **a, t_list **b)
{
	if (!str)
		return (false);
	if (!ft_strcmp(str, "sa"))
		sa(a, false);
	else if (!ft_strcmp(str, "sb"))
		sb(b, false);
	else if (!ft_strcmp(str, "ss"))
		ss(a, b, false);
	else if (!ft_strcmp(str, "pa"))
		pa(a, b, false);
	else if (!ft_strcmp(str, "pb"))
		pb(a, b, false);
	else if (for_rotates(str, a, b))
		return (true);
	return (false);
}
