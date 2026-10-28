# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 16:38:17 by kadferna          #+#    #+#              #
#    Updated: 2026/10/28 12:30:11 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bossman

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = ./Bureaucrat.hpp \
			./AForm.hpp \
			./PresidentialPardonForm.hpp \
			./RobotomyRequestForm.hpp \
			./ShrubberyCreationForm.hpp \
			./Intern.hpp

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
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf ./Home_shrubbery
	
re: fclean all