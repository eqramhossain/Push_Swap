/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:37:28 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/27 16:35:58 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*next;
	t_stack	*next_next;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	current = *stack_a;
	next = (*stack_a)->next;
	next_next = (*stack_a)->next->next;
	current->next = next_next;
	next->next = current;
	(*stack_a) = next;
}

void	ft_sb(t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*next;
	t_stack	*next_next;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	current = *stack_b;
	next = (*stack_b)->next;
	next_next = (*stack_b)->next->next;
	current->next = next_next;
	next->next = current;
	(*stack_b) = next;
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
}
