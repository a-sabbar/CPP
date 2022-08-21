 NAME = Bureaucrat

GG = g++

Header1 =  Bureaucrat.hpp
Header2 =  Form.hpp


VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp		\
		Bureaucrat.cpp	\
		Form.cpp		\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1)  $(Header2) 
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all