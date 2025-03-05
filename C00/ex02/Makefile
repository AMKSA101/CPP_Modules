CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS_DIR = objs
SRCS = tests.cpp Account.cpp
OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))
NAME = logfile
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY:

