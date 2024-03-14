# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 19:51:36 by yamajid           #+#    #+#              #
#    Updated: 2024/03/14 16:34:59 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	exec
Run		=	c++ -g
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	 main.cpp 

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(Run) $(FLAGS) -c $< -o $@
	
$(NAME): $(otherS) Array.hpp
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all