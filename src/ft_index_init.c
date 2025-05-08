/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:04:37 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/08 16:19:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_init(t_stack **stack_a)
{
	int		index;
	t_stack	*current;

	index = 0;
	current = *stack_a;
	while (current != NULL)
	{
		index++;
		current->index = index;
		current = current->next;
	}
}
