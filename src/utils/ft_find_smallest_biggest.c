/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_biggest.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:38:38 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/20 12:39:03 by ehossain         ###   ########.fr       */
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
