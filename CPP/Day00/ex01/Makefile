NAME = PHONEBOOK

GG = g++

Header1 =  PhoneBook.hpp
Header2 =  Contact.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	Contact.cpp		\
		PhoneBook.cpp	\
		main.cpp		\

OBJ = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME):  
	$(GG) $(VERSION) $(OBJ) -o $(NAME)

%.opp : %.cpp $(Header1) $(Header2)
	$(GG) $(VERSION)  -o $@ -c $<

fclean:
	@rm -rf $(NAME)

re: fclean all