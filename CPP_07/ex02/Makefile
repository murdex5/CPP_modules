NAME     = array
CC       = g++
CFLAGS   = -Wall -Wextra -Werror -std=c++98

SRCS     = main.cpp
OBJS     = $(SRCS:.cpp=.o)
HEADERS  = Array.hpp Array.tpp

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re