/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:33:03 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/20 15:34:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algorithm(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	ft_positioning(*stack_a);
	ft_index_positioning(*stack_a);
	if (size == 2)
		ft_order_two(stack_a);
	if (size == 3)
		ft_order_three(stack_a);
	if (size == 4)
		ft_order_four(stack_a, stack_b);
	if (size == 5)
		ft_order_five(stack_a, stack_b);
	if (size > 5)
		ft_order_big(stack_a, stack_b);
}
