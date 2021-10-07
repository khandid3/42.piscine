# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 09:55:52 by ahuber            #+#    #+#              #
#    Updated: 2021/07/25 12:10:24 by ahuber           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES  = main.c fonction.c
NAME = rush-02
OBJS = $(SOURCES:.c=.o)

all:		${NAME}

$(NAME):	${OBJS}
		@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

clean:
			rm -f ${OBJS}

fclean:	clean
		@/bin/rm -f $(NAME)

debugg:
		@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES) -g;

re: fclean all

.PHONY	all clean fclear re
