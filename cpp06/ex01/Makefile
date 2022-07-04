# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 12:23:07 by benmoham          #+#    #+#              #
#    Updated: 2022/07/04 12:53:41 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	main.cpp\
		Serialisation.cpp
		
OBJS			= $(SRC:.cpp=.o)

NAME			=	serial
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