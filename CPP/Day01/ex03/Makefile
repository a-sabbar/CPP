NAME = Weapon

GG = c++

Header1 =  HumanA.hpp
Header2 =  HumanB.hpp
Header3 =  Weapon.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	HumanA.cpp	\
		HumanB.cpp	\
		Weapon.cpp	\
		main.cpp	\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1) $(Header2) $(Header3)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all
