NAME	= libft.a
SRCS	= ft_*.c
OBJS	= ft_*.o
CC		= cc
CFLAG	= -Wall -Wextra -Werror
TEST	= test.c
TEST_OBJ = test.o
TEST_NAME = test

re: fclean all

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFLAG) -c $(SRCS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

#$(TEST_OBJ): $(TEST)
#	$(CC) $(CFLAG) -c $(TEST) -o $(TEST_OBJ)

$(TEST_NAME): $(TEST_OBJ) $(NAME)
	$(CC) $(CFLAG) $(TEST_OBJ) $(NAME) -o $(TEST_NAME)

.PHONY: all clean fclean
