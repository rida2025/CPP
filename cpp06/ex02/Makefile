NAME = main

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CFILE = main.cpp Base.cpp

OBJCPP = $(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCPP)
	$(COMPILER) $(FLAGS) $(OBJCPP) -o $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJCPP)

fclean: clean
	rm -rf $(NAME)

re: fclean all
