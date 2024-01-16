/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:13:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/16 16:36:04 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
// typedef struct s_list
// {
// 	int				content;
// 	int				flag;
// 	int				index;
// 	struct s_list	*next;
// }	t_list;

long	ft_atoi(const char *str);
long	ft_number(int sentinel, long *array);
long	pivot(long *array, int sentinel);
long	*ft_creator(char **av, int sentinel);
long	*push_swap(long *stack_a, long *stack_b, long pvt, static int sentinel);

int		num_control(long *array, long c, int sentinel);
int		array_control(long *array, int sentinel);
int		arg_control(char **av);
int		white_spaces(char c);
int		little_controler(long cont, int sentinel, long *array);

void	ft_error(int c);
void	pb(long *stack_a, long *stack_b, static int sentinel);

#endif
