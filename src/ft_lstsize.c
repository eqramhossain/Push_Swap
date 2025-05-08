/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:21:12 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/05 20:22:47 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *head)
{
	int		i;
	t_stack	*current;

	i = 0;
	current = head;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
