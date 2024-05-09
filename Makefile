NAME = libft.a
SRCS = ft_isalpha.c
OBJS = ft_isalpha.o
CC = cc
CFLAGS = -Wall -Wextra -Werror

re: fclean all

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
