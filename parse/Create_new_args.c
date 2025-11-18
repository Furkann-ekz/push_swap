/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Create_new_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:41:00 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 16:01:44 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

char	**create_new_args(char **av)
{
	size_t	i;
	char	*str;
	char	**new_args;

	str = NULL;
	i = -1;
	new_args = NULL;
	while (av[++i])
	{
		str = ft_strjoin(str, av[i]);
		if (!str)
			return (NULL);
		if (av[i + 1])
		{
			str = ft_strjoin(str, " ");
			if (!str)
				return (NULL);
		}
	}
	new_args = ft_split(str, ' ');
	free(str);
	return (new_args);
}
