/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:55:20 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/24 12:27:05 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_five(t_stack **stack_a, t_stack **stack_b)
{
	int	index;

	index = 0;
	while (ft_lstsize(*stack_a) > 3)
	{
		index = ft_find_smallest_index(*stack_a);
		ft_move_index_to_top(stack_a, index);
		ft_pb(stack_a, stack_b, 1);
	}
	if (ft_is_sorted(*stack_b))
		ft_sb(stack_b, 1);
	ft_order_three(stack_a);
	ft_pa(stack_a, stack_b, 1);
	ft_pa(stack_a, stack_b, 1);
}
