NAME = main

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CFILES = Fixed.cpp Point.cpp main.cpp

OBJC = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJC)
	$(COMPILER) $(FLAGS) $(OBJC) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJC) $(BOBJC)

fclean: clean
	rm -rf $(NAME) $(BONUS)

re: fclean all