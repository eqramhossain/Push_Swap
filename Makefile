# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 19:41:46 by ehossain          #+#    #+#              #
#    Updated: 2025/04/15 04:22:56 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCE = ${shell find ./src -name "*.c"}
OBJ = ${SOURCE:.c=.o}
LIBFT = ./lib/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
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

fclean : clean 
	@$(MAKE) fclean -C lib
	@rm -f push_swap
	@echo "$(RED)push_swap and libft removed$(END)"

re: fclean all
	@$(MAKE) re -C lib

norm:
	norminette lib
	norminette src
	norminette include

.PHONY: clean fclean re all

# Define color variables
RED    = \033[0;31m
GREEN  = \033[0;32m
END     = \033[0m  # No Color (reset)
