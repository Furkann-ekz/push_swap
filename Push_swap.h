/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:05:04 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:02:27 by fekiz            ###   ########.fr       */
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
	size_t			index;
	int				num;
	int				required_index;
	int				cost_a;
	int				cost_b;
	bool			cheapest;
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*target;
}	t_list;

char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	**create_new_args(char **av);

size_t	ft_strlen(const char *str);
size_t	strlen_for_stack(t_list *list);

int		check_args(const char **av);
int		check_duplicates(const char **av);
int		check_limits(const char **av);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);
void	exit_error(t_list **a, t_list **b, int exit_num);
void	frees(t_list *list);

void	add_node_to_stack(t_list **stack, t_list *new_node);
void	check_sorted(t_list **list);
void	get_require_index(t_list *list);
void	update_physical_index(t_list **list);

void	calculate_cost_for_a(t_list **a, t_list **b, size_t size_a);
void	calculate_cost_for_b(t_list **a, t_list **b, size_t size_b);

void	set_targets_for_b(t_list **a, t_list **b);
void	set_targets_for_a(t_list **a, t_list **b);

void	set_cheapest_node_for_a(t_list **a);
void	set_cheapest_node_for_b(t_list **b);

void	first_start(const char **av, t_list **a, t_list **b);
void	sort_three(t_list **a);
void	execute_move_for_a(t_list **a, t_list **b);
void	execute_move_for_b(t_list **a, t_list **b);
void	final_spin(t_list **a);

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
t_list	*find_max_index_node(t_list **b);
t_list	*find_min_index_node(t_list **a);

#endif