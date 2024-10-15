NAME = main

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJCPP = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCPP)
	$(COMPILER) $(FLAGS) $(OBJCPP) -o $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJCPP)

fclean: clean
	rm -rf $(NAME)

re: fclean all