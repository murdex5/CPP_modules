# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 14:11:59 by kadferna          #+#    #+#              #
#    Updated: 2025/11/13 14:12:02 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

CC = g++

INCLUDES = ./Weapon.hpp ./HumanA.hpp ./HumanB.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./HumanA.cpp \
		./HumanB.cpp \
		./Weapon.cpp \
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