# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhanye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 14:49:53 by akhanye           #+#    #+#              #
#    Updated: 2018/06/17 13:08:27 by akhanye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

CLANG = clang++

FLAGS = -Wall -Wextra -Werror -lncurses

SRC = main.cpp General.cpp CPUmodule.cpp IMonitorModule.cpp RAMmodule.cpp Network.cpp IMonitorDisplay.cpp \
	  Ncurses.cpp

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
