NAME = convert

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CFILE = main.cpp ScalarConverter.cpp

OBJCPP = $(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCPP)
	$(COMPILER) $(FLAGS) $(OBJCPP) -o $(NAME)

%.o: %.cpp ScalarConverter.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJCPP)

fclean: clean
	rm -rf $(NAME)

re: fclean all
