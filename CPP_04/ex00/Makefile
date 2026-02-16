# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/14 13:42:48 by kadferna          #+#    #+#              #
#    Updated: 2026/02/16 12:47:40 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CC = g++

INCLUDE_DIR = ./INCLUDES

SRCS_DIR = ./SRCS

INCLUDES = ${INCLUDE_DIR}/Animal.hpp \
			${INCLUDE_DIR}/Dog.hpp \
			${INCLUDE_DIR}/Cat.hpp \

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ${SRCS_DIR}/Animal.cpp \
		${SRCS_DIR}/Dog.cpp \
		${SRCS_DIR}/Cat.cpp \
		${SRCS_DIR}/main.cpp

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

