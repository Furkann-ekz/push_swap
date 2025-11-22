/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:31:27 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/22 16:23:32 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (1);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
