NAME = libft.a
SRCS = ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c
OBJS = ft_isalpha.o\
	   ft_isdigit.o\
	   ft_isalnum.o
CC = cc
CFLAGS = -Wall -Wextra -Werror
TEST = TestCode/libft_test.c TestCode/testFt*.c
TESTRUN = TestRunner/testRunner.c

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

exec: re
	$(CC) $(CFLAGS) $(TEST) $(TESTRUN) $(NAME) -o exec
	./exec
	@echo "\033[31mTest Done\033[m"
	rm -f exec

.PHONY:
	re all fclean clean
