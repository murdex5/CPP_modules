# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 16:38:17 by kadferna          #+#    #+#              #
#    Updated: 2026/10/16 12:05:20 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = NYNF2N2

CC = g++

INCLUDES = ./Bureaucrat.hpp \
			./AForm.hpp \
			./PresidentialPardonForm.hpp \
			./RobotomyRequestForm.hpp \
			./ShrubberyCreationForm.hpp \
			./Form.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./Bureaucrat.cpp \
		./AForm.cpp \
		./PresidentialPardonForm.cpp \
		./RobotomyRequestForm.cpp \
		./ShrubberyCreationForm.cpp \
		./Form.cpp
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
	
re: fclean all