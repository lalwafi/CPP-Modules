NAME    = hi_this_is_brain
CXX      = c++
CXXFLAGS  = -Wall -Werror -Wextra -std=c++98

SRCS    = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
		
OBJ     = $(SRCS:.cpp=.o)

%.o : %.c
	$(CXX) -c $(CXXFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re