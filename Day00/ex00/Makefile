# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 21:19:27 by shamsate          #+#    #+#              #
#    Updated: 2024/02/05 10:27:35 by shamsate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = megaphone

CC     = c++

RM     = rm -rf

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): megaphone.o
	@$(CC) $(CFLAGS)  $^ -o $(NAME)
	@echo "\n* Execution ready . ✔️ *\n"

megaphone.o: megaphone.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) megaphone.o
	@echo "\n* Object file Removed . ✔️ *\n"

fclean: clean
	@$(RM) $(NAME)
	@echo "* Removing $(NAME) . ✔️ *\n"
	@echo "* Removed . ✔️ *\n"

re: fclean all

.PHONY: all clean fclean re