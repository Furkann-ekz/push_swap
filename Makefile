SRCS	=	a_to_b.c		\
			b_to_a.c		\
			errors.c		\
			ft_split.c		\
			pa_pb.c			\
			push_swap.c		\
			ra_rb_rr.c		\
			rra_rrb_rrr.c	\
			sa_sb_ss_st.c	\
			sort.c			\
			stack_init.c	\
			stack_utils.c	\

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
