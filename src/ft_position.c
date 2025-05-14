/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:50:02 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/14 16:07:06 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_positioning(t_stack *head)
{
	int		i;
	int		median;
	t_stack	*current;

	i = 0;
	median = ft_lstsize(head) / 2;
	current = head;
	while (current)
	{
		if (i <= median)
			current->close_to_top = 1;
		else
			current->close_to_top = 0;
		current->position = i;
		current = current->next;
		i++;
	}
}
