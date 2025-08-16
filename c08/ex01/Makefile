CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
SRC = main.cpp
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
Name = test

all: $(Name)

$(Name): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY:
