/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_index_to_top.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:04:55 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/20 15:36:50 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_find_node(t_stack *head, int index);

void	ft_move_index_to_top(t_stack **stack_a, int index)
{
	t_stack	*tmp;

	tmp = ft_find_node(*stack_a, index);
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

static t_stack	*ft_find_node(t_stack *head, int index)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->index == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
