NAME = static_cast

GG = c++

VERSION = -std=c++98  -Wall -Wextra -Werror

Header = A.hpp
Header1 = B.hpp
Header2 = Base.hpp
Header3 = C.hpp

SRC =	main.cpp		\
		A.cpp			\
		B.cpp			\
		Base.cpp		\
		C.cpp			\
		function.cpp	

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header) $(Header1) $(Header2) $(Header3)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all
