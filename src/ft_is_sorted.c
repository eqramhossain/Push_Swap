/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 02:40:52 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/02 05:01:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*previous;

	current = *stack_a;
	previous = NULL;
	while (current != NULL)
	{
		previous = current;
		if (previous->value < current->value)
			return (1);
		current = current->next;
	}
	return (0);
}
