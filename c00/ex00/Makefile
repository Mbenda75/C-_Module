# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 13:41:13 by benmoham          #+#    #+#              #
#    Updated: 2022/05/14 17:55:27 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=    megaphone.cpp \

OBJS			= $(SRC:.cpp=.o)

NAME			= megaphone

CFLAGS			= -Wall -Wextra -Werror 

RM				= rm -f

CC				= clang++

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L.

all:			$(NAME)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean c.o re 