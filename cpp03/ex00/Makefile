NAME = main

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp ClapTrap.cpp

OBJCPP = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCPP)
	$(COMPILER) $(FLAGS) $(OBJCPP) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJCPP)

fclean: clean
	rm -rf $(NAME)

re: fclean all