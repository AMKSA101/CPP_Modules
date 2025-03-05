CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
OBJS_DIR = objs
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -I. -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY:
