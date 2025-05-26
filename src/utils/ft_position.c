/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:50:02 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/26 15:17:19 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// this function determine the current position in the t_stack
// so if i have 6 1 2 5 3 4
// the pos for 6 = 1
// pos for 1 = 2
// pos for 2 = 3
// pos for 5 = 4 ... and continue like this
// there is another var in this function which determine
// if the integer is close to head
// or close to tail
// so it will help to do the movements because if the
// close_to_top is true so ft_ra(ra) ft_rb(rb) is cheaper
// else ft_rra(rra) ft_rrb(rrb) is cheaper

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
		current->pos = i;
		current = current->next;
		i++;
	}
}
