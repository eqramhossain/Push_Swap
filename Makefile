# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 19:41:46 by ehossain          #+#    #+#              #
#    Updated: 2025/05/27 22:14:28 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCE = ./src/algorithm/ft_algorithm.c \
./src/algorithm/ft_order_big.c \
./src/algorithm/ft_order_five.c \
./src/algorithm/ft_order_four.c \
./src/algorithm/ft_order_three.c \
./src/algorithm/ft_order_two.c \
./src/ft_ac_av_check.c \
./src/ft_create_stack.c \
./src/ft_delete_stack.c \
./src/ft_free_exit.c \
./src/ft_free_str.c \
./src/main.c \
./src/movements/ft_push.c \
./src/movements/ft_reverse_rotate.c \
./src/movements/ft_rotate.c \
./src/movements/ft_swap.c \
./src/utils/ft_atol.c \
./src/utils/ft_find_node_by_index.c \
./src/utils/ft_find_node_by_pos.c \
./src/utils/ft_find_smallest_biggest.c \
./src/utils/ft_find_smallest_cost_index.c \
./src/utils/ft_index_positioning.c \
./src/utils/ft_is_sorted.c \
./src/utils/ft_lstsize.c \
./src/utils/ft_move_index_to_top.c \
./src/utils/ft_move_value_to_top.c \
./src/utils/ft_position.c \
./src/utils/ft_stack_is_sorted.c \

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

re: fclean 
	@$(MAKE) re -C lib
	@$(MAKE) all

norm:
	norminette lib
	norminette src
	norminette include

.PHONY: clean fclean re all

# Define color variables
RED    = \033[0;31m
GREEN  = \033[0;32m
END     = \033[0m  # No Color (reset)
