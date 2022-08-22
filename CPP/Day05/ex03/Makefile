NAME = Bureaucrat

GG = g++

Header1 =  Bureaucrat.hpp
Header2 =  Form.hpp
Header3 =  ShrubberyCreationForm.hpp
Header4 =  PresidentialPardonForm.hpp
Header5 =  RobotomyRequestForm.hpp
Header6 =  Intern.hpp


VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp						\
		Bureaucrat.cpp					\
		Form.cpp						\
		ShrubberyCreationForm.cpp		\
		PresidentialPardonForm.cpp		\
		RobotomyRequestForm.cpp			\
		Intern.cpp			

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1)  $(Header2) $(Header3)  $(Header4)  $(Header5)   $(Header6) 
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all