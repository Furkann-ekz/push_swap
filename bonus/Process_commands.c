/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Process_commands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:38:16 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:00:57 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bonus.h"

void	process_commands(t_list **a, t_list **b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		if (execute_command(line, a, b))
		{
			write (2, "Error\n", 6);
			free(line);
			exit_error(a, b, 1);
		}
		free(line);
	}
}
