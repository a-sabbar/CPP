NAME = Polymorphism

GG = c++

Header1 =  Animal.hpp
Header2 = Cat.hpp 
Header3 =  Dog.hpp 
Header3 =  Dog.hpp 
Header4 =  WrongCat.hpp 
Header5 =  WrongAnimal.hpp 
Header6 =  Brain.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	Animal.cpp	\
		main.cpp	\
		Cat.cpp	\
		Dog.cpp	\
		WrongCat.cpp	\
		WrongAnimal.cpp	\
		Brain.cpp	\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1) $(Header2) $(Header3) $(Header4) $(Header5) $(Header6)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all