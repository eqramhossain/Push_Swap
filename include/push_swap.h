/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:32 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/02 10:41:10 by ehossain         ###   ########.fr       */
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

/* movements to follow for sorting algorithm */
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

/* create stack_a */
t_stack				*ft_create_stack(char **av, int is_malloced);

/* Function that free the allocated spaces */
void				ft_free_str(char **str);
void				ft_delete_stack(t_stack **lst);

/* Error handler function */

/* Checker and helper function */
void				ft_ac_av_check(char **av, int is_malloced);
int					ft_count_av(char **av);
long				ft_atol(const char *nbr);
int					ft_is_sorted(t_stack **stack_a);

#endif
