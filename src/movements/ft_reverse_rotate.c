/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:53:12 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/27 20:11:10 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*old_head;
	t_stack	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	old_head = *stack_a;
	current = *stack_a;
	while (current->next->next != NULL)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	tmp->next = old_head;
	(*stack_a) = tmp;
}

void	ft_rrb(t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*old_head;
	t_stack	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	old_head = *stack_b;
	current = *stack_b;
	while (current->next->next != NULL)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	tmp->next = old_head;
	(*stack_b) = tmp;
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}
