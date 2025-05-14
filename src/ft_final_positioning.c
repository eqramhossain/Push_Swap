/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_positioning.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:04:37 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/14 15:25:54 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_position(t_stack *head, int value);

void	ft_final_positioning(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp)
	{
		tmp->final_pos = ft_find_position(head, tmp->value);
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
