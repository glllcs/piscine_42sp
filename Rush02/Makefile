# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpinheir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/08 11:49:03 by dpinheir          #+#    #+#              #
#    Updated: 2019/12/10 12:56:01 by lambrozi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_YELLOW_B=\033[1;33m
C_LIGHT_RED_B=\033[0;91m
C_WHITE=\033[0;97m
C_RESET=\033[0;39m

SRCS	= ./srcs/main.c ./srcs/functions.c ./srcs/ft_read_file.c ./srcs/ft_translate.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= rush-02
CC		= gcc
RM		= rm -f
CFLAGS	= #-Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME} 42

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette */*.[ch]

find_sources :
	find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '

re : fclean all

test : re
	@echo "[$(C_YELLOW_B)\nTESTING$(C_RESET)] $(C_WHITE)\nNumber: 42$(C_RESET)" ;
	@./${NAME} 42 | cat -e || true ;
	@##
	@echo "[$(C_YELLOW_B)\nTESTING$(C_RESET)] $(C_WHITE)\nNumber: 442458904854908$(C_RESET)" ;
	@./${NAME} 42458904854908 | cat -e || true ;
	@##


.PHONY: clean re .c.o test
