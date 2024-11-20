# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 15:28:43 by shamsate          #+#    #+#              #
#    Updated: 2024/11/12 22:31:34 by shamsate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = PmergeMe

CC     = c++

HEADER = include/PmergeMe.hpp

RM     = rm -rf

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main src/PmergeMe

SRC		= $(FILES:=.cpp)

OBJ		= $(FILES:=.opp)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		@echo "\n* Compilation Starting $(NAME) ... ✔️ *\n"
		@ $(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "* Execution ready. ✔️ *\n"

%.opp: %.cpp $(HEADER)
	@echo "* Making Object file $(notdir $@) from source file $(notdir $<) . ✔️ *\n"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@ $(RM) $(OBJ)
	@echo "\n* Removing object file .. ✔️ *\n"
	@echo "* Object file Removed. ✔️ *\n"

fclean: clean
	@ $(RM) $(NAME)
	@echo "* Removing $(NAME) .✔️ *\n"
	@echo "* Removed. ✔️ *\n"

re: fclean all

.PHONY: clean%