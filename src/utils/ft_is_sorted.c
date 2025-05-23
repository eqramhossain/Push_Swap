/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 02:40:52 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/04 06:07:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_stack *head)
{
	t_stack	*current;
	t_stack	*next;

	current = head;
	while (current->next != NULL)
	{
		next = current->next;
		if (current->value < next->value)
			current = current->next;
		else
			return (0);
	}
	return (1);
}
