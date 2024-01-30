/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:02:00 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/30 21:36:14 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atoil(const char *str)
{
	int		i;
	long	sign;
	long	count;

	i = 0;
	sign = 1;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = (str[i] - 48) + (10 * count);
		i++;
	}
	return (count * sign);
}

static void	append_node(t_list **stack, int n)
{
	t_list	*node;
	t_list	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->next = NULL;
	node->nbr = n;
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack_a(t_list **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a);
		n = ft_atoil(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}

t_list	*get_cheapest(t_list *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheap)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_for_push(t_list **stack, t_list *top_node, char name)
{
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->med)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if (top_node->med)
				rb(stack);
			else
				rrb(stack);
		}
	}
}
