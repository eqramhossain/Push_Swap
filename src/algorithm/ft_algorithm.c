/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:33:03 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/08 16:38:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	ft_print_index(t_stack *head);

void	ft_algorithm(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	ft_index_init(stack_a);
	// ft_print_index(*stack_a);
	if (size == 2)
		ft_algorithm_two(stack_a);
	if (size == 3)
		ft_algorithm_three(stack_a);
	if (size == 4)
		ft_algorithm_four(stack_a, stack_b);
	if (size == 5)
		ft_algorithm_five(stack_a, stack_b);
	if (size > 5)
		ft_algorithm_all(stack_a, stack_b);
}

// static void	ft_print_index(t_stack *head)
// {
// 	while (head)
// 	{
// 		printf("head->index = %d head->value = %d\n", head->index, head->value);
// 		head = head->next;
// 	}
// 	exit(EXIT_FAILURE);
// }
