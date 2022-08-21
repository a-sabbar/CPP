NAME = PHONEBOOK

GG = g++

Header1 =  PhoneBook.hpp
Header2 =  Contact.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	Contact.cpp		\
		PhoneBook.cpp	\
		main.cpp		\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all
