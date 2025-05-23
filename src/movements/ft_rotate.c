/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:51:30 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/06 08:46:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack_a, int print)
{
	t_stack	*new_head;
	t_stack	*old_head;
	t_stack	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	old_head = *stack_a;
	new_head = (*stack_a)->next;
	old_head->next = NULL;
	tmp = new_head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = old_head;
	(*stack_a) = new_head;
	if (print)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **stack_b, int print)
{
	t_stack	*new_head;
	t_stack	*old_head;
	t_stack	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	old_head = *stack_b;
	new_head = (*stack_b)->next;
	old_head->next = NULL;
	tmp = new_head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = old_head;
	(*stack_b) = new_head;
	if (print)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, int print)
{
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
	if (print)
		write(1, "rr\n", 3);
}
