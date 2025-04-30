/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:25:25 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/30 16:49:15 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;
	t_stack	*next;

	if (*stack_b)
	{
		head = *stack_b;
		next = (*stack_b)->next;
		head->next = *stack_a;
		*stack_a = head;
		*stack_b = next;
	}
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;
	t_stack	*next;

	if (*stack_a)
	{
		head = *stack_a;
		next = (*stack_a)->next;
		head->next = *stack_b;
		*stack_b = head;
		*stack_a = next;
	}
}
