/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_four.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:27:57 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/14 16:32:00 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_four(t_stack **stack_a, t_stack **stack_b)
{
	int	smallest;

	smallest = 0;
	while (ft_lstsize(*stack_a) > 3)
	{
		smallest = ft_find_smallest(*stack_a);
		ft_move_to_top(stack_a, smallest);
		ft_pb(stack_a, stack_b, 1);
	}
	ft_order_three(stack_a);
	ft_pa(stack_a, stack_b, 1);
}
