SRCS	= main.c ft_others.c ft_atoi.c ft_search.c ft_file.c

OBJS	=${SRCS:.c=.o}

NAME	= rush02

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra -g

# Useless
.c.o:	
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:	
	${RM} ${OBJS}	

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean  re
