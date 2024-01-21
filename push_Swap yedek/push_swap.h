/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:13:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/21 17:56:48 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int		sentinel;
	int		a_count;
	int		c;
	int		pvt_sort_i;
	int		pvt_i;
	int		b_count;
	int		i_count;
	int		x_in;
	int		y_in;
	int		temp_count;
	long	pvt;
	long	x;
	long	y;
	long	*temp;
	long	*stack_a;
	long	*stack_b;
	long	*btmp;
	long	*a_temp;
}				t_list;

long	ft_atoi(const char *str);
long	ft_number(t_list *arr);
long	*new_stacka(t_list	*arr);
long	*ft_creator(char **av, t_list *arr);

int		arg_control(char **av);
int		num_control(t_list *arr, long c);
int		white_spaces(char c);
int		little_controler(long cont, t_list *arr);
int		array_control(t_list *arr);
int		sort_control(t_list *arr);

void	get_free(t_list *arr);
void	ft_error(t_list *arr);
void	sortemp(t_list *arr);
void	tmpra(t_list *arr);
void	sorter(t_list *arr);
void	a_push(t_list *arr);
void	a_sort(t_list *arr);

void	ft_error2(t_list *arr);
void	pa(t_list *arr);
void	ra(t_list *arr);
void	rra(t_list *arr);
void	sa(t_list *arr);

long	*pb(t_list *arr);
long	*b_creat(t_list *arr);

#endif
