/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:13:54 by fekiz             #+#    #+#             */
/*   Updated: 2024/01/28 15:42:14 by fekiz            ###   ########.fr       */
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

void	current_index(t_list *stack);
void	set_cheapest(t_list *stack);
void	init_nodes_a(t_list *a, t_list *b);
void	init_nodes_b(t_list *a, t_list *b);
void	free_errors(t_list **a);
void	free_stack(t_list **stack);
void	min_on_top(t_list **a);
void	pb(t_list **b, t_list **a, bool print);
void	pa(t_list **a, t_list **b, bool print);
void	rr(t_list **a, t_list **b, bool print);
void	rb(t_list **b, bool print);
void	ra(t_list **a, bool print);
void	rrr(t_list **a, t_list **b, bool print);
void	rrb(t_list **b, bool print);
void	rra(t_list **a, bool print);
void	sa(t_list **a, bool print);
void	sb(t_list **b, bool print);
void	ss(t_list **a, t_list **b, bool print);
void	sort_three(t_list **a);
void	sort_stacks(t_list **a, t_list **b);
void	init_stack_a(t_list **a, char **argv);
void	prep_for_push(t_list **stack, t_list *top_node, char name);

int		error_duplicate(t_list *a, int n);
int		error_syntax(char *str);
int		stack_len(t_list *stack);

bool	stack_sorted(t_list *stack);
char	**ft_split(char *s, char c);
t_list	*get_cheapest(t_list *stack);
t_list	*find_last(t_list *stack);
t_list	*find_min(t_list *stack);
t_list	*find_max(t_list *stack);

#endif
