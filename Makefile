NAME = libft.a
SRCS = ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c
OBJS = ft_isalpha.o\
	   ft_isdigit.o\
	   ft_isalnum.o\
	   ft_isascii.o
CC = cc
CFLAGS = -Wall -Wextra -Werror
TEST = TestCode/libft_test.c TestCode/testFt*.c
TESTRUN = TestRunner/testRunner.c

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

exec: re
	$(CC) $(CFLAGS) $(TEST) $(TESTRUN) $(NAME) -o exec
	./exec
	@echo "\033[35mTest Done\033[m"
	rm -f exec

.PHONY:
	re all fclean clean
