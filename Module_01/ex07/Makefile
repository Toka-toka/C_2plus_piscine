NAME = ex07

SRC =	ex07.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)
	echo "123 hell0 \n 345 dfvfv\n 123 test me\n123456 123 test erew" > test

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) *.replace test

re: fclean all

.PHONY: all clean fclean re