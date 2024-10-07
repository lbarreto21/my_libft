CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SCRS)

clean: 
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(PROG)
