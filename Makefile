CC = gcc

CFLAGS = -Wall -Werror -Wextra

PROG = My_program

SRCS = ft_isalpha.c ft_isdigit.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(PROG)

$(PROG): $(OBJS)
	CC CFLAGS -o $(PROG) $(OBJS)

$(OBJS): $(SRCS)
	CC CFLAGS -c $(SCRS)

clean: 
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(PROG)