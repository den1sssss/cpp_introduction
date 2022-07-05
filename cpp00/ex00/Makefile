# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 16:53:18 by dshirely          #+#    #+#              #
#    Updated: 2022/07/05 16:45:25 by dshirely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= megaphone

SRCS	= ./megaphone.cpp

OBJS 	= $(SRCS:.cpp=.o)

CC 		= c++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -std=c++98


all:
	@$(MAKE) $(NAME) 

%.o:    %.cpp
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean $(NAME)