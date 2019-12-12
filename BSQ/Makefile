# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroque <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 12:14:41 by aroque            #+#    #+#              #
#    Updated: 2019/12/11 22:31:36 by aroque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bsq

CC=gcc
C_FLAGS= -Wall -Werror -Wextra

LIB_DIR	=	lib
SRC_DIR =	src
BIN		=	${SRC:.c=.o}

all: ${NAME}

${NAME}: main.o map_info.o map_processor.o ft_read.o ft_string.o ft_numeric.o
	${CC} ${CFLAGS} main.o map_info.o map_processor.o ft_read.o ft_string.o ft_numeric.o -o ${NAME}

main.o: ft_string.o map_info.o
	${CC} ${CFLAGS} -c ${SRC_DIR}/main.c -I${LIB_DIR}

map_processor.o: ft_string.o 
	${CC} ${CFLAGS} -c ${SRC_DIR}/map_processor.c -I${LIB_DIR}

map_info.o: ft_string.o
	${CC} ${CFLAGS} -c ${SRC_DIR}/map_info.c -I${LIB_DIR}

ft_read.o: ft_string.o
	${CC} ${CFLAGS} -c ${SRC_DIR}/ft_read.c -I${LIB_DIR}

ft_numeric.o:
	${CC} ${CFLAGS} -c ${SRC_DIR}/ft_numeric.c -I${LIB_DIR}

ft_string.o:
	${CC} ${CFLAGS} -c ${SRC_DIR}/ft_string.c

clean:
	rm -f *.o

fclean: clean
	rm ${NAME}

re: fclean all
