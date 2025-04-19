/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 02:39:42 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/19 06:54:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_lstnew(int value);
static t_stack	*ft_lstadd_head(t_stack *head, int value);

t_stack	*ft_stack_init(int ac, char **av)
{
	t_stack	*stack_a;
	int		value;

	stack_a = NULL;
	ac = ac - 1;
	while (ac > 0)
	{
		value = ft_atol(av[ac]);
		if ((value < INT_MIN) || (value > INT_MAX))
			ft_print_error("There is a value more or less than INT_MIN/INT_MAX");
		stack_a = ft_lstadd_head(stack_a, value);
		ac--;
	}
	return (stack_a);
}

static t_stack	*ft_lstnew(int value)
{
	t_stack	*new_node;

	new_node = ft_calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

static t_stack	*ft_lstadd_head(t_stack *head, int value)
{
	t_stack	*new_node;

	if (head == NULL)
		return (ft_lstnew(value));
	new_node = ft_calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = head;
	return (new_node);
}
