# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 10:00:18 by kadferna          #+#    #+#              #
#    Updated: 2025/11/26 10:00:19 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = g++

INCLUDE_DIR = ./INCLUDES

SRCS_DIR = ./SRCS


INCLUDES = ${INCLUDE_DIR}/Harl.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ${SRCS_DIR}/Harl.cpp \
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