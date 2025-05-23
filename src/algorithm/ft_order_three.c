/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:55:48 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/20 15:39:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_three(t_stack **stack_a)
{
	int	one;
	int	two;
	int	three;

	one = (*stack_a)->value;
	two = (*stack_a)->next->value;
	three = (*stack_a)->next->next->value;
	if (one < two && two > three && three < one)
		ft_rra(stack_a, 1);
	else if (one > two && two < three && three > one)
		ft_sa(stack_a, 1);
	else if (one > two && two > three && three < one)
	{
		ft_sa(stack_a, 1);
		ft_rra(stack_a, 1);
	}
	else if (one > two && two < three && three < one)
		ft_ra(stack_a, 1);
	else if (one < two && two > three && three > one)
	{
		ft_sa(stack_a, 1);
		ft_ra(stack_a, 1);
	}
}
