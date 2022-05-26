# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 09:34:29 by benmoham          #+#    #+#              #
#    Updated: 2022/05/26 13:11:30 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC=   Contact.cpp \
		main.cpp\
		 Phonebook.cpp

OBJS			= $(SRC:.cpp=.o)

NAME			=	Phonebook

CFLAGS			= -Wall -Wextra -Werror -std=c++98 

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