# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 14:32:32 by benmoham          #+#    #+#              #
#    Updated: 2022/06/07 15:31:07 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = 	main.cpp\
		Fixed.cpp
		
OBJS			= $(SRC:.cpp=.o)

NAME			=	Fixed
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