SRCS	=	Main.c			\
			Check_args.c	\
			Ft_atoi.c		\
			Ft_strlen.c		\
			Check_limits.c	\
			Ft_strcmp.c

OBJS	=	$(SRCS:.c=.o)
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS)
	ar rc $(NAME) $(OBJS)

.PHONY: all clean fclean re