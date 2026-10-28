# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 16:38:17 by kadferna          #+#    #+#              #
#    Updated: 2026/10/28 11:56:21 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bossman

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./Bureaucrat.cpp \
		./AForm.cpp \
		./PresidentialPardonForm.cpp \
		./RobotomyRequestForm.cpp \
		./ShrubberyCreationForm.cpp \
		./Intern.cpp \
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