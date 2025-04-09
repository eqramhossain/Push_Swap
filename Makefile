# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 19:41:46 by ehossain          #+#    #+#              #
#    Updated: 2025/04/05 23:06:15 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCE = ${shell find ./src -name "*.c"}
OBJ = ${SOURCE:.c=.o}
LIBFT = ./lib/libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror -g3
MAKE = make --no-print-directory

all: $(NAME)

$(NAME) : $(OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)push_swap complied$(END)"
	
%.o: %.c
	@$(CC) $(CFLAGS) -Iinclude -c $< -o $@


$(LIBFT) :
	@$(MAKE) -C lib
	@echo "$(GREEN)libft complied$(END)"

clean :
	@$(MAKE) clean -C lib
	@rm -f $(OBJ)
	@echo "$(RED)push_swap and libft object file removed$(END)"

fclean : 
	@$(MAKE) fclean -C lib
	@rm -f push_swap
	@echo "$(RED)push_swap and libft.a removed$(END)"

re: fclean all
	@$(MAKE) re -C lib

norm:
	norminette lib
	norminette src

.PHONY: clean fclean re all

# Define color variables
BLACK  = \033[0;30m
GRAY   = \033[0;37m
D_GRAY = \033[1;30m
RED    = \033[0;31m
L_RED  = \033[1;31m
GREEN  = \033[0;32m
L_GREEN= \033[1;32m
ORANGE = \033[0;33m
YELLOW = \033[1;33m
BLUE   = \033[0;34m
L_BLUE = \033[1;34m
PURPLE = \033[0;35m
L_PURPLE=\033[1;35m
CYAN   = \033[0;36m
L_CYAN = \033[1;36m
WHITE  = \033[1;37m
END     = \033[0m  # No Color (reset)
