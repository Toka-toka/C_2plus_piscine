NAME = My_Awesome_PhoneBook

SRC =	main.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re