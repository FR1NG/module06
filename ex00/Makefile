CPP=c++
FLAGS=-Wall -Wextra -Werror  -std=c++98
SRC=main.cpp convert.cpp
OBJ=$(SRC:.cpp=.o)
NAME=convert

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
