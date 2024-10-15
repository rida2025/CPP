NAME = megaphone

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CFILE = main.cpp

OBJC = $(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJC)
	$(COMPILER) $(FLAGS) $(OBJC) -o $(NAME)

%.o : %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJC)

fclean: clean
	rm -rf $(NAME)

re: fclean all
