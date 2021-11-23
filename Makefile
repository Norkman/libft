# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 22:03:57 by nle-bret          #+#    #+#              #
#    Updated: 2021/08/26 10:51:28 by nle-bret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = includes

.c.o:		
			${CC} ${CFLAGS} -I${INCLUDE} -c $< -o $@

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY: all clean fclean re
