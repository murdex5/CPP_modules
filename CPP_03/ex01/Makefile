# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 13:26:19 by kadferna          #+#    #+#              #
#    Updated: 2026/01/30 13:26:20 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed2.0

CC = g++

INCLUDE_DIR = ./INCLUDES

SRCS_DIR = ./SRCS

INCLUDES = ${INCLUDE_DIR}/Claptrap.hpp 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ${SRCS_DIR}/Claptrap.cpp \
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

.PHONY: all clean fclean re