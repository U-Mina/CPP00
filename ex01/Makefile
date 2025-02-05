NAME	= phonebook
CC		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++98
SRC		= Contact.cpp main.cpp PhoneBook.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re