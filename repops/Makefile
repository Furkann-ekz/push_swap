SRCS	=	ft_atoi.c		\
			functions.c		\
			functions2.c	\
			pa_pb.c			\
			push_swap.c		\
			ra_rb.c			\
			rra_rrb.c		\
			sa_sb.c			\
			stacka_crt.c	\

OBJS	=	$(SRCS:.c=.o)
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS)
	ar rc $(NAME) $(OBJS)

.PHONY: all clean fclean re
