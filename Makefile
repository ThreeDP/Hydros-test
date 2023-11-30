NAME			= Hydros
HEADER			= Hydros.hpp
FLAGS			= -g3
OBJ_PATH		= ./objs/
SRC				=  main.cpp Hydros.cpp
OBJ				= $(SRC:%.cpp=$(OBJ_PATH)%.o)

all: $(NAME)

$(OBJ_PATH)%.o: %.cpp $(HEADER)
	mkdir -p $(OBJ_PATH)
	c++ $(FLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

run: all
	./$(NAME)

re: fclean all

.PHONY: all clean fclean re 