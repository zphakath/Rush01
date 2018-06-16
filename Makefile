# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhanye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 14:49:53 by akhanye           #+#    #+#              #
#    Updated: 2018/06/16 14:52:56 by akhanye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

CLANG = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp General.cpp

all: $(NAME)

$(NAME):
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compile Success"

clean:
	@rm $(NAME)
	@echo "Cleaning files"

fclean:
	@rm -rf $(NAME)
	@echo "Force Clean"

re: fclean all
