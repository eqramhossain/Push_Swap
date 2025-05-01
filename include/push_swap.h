/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:32 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/01 16:04:32 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "limits.h"

// /* Colorful print message */
// # define RED "\e[31m"
// # define GREEN "\e[32m"
// # define END "\e[0m"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

/* movements to find the lowest cost of sorting the list */
void				ft_sa(t_stack **stack_a);
void				ft_sb(t_stack **stack_b);
void				ft_ss(t_stack **stack_a, t_stack **stack_b);
void				ft_pa(t_stack **stack_a, t_stack **stack_b);
void				ft_pb(t_stack **stack_a, t_stack **stack_b);
void				ft_ra(t_stack **stack_a);
void				ft_rb(t_stack **stack_b);
void				ft_rr(t_stack **stack_a, t_stack **stack_b);
void				ft_rra(t_stack **stack_a);
void				ft_rrb(t_stack **stack_b);
void				ft_rrr(t_stack **stack_a, t_stack **stack_b);

/* Error handler function */
void				ft_error_exit(void);

/* inisialize stack_a and check integer */
int					ft_ac_av_check(char **av);
t_stack				*ft_stack_init(char *av[]);
long				ft_atol(const char *nbr);

/* Function that free the allocated spaces */
void				ft_free_str(char **str);

/* Other helper functions */
int					ft_count_av(char **av);

#endif
