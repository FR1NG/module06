# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 12:46:44 by hchakoub          #+#    #+#              #
#    Updated: 2022/08/27 12:47:55 by hchakoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
FLAGS=-Wall -Wextra -Werror  -std=c++98
SRC=main.cpp Data.cpp
OBJ=$(SRC:.cpp=.o)
NAME=serialize

all: $(NAME)

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all