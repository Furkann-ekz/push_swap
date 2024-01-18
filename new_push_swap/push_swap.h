/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:13:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/18 14:22:41 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_list
{
	int		sentinel;
	int		pvt_i;
	long	pvt;
	long	*temp;
	long	*stack_a;
	long	*stack_b;
}				t_list;

long	ft_atoi(const char *str);
long	pivot(t_list *arr);
long	ft_number(t_list *arr);
long	*ft_creator(char **av, t_list *arr);

int		num_control(t_list *arr, long c);
int		array_control(t_list *arr);
int		arg_control(char **av);
int		white_spaces(char c);
int		little_controler(long cont, t_list *arr);
int		pa(t_list *arr);
int		pb(t_list *arr);

void	get_free(t_list *arr);
void	pvt_crt(t_list *arr, char **av);
void	ft_error(t_list *arr);

#endif
