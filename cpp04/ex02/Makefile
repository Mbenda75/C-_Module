# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 14:58:10 by benmoham          #+#    #+#              #
#    Updated: 2022/06/13 14:20:16 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp
OBJS			= $(SRC:.cpp=.o)

NAME			=	Animal
CFLAGS			= -std=c++98 -Wall -Wextra -Werror -g3

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