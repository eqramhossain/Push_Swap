/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_value_to_top.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:13:53 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/20 15:14:48 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_find_node(t_stack *head, int value);

void	ft_move_value_to_top(t_stack **stack_a, int value)
{
	t_stack	*tmp;

	tmp = ft_find_node(*stack_a, value);
	if (tmp->close_to_top)
	{
		while (*stack_a != tmp)
			ft_ra(stack_a, 1);
	}
	else
	{
		while (*stack_a != tmp)
			ft_rra(stack_a, 1);
	}
}

static t_stack	*ft_find_node(t_stack *head, int value)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->value == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
