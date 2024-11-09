SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++

NAME = fixed
CFLAGS = -std=c++17

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

