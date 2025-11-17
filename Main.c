/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:04:14 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/17 16:20:41 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include "stdio.h"
int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (check_args((const char **)(av + 1)))
		return (write (2, "Error\n", 6));
	first_start((const char **)av + 1, &a, &b);
	exit_error(&a, &b, 0);
}
