/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:04:14 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/08 15:02:38 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	main(int ac, char **av)
{
	t_list	*list;

	if (ac < 2)
		return (0);
	if (check_args(av + 1))
		return (write (2, "Error\n", 6));
	list = malloc(sizeof(t_list));
	if (!list)
		return (write (2, "Error\n", 6));
}
