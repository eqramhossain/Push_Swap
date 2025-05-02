/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:37:04 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/02 04:18:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_delete_stack(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stack_a;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
