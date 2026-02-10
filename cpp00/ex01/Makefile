# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 20:40:09 by aghalmi           #+#    #+#              #
#    Updated: 2026/02/10 01:14:56 by aghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = srcs/contact.cpp \
	   srcs/phonebook.cpp \
	   srcs/main.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDE = include/contact.hpp \
		  include/phonebook.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -I include

GREEN = \033[0;92m
RED = \033[0;91m
MAGENTA = \033[0;95m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)$(NAME) ready!$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED)Cleaning...$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(MAGENTA)Full clean$(RESET)"

re: fclean all

.PHONY: all clean fclean re