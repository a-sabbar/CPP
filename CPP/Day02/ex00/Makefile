NAME = Fixed

GG = c++

Header1 =  Fixed.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	Fixed.cpp	\
		main.cpp	\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all