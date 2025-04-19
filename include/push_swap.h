/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:32 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/19 06:54:01 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "limits.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

/* Colorful print message */
# define RED "\e[31m"
# define GREEN "\e[32m"
# define END "\e[0m"

/* Error handler function */
void				ft_print_error(const char *str);

/* inisialize stack_a and check integer */
void				ft_ac_av_check(int ac, char **av);
t_stack				*ft_stack_init(int ac, char *av[]);

long				ft_atol(const char *nptr);

#endif
