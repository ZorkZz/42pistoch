# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgiraudo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 11:40:36 by tgiraudo          #+#    #+#              #
#    Updated: 2022/08/20 13:01:42 by tgiraudo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/*.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= cc

RM		= rm -f

CFLAGS	= -g -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
