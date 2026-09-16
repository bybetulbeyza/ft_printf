NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRCS = ft_printf.c ft_print_str.c ft_print_hex.c ft_print_nbr.c ft_print_percent.c ft_print_ptr.c ft_print_str.c ft_print_unsig.c

OBJS = $(SRCS:.c=.o)

all = $(NAME)
$(NAME):$(OBJS)

%.o: %.c
	$(cc) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re:
	$(RM) $(NAME)
.PHONY all clean fclean re