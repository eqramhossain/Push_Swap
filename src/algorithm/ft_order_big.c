/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:54:15 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/26 15:00:23 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_set_target(t_stack *stack_a, t_stack *stack_b);
static void	ft_calculate_move_cost(t_stack *stack_a, t_stack *stack_b);
static void	ft_move(t_stack **stack_a, t_stack **stack_b, t_min_max *data);
static void	ft_move_node_to_up(t_stack **stack_a, t_stack **stack_b,
				t_stack **target_node, t_stack **cheapest_node);
// static void	ft_print_node(t_stack *node);

void	ft_order_big(t_stack **stack_a, t_stack **stack_b)
{
	int			size;
	t_min_max	data;

	size = ft_lstsize(*stack_a);
	data.max_index = size;
	while (size > 3)
	{
		ft_pb(stack_a, stack_b, 1);
		size--;
	}
	ft_order_three(stack_a);
	// ft_find_node_by_pos();
	// ft_find_smallest_cost_index();
	// ft_index_positioning();
	// ft_positioning();
	// ft_move_index_to_top();
	// exit(EXIT_FAILURE);
	while (*stack_b)
	{
		ft_positioning(*stack_a);
		ft_positioning(*stack_b);
		ft_set_target(*stack_a, *stack_b);
		ft_calculate_move_cost(*stack_a, *stack_b);
		data.min_index = ft_find_smallest_cost_index(*stack_b);
		ft_move(stack_a, stack_b, &data);
	}
	ft_positioning(*stack_a);
	ft_move_index_to_top(stack_a, 1);
}

// static void	ft_print_node(t_stack *node)
// {
// 	// while (node)
// 	// {
// 	printf("node->value = %d\n", node->value);
// 	printf("node->pos = %d\n", node->pos);
// 	printf("node->index = %d\n", node->index);
// 	printf("node->close_to_top = %d\n", node->close_to_top);
// 	printf("node->i_target = %d\n", node->i_target);
// 	printf("node->cost = %d\n", node->cost);
// 	// node = node->next;
// 	// }
// }

static void	ft_set_target(t_stack *stack_a, t_stack *stack_b)
{
	int		biggest;
	int		target_index;
	t_stack	*current_stack_a;
	t_stack	*current_stack_b;

	current_stack_b = stack_b;
	while (current_stack_b)
	{
		current_stack_a = stack_a;
		biggest = INT_MAX;
		while (current_stack_a)
		{
			if (current_stack_a->index > current_stack_b->index
				&& current_stack_a->index < biggest)
			{
				biggest = current_stack_a->index;
				target_index = current_stack_a->index;
			}
			current_stack_a = current_stack_a->next;
		}
		if (biggest == INT_MAX)
			current_stack_b->i_target = ft_find_smallest_index(stack_a);
		else
			current_stack_b->i_target = target_index;
		current_stack_b = current_stack_b->next;
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
		current_node->cost = current_node->pos;
		if (!(current_node->close_to_top))
			current_node->cost = size_b - current_node->pos;
		if (target_node->close_to_top)
			current_node->cost = current_node->cost + target_node->pos;
		else
			current_node->cost += size_a - target_node->pos;
		// current_target = ft_find_node_by_index(stack_a,
		//	current_node->i_target);
		// if (current_target->close_to_top)
		// 	current_target->cost = current_target->pos;
		// else if (!current_target->close_to_top)
		// 	current_target->cost = size_a - current_target->pos;
		// if (current_node->close_to_top)
		// 	current_node->cost = current_node->pos;
		// else if (!current_node->close_to_top)
		// 	current_node->cost = size_b - current_node->pos;
		// // store the total cost of moving the two node
		// current_node->cost = current_node->cost + current_target->cost;
		current_node = current_node->next;
	}
}

static void	ft_move_node_to_up(t_stack **stack_a, t_stack **stack_b,
		t_stack **target_node, t_stack **cheapest_node)
{
	while (*stack_a != *target_node)
	{
		if ((*target_node)->close_to_top)
			ft_ra(stack_a, 1);
		else
			ft_rra(stack_a, 1);
		ft_positioning(*stack_a);
	}
	while (*stack_b != *cheapest_node)
	{
		if ((*cheapest_node)->close_to_top)
			ft_rb(stack_b, 1);
		else
			ft_rrb(stack_b, 1);
		ft_positioning(*stack_a);
	}
}

static void	ft_move(t_stack **stack_a, t_stack **stack_b, t_min_max *data)
{
	t_stack	*target_node;
	t_stack	*cheapest_node;

	cheapest_node = ft_find_node_by_index(*stack_b, data->min_index);
	target_node = ft_find_node_by_index(*stack_a, cheapest_node->i_target);
	// printf("cheapest_node\n");
	// ft_print_node(cheapest_node);
	// printf("target_node\n");
	// ft_print_node(target_node);
	ft_positioning(*stack_a);
	ft_positioning(*stack_b);
	ft_move_node_to_up(stack_a, stack_b, &target_node, &cheapest_node);
	ft_pa(stack_a, stack_b, 1);
}
