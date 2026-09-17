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

INCLUDES = ${INCLUDE_DIR}/File.hpp \
 			${INCLUDE_DIR}/SedL.hpp 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ${SRCS_DIR}/File.cpp \
		${SRCS_DIR}/main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

test:
	@echo "🛠  Creating test Files"
	@$(MAKE) -C ./Tests
	@./Tests/Tests
	@$(MAKE) -C ./Tests fclean

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	@rm -rf ./ReadFile
	@rm -rf ./ReadFile.replace
	@rm -rf ./ReadFile2
	@rm -rf ./ReadFile2.replace
	
re: fclean all

.PHONY: all clean fclean re test