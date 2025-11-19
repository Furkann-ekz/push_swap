/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:08:25 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:01:38 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static int	for_limits_just_one_string(const char *str)
{
	size_t	i;
	bool	minus;

	i = 0;
	minus = false;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = true;
		i++;
	}
	while (str[i] && str[i] == '0')
		i++;
	if (str[i] == '\0')
		return (0);
	if (ft_strlen(str) - i > 10)
		return (1);
	else if ((ft_strlen(str) - i == 10 && !minus)
		&& (ft_strcmp(str + i, "2147483647") > 0))
		return (1);
	else if ((ft_strlen(str) - i == 10 && minus)
		&& (ft_strcmp(str + i, "2147483648") > 0))
		return (1);
	return (0);
}

int	check_limits(const char **av)
{
	size_t	i;

	i = -1;
	while (av[++i])
		if (for_limits_just_one_string(av[i]))
			return (1);
	return (0);
}
