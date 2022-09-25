# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 16:24:19 by dshirely          #+#    #+#              #
#    Updated: 2022/09/25 16:24:20 by dshirely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC			= c++
RM			= rm -f
OBJ			= ${SRC:.cpp=.o}
SRC			= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
INC			= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

NAME		= Animal

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