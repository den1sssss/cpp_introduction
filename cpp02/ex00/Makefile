# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: denis <denis@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 10:54:18 by denis             #+#    #+#              #
#    Updated: 2022/08/30 10:54:18 by denis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= c++
RM			= rm -f
OBJ			= ${SRC:.cpp=.o}
SRC			= main.cpp Fixed.cpp
INC			= Fixed.hpp

NAME		= Fixed

${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

%.o:%.cpp ${INC}
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

clean:
					${RM} ${OBJ}

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re