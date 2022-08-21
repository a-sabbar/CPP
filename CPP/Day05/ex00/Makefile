NAME = Bureaucrat

GG = g++

Header1 =  Bureaucrat.hpp


VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp\
		Bureaucrat.cpp

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