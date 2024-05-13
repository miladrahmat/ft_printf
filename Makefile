NAME = libftprintf.a
SRCS = \
		ft_printf.c ft_printhex.c ft_putaddress.c ft_putchar.c ft_putdecimal.c \
		ft_putstr.c ft_putunsign.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft

all: $(NAME)

$(NAME): $(OBJS)
		@make -C $(LIBFT)
		@cp libft/libft.a .
		@mv libft.a $(NAME)
		ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
	@make clean -C $(LIBFT)
fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBFT)
re: fclean all

.PHONY: all clean fclean re