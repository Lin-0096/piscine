NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

HEADER = includes

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all
