/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:32 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/28 18:41:19 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "limits.h"

typedef struct s_stack
{
	int				value;
	int				pos;
	int				index;
	int				close_to_top;
	int				i_target;
	int				cost;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

/* movements to follow for sorting algorithm */
void				ft_sa(t_stack **stack_a, int print);
void				ft_sb(t_stack **stack_b, int print);
void				ft_ss(t_stack **stack_a, t_stack **stack_b, int print);
void				ft_pa(t_stack **stack_a, t_stack **stack_b, int print);
void				ft_pb(t_stack **stack_a, t_stack **stack_b, int print);
void				ft_ra(t_stack **stack_a, int print);
void				ft_rb(t_stack **stack_b, int print);
void				ft_rr(t_stack **stack_a, t_stack **stack_b, int print);
void				ft_rra(t_stack **stack_a, int print);
void				ft_rrb(t_stack **stack_b, int print);
void				ft_rrr(t_stack **stack_a, t_stack **stack_b, int print);

/* algorithm handler functions */
void				ft_algorithm(t_stack **stack_a, t_stack **stack_b);
void				ft_order_two(t_stack **stack_a);
void				ft_order_three(t_stack **stack_a);
void				ft_order_four(t_stack **stack_a, t_stack **stack_b);
void				ft_order_five(t_stack **stack_a, t_stack **stack_b);
void				ft_order_big(t_stack **stack_a, t_stack **stack_b);

/* create stack_a */
t_stack				*ft_create_stack(char **av, int is_malloced);

/* Function that free the allocated spaces and Error handler */
void				ft_free_str(char **str);
void				ft_delete_stack(t_stack **lst);
void				ft_free_exit(t_stack **stack_a, char **av, int is_malloced);

/* Checker function */
void				ft_ac_av_check(char **av, int is_malloced);
int					ft_count_av(char **av);

/* utils functions */
long				ft_atol(const char *nbr);
int					ft_is_sorted(t_stack *stack_a);
int					ft_lstsize(t_stack *head);
void				ft_positioning(t_stack *head);
void				ft_index_positioning(t_stack *head);
int					ft_find_smallest_index(t_stack *head);
int					ft_find_biggest_index(t_stack *head);
t_stack				*ft_find_node_by_pos(t_stack *head, int pos);
t_stack				*ft_find_node_by_index(t_stack *head, int index);
void				ft_move_value_to_top(t_stack **stack_a, int value);
void				ft_move_index_to_top(t_stack **stack_a, int index);
int					ft_find_smallest_cost_index(t_stack *stack_b);

#endif
