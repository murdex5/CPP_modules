# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 11:28:28 by kadferna          #+#    #+#              #
#    Updated: 2025/11/12 11:28:34 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Moar_brainz

CC = g++

INCLUDES = ./Zombie.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./Zombie.cpp \
		./zombieHorde.cpp \
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

.PHONY: all clean fclean re