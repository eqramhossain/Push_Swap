/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_positioning.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:04:37 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/26 15:13:06 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// this function predermined the sorted position of the current value
// if i have 6 number in stack_a 6 1 2 5 3 4
// so the index for 6 = 6
// index for 1 = 1
// index for 2 = 2 ... and continue like this

static int	ft_find_position(t_stack *head, int value);

void	ft_index_positioning(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp)
	{
		tmp->index = ft_find_position(head, tmp->value);
		tmp = tmp->next;
	}
}

static int	ft_find_position(t_stack *head, int value)
{
	int		index;
	t_stack	*current;

	index = 0;
	current = head;
	while (current)
	{
		if (current->value <= value)
			index++;
		current = current->next;
	}
	return (index);
}
