/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:05:04 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/13 15:43:25 by fekiz            ###   ########.fr       */
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
	int				index; // sayının (sıralanmış durumda) olması gereken indeksi
	int				cost_a; // elemanı a stackinin tepesine getirme maliyeti
	int				cost_b; // elemanı b stackinin tepesine getirme maliyeti
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*target;
}	t_list;

int		check_args(const char **av);
int		check_duplicates(const char **av);
int		check_limits(const char **av);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);

size_t	ft_strlen(const char *str);
size_t	strlen_for_stack(t_list *list);

void	*ft_calloc(size_t count, size_t size);
void	exit_error(t_list **a, t_list **b, int exit_num);
void	frees(t_list *list);
void	add_node_to_stack(t_list **stack, t_list *new_node);
void	first_start(const char **av, t_list **a, t_list **b);
void	check_sorted(t_list **list);
void	get_index(t_list *list);

void	sort_three(t_list **a, t_list **b);
void	set_targets_for_a(t_list **a);

void	sa(t_list **a, bool print);
void	sb(t_list **b, bool print);
void	ss(t_list **a, t_list **b, bool print);
void	ra(t_list **a, bool print);
void	rb(t_list **b, bool print);
void	rr(t_list **a, t_list **b, bool print);
void	rra(t_list **a, bool print);
void	rrb(t_list **b, bool print);
void	rrr(t_list **a, t_list **b, bool print);
void	pa(t_list **a, t_list **b, bool print);
void	pb(t_list **a, t_list **b, bool print);

t_list	*new_node(int num);
t_list	*find_last_node(t_list *a);

#endif