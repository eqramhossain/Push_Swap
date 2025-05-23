/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:54:15 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/23 19:54:18 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_big(t_stack **stack_a, t_stack **stack_b)
{
	int			size;
	t_min_max	data;

	size = ft_lstsize(*stack_a);
	data.max_index = size;
	printf("data.max_index = %d\n", data.max_index);
	while (size > 3)
	{
		ft_pb(stack_a, stack_b, 1);
		size--;
	}
	ft_order_three(stack_a);
	while (stack_b != NULL)
	{
		ft_pa(stack_a, stack_b, 1);
	}
}
