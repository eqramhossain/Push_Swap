/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_cost_index.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:14:37 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/25 22:23:39 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_cost_index(t_stack *stack_b)
{
	int		smallest;
	t_stack	*tmp;

	smallest = INT_MAX;
	tmp = stack_b;
	if (!stack_b)
		return (0);
	while (tmp)
	{
		if (tmp->cost < smallest)
			smallest = tmp->cost;
		tmp = tmp->next;
	}
	tmp = stack_b;
	while (tmp)
	{
		if (smallest == tmp->cost)
			break ;
		tmp = tmp->next;
	}
	return (tmp->index);
}
