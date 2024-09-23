# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 10:59:32 by adbouras          #+#    #+#              #
#    Updated: 2024/09/22 18:43:49 by adbouras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GRN	= \033[1;92m
YLW	= \033[1;93m
RED	= \033[1;91m
CYN = \033[1;96m
RST	= \033[0;39m

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bank

SRC = tests.cpp Account.cpp

NCLD = Account.hpp

OBJ_DIR = objects/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all:$(NAME)

$(NAME): $(OBJ)
	@echo "$(YLW)[Compiling $(NAME)]$(RST)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GRN)[Compiled successfully, to run, execute: ./$(NAME)]$(RST)"

$(OBJ_DIR)%.o:%.cpp $(NCLD)
	@mkdir -p $(OBJ_DIR)
	@echo "$(YLW)[Genarating object file $@]$(RST)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)[Objects cleaned]$(RST)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)[$(NAME) cleaned]$(RST)"

re: fclean all