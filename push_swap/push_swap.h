/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:13:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/30 21:34:30 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_list
{
	int				nbr;
	int				index;
	int				push;
	bool			med;
	bool			cheap;
	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	sa(t_list	**a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	sort_three(t_list **a);
void	min_on_top(t_list **a);
void	sort_stacks(t_list **a, t_list **b);
int		error_syntax(char *str);
int		error_duplicate(t_list *a, int n);
void	free_stack(t_list **stack);
void	free_errors(t_list **a);
void	init_nodes_b(t_list *a, t_list *b);
void	init_nodes_a(t_list *a, t_list *b);
void	set_cheapest(t_list *stack);
void	current_index(t_list *stack);
void	init_stack_a(t_list **a, char **argv);
t_list	*get_cheapest(t_list *stack);
void	prep_for_push(t_list **stack, t_list *top_node, char name);
int		stack_len(t_list *stack);
t_list	*find_last(t_list *stack);
bool	stack_sorted(t_list *stack);
t_list	*find_min(t_list *stack);
t_list	*find_max(t_list *stack);
char	**ft_split(char *s, char c);

#endif
