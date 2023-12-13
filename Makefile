# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 11:42:24 by jhouyet           #+#    #+#              #
#    Updated: 2023/12/13 11:44:57 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRC			= push_swap.c 

OBJ			= ${SRC:.c=.o}

LIBFT		= libft.a

LIBFT_PATH	= libft

CC			= gcc

RM			= rm -f

C_FLAGS	= -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ} ${LIBFT} 
	${CC} ${OBJ} -o ${NAME} ${LIBFT}

${LIBFT}:
	${MAKE} -C ${LIBFT_PATH}
	mv ${LIBFT_PATH}/${LIBFT} .

clean:
	${MAKE} clean -C ${LIBFT_PATH}
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} ${LIBFT}

re:	fclean all

.PHONY:	all clean fclean re