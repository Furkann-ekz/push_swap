/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:10:58 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/22 16:23:36 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	double_pointer_strlen(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
