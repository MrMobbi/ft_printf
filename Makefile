
OBJS		= ${SRCS:.c=.o}
NAME		= libftprintf.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
LIB			= ar rc
INC			= includes
A_OUT		= a.out
SRCS		= ft_printf.c ft_utils.c ft_sort.c

.c.o:		${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

all:		${NAME}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS} ${A_OUT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

run:		all
			${CC} ${FLAGS} ft_printf.c -L. -lftprintf
			./${A_OUT}

.PHONY:		all clean flcean re
