SRCS	=	Main.c							\
			parse/Check_args.c				\
			parse/Check_duplicates.c		\
			parse/Check_limits.c			\
			parse/Check_sorted.c			\
			exit/Exit.c						\
			exit/Free_allocations.c			\
			utils/Ft_atoi.c					\
			utils/Ft_calloc.c				\
			utils/Ft_strcmp.c				\
			utils/Ft_strlen.c				\
			utils/Stack_utils.c				\
			start/Start.c					\
			start/Create_stack_and_nodes.c	\
			start/Get_index.c				\
			moves/Swap_a.c					\
			moves/Swap_b.c					\
			moves/Rotate_a.c				\
			moves/Reverse_rotate_a.c		\
			sorting/Sorted_three.c

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