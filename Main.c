/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:04:14 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:02:25 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static void	free_str(char **str, bool control)
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
	first_start((const char **)av, &a, &b);
	free_str(av, control);
	exit_error(&a, &b, 0);
}
