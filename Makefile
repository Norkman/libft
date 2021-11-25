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

CFLAGS = -Wall -Wextra -Werror

DEBUG ?= 0
ifeq ($(DEBUG), 1)
    CFLAGS += -g3 -fsanitize=address
endif

NAME = libft.a

SRC = ft_isalnum.c\
      ft_isprint.c\
      ft_isalpha.c\
      ft_memcpy.c\
      ft_isascii.c\
      ft_memset.c\
      ft_strlen.c\
      ft_bzero.c\
      ft_isdigit.c\
      ft_memmove.c\
      ft_strlcpy.c\
      ft_strlcat.c

OBJS = ${SRC:.c=.o}

CC = gcc

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
