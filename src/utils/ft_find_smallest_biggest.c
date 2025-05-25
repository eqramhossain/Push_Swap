/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_biggest.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:38:38 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/24 12:26:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_index(t_stack *head)
{
	t_stack	*current;
	int		smallest;

	current = head;
	smallest = current->index;
	while (current != NULL)
	{
		if (smallest > current->index)
			smallest = current->index;
		current = current->next;
	}
	return (smallest);
}

int	ft_find_biggest_index(t_stack *head)
{
	t_stack	*current;
	int		biggest;

	current = head;
	biggest = current->index;
	while (current != NULL)
	{
		if (biggest < current->index)
			biggest = current->index;
		current = current->next;
	}
	return (biggest);
}
