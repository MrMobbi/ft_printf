
NAME		= libftprintf.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
LIB			= ar rcs
INC			= includes
OBJS		= ${SRCS: .c=.o}
SRCS		= ft_printf.c ft_utils.c ft_sort.c

.c.o:		${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

all:		${NAME}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean flcean re
