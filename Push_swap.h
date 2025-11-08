/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:05:04 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/08 17:29:47 by fekiz            ###   ########.fr       */
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
	int				num;
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*target;
}	t_list;

int		check_args(const char **av);
int		ft_strcmp(const char *s1, const char *s2);
int		check_limits(const char **av);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);

#endif