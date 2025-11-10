SRCS	=	Check_args.c				\
			Check_duplicates.c			\
			Check_limits.c				\
			Check_sorted.c				\
			Create_stack_and_nodes.c	\
			Exit.c						\
			Free_allocations.c			\
			Ft_atoi.c					\
			Ft_calloc.c					\
			Ft_strcmp.c					\
			Ft_strlen.c					\
			Main.c						\
			Start.c						\
			Get_index.c					\

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