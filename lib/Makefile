# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/23 14:36:30 by ehossain          #+#    #+#              #
#    Updated: 2025/03/31 19:37:15 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ${shell find ./src -name "*.c"} 
NAME = libft.a
OBJECT = ${SOURCE:.c=.o}
INCLUDE = ../include
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECT)
	@ar rcs $(NAME) $(OBJECT)

%.o:%.c
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean : 
	@rm -rf $(OBJECT)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
