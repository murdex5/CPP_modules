# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 14:33:57 by kadferna          #+#    #+#              #
#    Updated: 2025/11/14 14:33:59 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Tests

CC = g++

SRCS = tests.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ./Tests.cpp

OBJS = $(SRCS:.cpp=.o)

ll: $(NAME)

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