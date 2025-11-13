# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 15:28:30 by kadferna          #+#    #+#              #
#    Updated: 2025/11/13 15:28:32 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = SedL

CC = g++

INCLUDE_DIR = ./INCLUDES

SRCS_DIR = ./SRCS


INCLUDES =  ${INCLUDE_DIR}/Weapon.hpp \ 
			${INCLUDE_DIR}/HumanA.hpp \
			${INCLUDE_DIR}/HumanB.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ${SRCS_DIR}/HumanA.cpp \
		${SRCS_DIR}/HumanB.cpp \
		${SRCS_DIR}/Weapon.cpp \
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