/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:35:34 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/16 14:14:12 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static int	*selection_sort(int *numbers, size_t size)
{
	int		temp;
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (numbers[i] > numbers[j])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	return (numbers);
}

static int	*create_abstract_array(int *numbers, t_list *list)
{
	t_list	*temp;
	size_t	size;
	int		i;

	i = 0;
	temp = list;
	size = strlen_for_stack(list);
	numbers = (int *)ft_calloc(size, sizeof(int));
	if (!numbers)
		exit_error(&list, NULL, 1);
	while (temp)
	{
		numbers[i] = temp->num;
		temp = temp->next;
		i++;
	}
	return (selection_sort(numbers, size));
}

void	get_require_index(t_list *list)
{
	t_list	*node;
	int		*numbers;
	int		i;

	numbers = NULL;
	numbers = create_abstract_array(numbers, list);
	node = list;
	i = 0;
	while (node)
	{
		while (node->num != numbers[i])
			i++;
		if (node->num == numbers[i])
			node->required_index = i;
		node = node->next;
		i = 0;
	}
	free(numbers);
	numbers = NULL;
}
