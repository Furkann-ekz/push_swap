/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:23:01 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 16:19:37 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static int	for_invalid_characters(const char **av)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (!(av[i][j] >= '0' && av[i][j] <= '9')
				&& av[i][j] != '+' && av[i][j] != '-')
				return (1);
		}
	}
	return (0);
}

static int	for_sign_duplicates(const char **av)
{
	size_t	i;
	size_t	j;
	int		minus;
	int		plus;

	i = -1;
	while (av[++i])
	{
		minus = 0;
		plus = 0;
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] == '+')
				plus++;
			if (av[i][j] == '-')
				minus++;
		}
		if ((minus == 1 && plus == 1) || (minus > 1 || plus > 1))
			return (1);
	}
	return (0);
}

static int	for_sign_strings(const char **av)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (av[++i])
	{
		j = 0;
		while (av[i][j] && (av[i][j] == '-' || av[i][j] == '+'))
			j++;
		if (av[i][j] == '\0')
			return (1);
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] && (av[i][j] == '-' || av[i][j] == '+')
				&& (av[i][j + 1]
				&& !(av[i][j + 1] >= '0' && av[i][j + 1] <= '9')))
				return (1);
			else if (av[i][j] && (av[i][j] >= '0' && av[i][j] <= '9')
				&& (av[i][j + 1]
					&& (av[i][j + 1] == '-' || av[i][j + 1] == '+')))
				return (1);
		}
	}
	return (0);
}

static int	for_empty_strings(const char **av)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		if (!av[i][0])
			return (1);
	}
	return (0);
}

int	check_args(const char **av)
{
	if (!av)
		return (1);
	if (for_invalid_characters(av))
		return (1);
	if (for_sign_duplicates(av))
		return (1);
	if (for_sign_strings(av))
		return (1);
	if (for_empty_strings(av))
		return (1);
	if (check_limits(av))
		return (1);
	if (check_duplicates(av))
		return (1);
	return (0);
}
