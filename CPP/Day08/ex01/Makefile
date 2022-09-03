NAME = Span

GG = c++

VERSION = -std=c++98  -Wall -Wextra -Werror

HEADER = Span.hpp

SRC =	main.cpp		\
		Span.cpp		\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(HEADER)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all
