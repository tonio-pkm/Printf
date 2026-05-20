NAME = libftprintf.a

SRCS =	ft_printf.c\
	ft_putnbr.c\
	ft_hexa_mem.c\
	ft_conver_check.c\
	ft_putchar.c\
	ft_hexa_putnbr.c\
	ft_uns_putnbr.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c ft_printf.h
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

NAME_TEST = test

test: $(NAME)
	cc $(FLAGS) ft_main.c $(NAME) -g -o $(NAME_TEST)
	./$(NAME_TEST)

.PHONY: all clean fclean re test
