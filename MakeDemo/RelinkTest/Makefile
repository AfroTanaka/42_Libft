CC := cc
CFLAGS := -Wall -Wextra -Werror
SRCS := a.c b.c c.c
OBJS := a.o b.o c.o


hoge.a: $(OBJS)
	ar -rcs hoge.a $(OBJS)

hoge:
	$(CC) $(CFLAGS) $(SRCS) hoge.a -o hoge

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)

