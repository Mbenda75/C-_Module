# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 19:19:20 by benmoham          #+#    #+#              #
#    Updated: 2022/05/23 19:19:40 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC=   main.cpp \
		Zombie.cpp
		

OBJS			= $(SRC:.cpp=.o)

NAME			=	Zombie

CFLAGS			= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 

RM				= rm -f

CC				= c++

.cpp.o:
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