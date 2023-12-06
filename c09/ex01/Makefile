CFLAGS = -Wall -Wextra -Werror
HEAD = ./includes/
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJS = ${SRC:.c=.o}
NAME = libft.a

.c.o:
		cc ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all