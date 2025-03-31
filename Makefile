# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 19:41:46 by ehossain          #+#    #+#              #
#    Updated: 2025/03/31 20:05:54 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCE = ${shell find ./src "*.c"}
OBJ = ${SOURCE.c=.o}
LIBFT = ./lib/libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror -g3

all: $(NAME)

$(NAME) : 
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@

$(LIBFT) :
	make -C libft

clean :
	make -C clean libft
	rm -f $(OBJ)

fclean : 
	make -C fclean libft
	rm -f push_swap

re: fclean all
	make -c fclean libft
