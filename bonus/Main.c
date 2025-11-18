/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:04:35 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 17:50:17 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

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
	if (check_args((const char **)(av)))
		return (write (2, "Error\n", 6), free_str(av, control), 1);
	if (control == false && ac == 2)
		return (0);
	start((const char **)av, &a, &b);
	free_str(av, control);
	if (!(is_sorted(a) && b == NULL))
		return (write (1, "KO\n", 3), exit_error(&a, &b, 2), 1);
	return (write (1, "OK\n", 3), exit_error(&a, &b, 0), 0);
}
