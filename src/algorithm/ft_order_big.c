/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:54:15 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/29 12:15:55 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_set_target(t_stack *stack_a, t_stack *stack_b);
static void	ft_calculate_move_cost(t_stack *stack_a, t_stack *stack_b);
static void	ft_move(t_stack **stack_a, t_stack **stack_b, int min_index);
static void	ft_move_node_to_up(t_stack **stack_a, t_stack **stack_b,
				t_stack *target_node, t_stack *cheapest_node);

void	ft_order_big(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	min_index;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		ft_pb(stack_a, stack_b, 1);
		size--;
	}
	ft_order_three(stack_a);
	while (*stack_b)
	{
		ft_positioning(*stack_a);
		ft_positioning(*stack_b);
		ft_set_target(*stack_a, *stack_b);
		ft_calculate_move_cost(*stack_a, *stack_b);
		min_index = ft_find_smallest_cost_index(*stack_b);
		ft_move(stack_a, stack_b, min_index);
		ft_pa(stack_a, stack_b, 1);
	}
	ft_positioning(*stack_a);
	ft_move_index_to_top(stack_a, 1);
	return ;
}

static void	ft_set_target(t_stack *stack_a, t_stack *stack_b)
{
	int		biggest;
	int		target_index;
	t_stack	*a;
	t_stack	*b;

	b = stack_b;
	while (b)
	{
		a = stack_a;
		biggest = INT_MAX;
		while (a)
		{
			if (a->index > b->index && a->index < biggest)
			{
				biggest = a->index;
				target_index = a->index;
			}
			a = a->next;
		}
		if (biggest == INT_MAX)
			b->i_target = ft_find_smallest_index(stack_a);
		else
			b->i_target = target_index;
		b = b->next;
	}
}

static void	ft_calculate_move_cost(t_stack *stack_a, t_stack *stack_b)
{
	int		size_a;
	int		size_b;
	t_stack	*target_node;
	t_stack	*current_node;

	size_a = ft_lstsize(stack_a);
	size_b = ft_lstsize(stack_b);
	current_node = stack_b;
	while (current_node)
	{
		target_node = ft_find_node_by_index(stack_a, current_node->i_target);
		if (target_node->close_to_top)
			target_node->cost = target_node->pos;
		else if (!target_node->close_to_top)
			target_node->cost = size_a - target_node->pos;
		if (current_node->close_to_top)
			current_node->cost = current_node->pos;
		else if (!current_node->close_to_top)
			current_node->cost = size_b - current_node->pos;
		current_node->cost = current_node->cost + target_node->cost;
		current_node = current_node->next;
	}
}

static void	ft_move_node_to_up(t_stack **stack_a, t_stack **stack_b,
		t_stack *target_node, t_stack *cheapest_node)
{
	while (*stack_a != target_node)
	{
		if (target_node->close_to_top)
			ft_ra(stack_a, 1);
		else
			ft_rra(stack_a, 1);
		ft_positioning(*stack_a);
	}
	while (*stack_b != cheapest_node)
	{
		if (cheapest_node->close_to_top)
			ft_rb(stack_b, 1);
		else
			ft_rrb(stack_b, 1);
		ft_positioning(*stack_b);
	}
}

static void	ft_move(t_stack **stack_a, t_stack **stack_b, int min_index)
{
	t_stack	*target_node;
	t_stack	*cheapest_node;

	cheapest_node = ft_find_node_by_index(*stack_b, min_index);
	target_node = ft_find_node_by_index(*stack_a, cheapest_node->i_target);
	if ((cheapest_node->close_to_top == 1) && (target_node->close_to_top == 1))
	{
		while ((*stack_a != target_node) && (*stack_b != cheapest_node))
		{
			ft_rr(stack_a, stack_b, 1);
			ft_positioning(*stack_a);
		}
	}
	if ((cheapest_node->close_to_top == 0) && (target_node->close_to_top == 0))
	{
		while ((*stack_a != target_node) && (*stack_b != cheapest_node))
		{
			ft_rrr(stack_a, stack_b, 1);
			ft_positioning(*stack_b);
		}
	}
	ft_move_node_to_up(stack_a, stack_b, target_node, cheapest_node);
}
