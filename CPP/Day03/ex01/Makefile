NAME = ClapTrap

GG = g++

Header1 =  ClapTrap.hpp 
Header2 =  ClapTrap.hpp 

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	ClapTrap.cpp	\
		main.cpp	\
		ScavTrap.cpp	\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1) $(Header2)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all