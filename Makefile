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
			sorting/Sort_three.c			\
			start/Calculate_couts.c			\
			start/Create_stack_and_nodes.c	\
			start/Execute_move.c			\
			start/Final.c					\
			start/Get_require_index.c		\
			start/Set_cheapest_node.c		\
			start/Start.c					\
			utils/Ft_atoi.c					\
			utils/Ft_calloc.c				\
			utils/Ft_strcmp.c				\
			utils/Ft_strlen.c				\
			utils/Stack_utils.c				\
			Main.c

OBJS	=	$(SRCS:.c=.o)
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)
	make clean

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS)
	ar rc $(NAME) $(OBJS)

.PHONY: all clean fclean re