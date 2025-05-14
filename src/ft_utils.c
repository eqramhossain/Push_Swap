/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:13:53 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/14 16:25:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest(t_stack *head)
{
	t_stack	*current;
	int		smallest;

	current = head;
	smallest = current->value;
	while (current != NULL)
	{
		if (smallest > current->value)
			smallest = current->value;
		current = current->next;
	}
	return (smallest);
}

int	ft_find_biggest(t_stack *head)
{
	t_stack	*current;
	int		biggest;

	current = head;
	biggest = current->value;
	while (current != NULL)
	{
		if (biggest < current->value)
			biggest = current->value;
		current = current->next;
	}
	return (biggest);
}

t_stack	*ft_find_node(t_stack *head, int smallest)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->value == smallest)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

void	ft_move_to_top(t_stack **stack_a, int smallest)
{
	t_stack	*tmp;

	tmp = ft_find_node(*stack_a, smallest);
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
