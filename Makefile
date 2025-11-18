SRCS	=	exit/Exit.c						\
			exit/Free_allocations.c			\
			moves/Push_a.c					\
			moves/Push_b.c					\
			moves/Reverse_rotate_a.c		\
			moves/Reverse_rotate_b.c		\
			moves/Rotate_a.c				\
			moves/Rotate_b.c				\
			moves/Sencron_reverse_rotate.c	\
			moves/Sencron_rotate.c			\
			moves/Sencron_swap.c			\
			moves/Swap_a.c					\
			moves/Swap_b.c					\
			parse/Check_args.c				\
			parse/Check_duplicates.c		\
			parse/Check_limits.c			\
			parse/Check_sorted.c			\
			parse/Create_new_args.c			\
			sorting/Sort_three.c			\
			start/Calculate_costs.c			\
			start/Create_stack_and_nodes.c	\
			start/Execute_move_for_a.c		\
			start/Execute_move_for_b.c		\
			start/Final.c					\
			start/Get_require_index.c		\
			start/Set_cheapest_node.c		\
			start/Set_target.c				\
			start/Start.c					\
			utils/Ft_atoi.c					\
			utils/Ft_calloc.c				\
			utils/Ft_strcmp.c				\
			utils/Ft_strlen.c				\
			utils/Stacks_utils.c			\
			utils/Find_min_max_index.c		\
			utils/Ft_split.c				\
			utils/Ft_strjoin.c				\
			Main.c

BNS_SRC	=	bonus/get_next_line/Get_next_line.c			\
			bonus/get_next_line/Get_next_line_utils.c	\
			bonus/Execute_command.c						\
			bonus/Main.c								\
			bonus/Process_commands.c					\
			bonus/Start.c

OBJS	=	$(SRCS:.c=.o)
BNS_OBJ	=	$(BNS_SRC:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(BNS_OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(BNS_NM)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
    $(CC) $(CFLAGS) $(OBJS) $(BONUS_OBJS) -o checker

.PHONY: all clean fclean re