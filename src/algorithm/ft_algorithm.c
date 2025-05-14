/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:33:03 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/14 16:34:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	ft_print_index(t_stack *head);

void	ft_algorithm(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	ft_positioning(*stack_a);
	ft_final_positioning(*stack_a);
	if (size == 2)
		ft_order_two(stack_a);
	if (size == 3)
		ft_order_three(stack_a);
	if (size == 4)
		ft_order_four(stack_a, stack_b);
	if (size == 5)
		ft_order_five(stack_a, stack_b);
	if (size > 5)
		ft_order_hundread(stack_a, stack_b);
	// ft_print_index(*stack_a);
}

// static void	ft_print_index(t_stack *head)
// {
// 	while (head)
// 	{
// 		printf("{\n");
// 		printf("\thead->value = %d\n", head->value);
// 		// printf("\thead->position = %d\n", head->position);
// 		// printf("\thead->final_position = %d\n", head->final_pos);
// 		// printf("\thead->close_to_top = %d\n", head->close_to_top);
// 		printf("}\n");
// 		head = head->next;
// 	}
// }
