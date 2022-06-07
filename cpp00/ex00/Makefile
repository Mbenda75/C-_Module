# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 13:41:13 by benmoham          #+#    #+#              #
#    Updated: 2022/05/26 13:15:11 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=    megaphone.cpp \

OBJS			= $(SRC:.cpp=.o)

NAME			= megaphone

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

.PHONY:			all clean fclean  re