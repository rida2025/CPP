NAME = PmergeMe

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CFILE = main.cpp PmergeMe.cpp

OBJCPP = $(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCPP)
	$(COMPILER) $(FLAGS) $(OBJCPP) -o $(NAME)

%.o: %.cpp PmergeMe.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJCPP)

fclean: clean
	rm -rf $(NAME)

re: fclean all
