# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/14 13:42:48 by kadferna          #+#    #+#              #
#    Updated: 2026/04/17 23:54:08 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClasses

CC = g++

INCLUDE_DIR = ./INCLUDES

SRCS_DIR = ./SRCS

INCLUDES = ${INCLUDE_DIR}/AAnimal.hpp \
			${INCLUDE_DIR}/Dog.hpp \
			${INCLUDE_DIR}/Cat.hpp \
			${INCLUDE_DIR}/WrongAnimal.hpp \
			${INCLUDE_DIR}/WrongCat.hpp \
			${INCLUDE_DIR}/Brain.hpp 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ${SRCS_DIR}/AAnimal.cpp \
		${SRCS_DIR}/Dog.cpp \
		${SRCS_DIR}/Cat.cpp \
		${SRCS_DIR}/WrongAnimal.cpp \
		${SRCS_DIR}/WrongCat.cpp \
		${SRCS_DIR}/Brain.cpp \
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

