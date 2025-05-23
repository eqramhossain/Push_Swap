/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:32 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/23 19:51:00 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "limits.h"

typedef struct s_stack
{
	int value;            // the number/integer itself
	int pos;              // current position in the stack (starting form 0)
	int index;            // position should after the sort (starting form 1)
	int close_to_top;     // true or false (1 or 0)
	int target;           // target value
	int cost;             // cost of moving the values form stack_a to stack_b
	struct s_stack *next; // pointer to the next node
	struct s_stack *prev; // pointer to the previous node
}		t_stack;

typedef struct s_min_max
{
	int	min_index;
	int	max_index;
}		t_min_max;

/* movements to follow for sorting algorithm */
void	ft_sa(t_stack **stack_a, int print);
void	ft_sb(t_stack **stack_b, int print);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, int print);
void	ft_pa(t_stack **stack_a, t_stack **stack_b, int print);
void	ft_pb(t_stack **stack_a, t_stack **stack_b, int print);
void	ft_ra(t_stack **stack_a, int print);
void	ft_rb(t_stack **stack_b, int print);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int print);
void	ft_rra(t_stack **stack_a, int print);
void	ft_rrb(t_stack **stack_b, int print);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int print);

/* algorithm handler functions */
void	ft_algorithm(t_stack **stack_a, t_stack **stack_b);
void	ft_order_two(t_stack **stack_a);
void	ft_order_three(t_stack **stack_a);
void	ft_order_four(t_stack **stack_a, t_stack **stack_b);
void	ft_order_five(t_stack **stack_a, t_stack **stack_b);
void	ft_order_big(t_stack **stack_a, t_stack **stack_b);

/* create stack_a */
t_stack	*ft_create_stack(char **av, int is_malloced);

/* Function that free the allocated spaces and Error handler */
void	ft_free_str(char **str);
void	ft_delete_stack(t_stack **lst);
void	ft_free_exit(t_stack **stack_a, char **av, int is_malloced);

/* Checker function */
void	ft_ac_av_check(char **av, int is_malloced);
int		ft_count_av(char **av);

/* utils functions */
long	ft_atol(const char *nbr);
int		ft_is_sorted(t_stack *stack_a);
int		ft_lstsize(t_stack *head);
void	ft_positioning(t_stack *head);
void	ft_index_positioning(t_stack *head);
int		ft_find_smallest(t_stack *head);
int		ft_find_biggest(t_stack *head);
void	ft_move_value_to_top(t_stack **stack_a, int value);
void	ft_move_index_to_top(t_stack **stack_a, int index);
t_stack	*ft_find_pos(t_stack *head, int pos);
t_stack	*ft_find_index(t_stack *head, int index);

#endif
