NAME = talking

CC = c++ -std=c++98

src = main.cpp Fixed.cpp

Cflags = -Wall -Wextra -Werror

OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(Cflags) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

