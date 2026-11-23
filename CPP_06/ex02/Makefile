NAME = irt

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = ./Base.hpp \
			./A.hpp \
			./B.hpp \
			./C.hpp

SRCS = ./Base.cpp \
		./main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all