# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 16:38:17 by kadferna          #+#    #+#              #
#    Updated: 2026/10/20 12:32:15 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = NYNF2N2

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./Bureaucrat.cpp \
		./AForm.cpp \
		./PresidentialPardonForm.cpp \
		./RobotomyRequestForm.cpp \
		./ShrubberyCreationForm.cpp \
		./main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf ./Home_shrubbery
	
re: fclean all