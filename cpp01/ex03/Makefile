# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 18:28:57 by benmoham          #+#    #+#              #
#    Updated: 2022/05/31 14:44:51 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp 
		

OBJS			= $(SRC:.cpp=.o)

NAME			=	Fight

CFLAGS			= -std=c++98 -Wall -Wextra -Werror

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