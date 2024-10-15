NAME = main

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CFILE = tests.cpp Account.cpp

OBJC = $(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJC)
	$(COMPILER) $(FLAGS) $(OBJC) -o $(NAME)

%.o : %.cpp Account.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJC)

fclean: clean
	rm -rf $(NAME)

re: fclean all
