/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:05:04 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/08 16:17:30 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdlib.h"
# include "unistd.h"
# include "limits.h"
# include "stdbool.h"

typedef struct s_list
{
	int		num;
}	t_list;

typedef struct s_vector
{
	size_t	i;
	size_t	j;
	int		plus;
	int		minus;
	int		zero;
}	t_vector;

int		check_args(char **av);
int		ft_strcmp(char *s1, char *s2);

#endif