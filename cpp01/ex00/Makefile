# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 19:19:20 by benmoham          #+#    #+#              #
#    Updated: 2022/05/26 13:45:13 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = 	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		RandomChump.cpp\
		

OBJS			= $(SRC:.cpp=.o)

NAME			=	Zombie

CFLAGS			= -std=c++98 -Wall -Wextra -Werror -std=c++98

RM				= rm -f

CC				= c++

.cpp.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

all:			$(NAME)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re 