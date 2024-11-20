# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 20:19:30 by shamsate          #+#    #+#              #
#    Updated: 2024/07/23 03:43:54 by shamsate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = coffee

CC     = c++

HEADER =  include/Bureaucrat.hpp include/AForm.hpp include/PresidentialPardonForm.hpp include/Intern.hpp include/RobotoMyRequestForm.hpp include/ShrubberyCreationForm.hpp

RM     = rm -rf

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main src/Bureaucrat src/AForm src/PresidentialPardonForm src/RobotoMyRequestForm  src/ShrubberyCreationForm src/Intern

SRC		= $(FILES:=.cpp)

OBJ		= $(FILES:=.opp)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		@echo "\n* Compilation Starting $(NAME) ... ✔️ *\n"
		@ $(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "* Execution ready . ✔️ *\n"

%.opp: %.cpp $(HEADER)
	@echo "* Making Object file $(notdir $@) from source file $(notdir $<)  . ✔️ *\n"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@ $(RM) $(OBJ)
	@echo "\n* Removing object file .. ✔️ *\n"
	@echo "* Object file Removed . ✔️ *\n"

fclean: clean
	@ $(RM) $(NAME)
	@echo "* Removing $(NAME) . ✔️ *\n"
	@echo "* Removed . ✔️ *\n"

re: fclean all

.PHONY: all clean fclean re