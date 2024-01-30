/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:19:30 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/30 21:06:54 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_syntax(char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
		return (1);
	if ((str[i] == '+' || str[i] == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	error_duplicate(t_list *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->nbr = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_list **a)
{
	free_stack(a);
	write (1, "Error\n", 6);
	exit(1);
}
