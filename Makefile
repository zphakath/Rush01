# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhanye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 14:49:53 by akhanye           #+#    #+#              #
#    Updated: 2018/06/17 14:29:21 by akhanye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

CLANG = clang++

FLAGS = -Wall -Wextra -Werror -lncurses
MNFLAGS = -lmlx -framework OpenGL -framework AppKit

SRC = main.cpp General.cpp CPUmodule.cpp IMonitorModule.cpp RAMmodule.cpp Network.cpp IMonitorDisplay.cpp \
	  Ncurses.cpp Mini.cpp

all: $(NAME)

$(NAME):
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME) $(MNFLAGS)
	@echo "Compile Success"

clean:
	@rm $(NAME)
	@echo "Cleaning files"

fclean:
	@rm -rf $(NAME)
	@echo "Force Clean"

re: fclean all
