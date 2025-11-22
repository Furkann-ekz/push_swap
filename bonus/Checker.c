/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:04:35 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/22 16:33:02 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

static bool	are_we_need_split(char **av)
{
	int		i;
	int		j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			if (av[i][j] == ' ' || (av[i][j] >= 9 && av[i][j] <= 13))
				return (true);
	}
	return (false);
}

static bool	is_sorted(t_list *list)
{
	int		num;

	if (!list || !list->next)
		return (true);
	while (list->next)
	{
		num = list->num;
		list = list->next;
		if (num > list->num)
			return (false);
	}
	return (true);
}

static void	controller_edges(char **av, bool control)
{
	if (!control)
		return ;
	if (double_pointer_strlen(av) < 2)
	{
		free_str(av, control);
		exit_error(NULL, NULL, 0);
	}
	if (check_args((av)))
	{
		write (2, "Error\n", 6);
		free_str(av, control);
		exit_error(NULL, NULL, 1);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	bool	control;

	a = NULL;
	b = NULL;
	control = false;
	if (ac < 2)
		return (0);
	else if (are_we_need_split(av + 1))
		control = true;
	if (control)
		av = create_new_args(av + 1);
	else
		av = av + 1;
	controller_edges(av, control);
	if (control == false && ac == 2)
		return (0);
	if (start(av, &a, &b, control))
		return (free_str(av, control), exit_error(&a, &b, 1), 1);
	free_str(av, control);
	if (!(is_sorted(a) && b == NULL))
		return (write (1, "KO\n", 3), exit_error(&a, &b, 2), 1);
	return (write (1, "OK\n", 3), exit_error(&a, &b, 0), 0);
}
