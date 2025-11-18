/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:02:27 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/18 17:39:04 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "unistd.h"
# include "stdlib.h"
# include "stdbool.h"
# include "../Push_swap.h"

char	*get_next_line(int fd);
char	*ft_get_st(int fd, char *st);
char	*ft_strjoin(char *s1, char *s2);
int		search_nl(char *st);
size_t	ft_strlen(const char *str);

void	start(const char **av, t_list **a, t_list **b);
void	process_commands(t_list **a, t_list **b);

bool	execute_command(char *str, t_list **a, t_list **b);

#endif