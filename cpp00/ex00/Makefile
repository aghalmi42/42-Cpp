# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 18:32:43 by aghalmi           #+#    #+#              #
#    Updated: 2026/02/09 20:17:32 by aghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = srcs/megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

GREEN = \033[0;92m
RED = \033[0;91m
MAGENTA = \033[0;95m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) ready!$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED)Cleaning...$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(MAGENTA)Full clean$(RESET)"

re: fclean all

.PHONY: all clean fclean re