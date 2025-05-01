/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 02:39:42 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/01 18:30:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_lstnew(int value);
static t_stack	*ft_lstadd_head(t_stack *head, int value);
static int		ft_is_duplicate(t_stack *head, int value);

t_stack	*ft_create_stack(char **av)
{
	t_stack	*stack_a;
	long	value;
	int		len;

	stack_a = NULL;
	len = ft_count_av(av) - 1;
	while (len >= 0)
	{
		value = ft_atol(av[len]);
		if (ft_is_duplicate(stack_a, value) == 0)
			stack_a = ft_lstadd_head(stack_a, value);
		else
			ft_error_exit();
		len--;
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

static int	ft_is_duplicate(t_stack *head, int value)
{
	t_stack	*current;

	current = head;
	while (current != NULL)
	{
		if (current->value == value)
			return (1);
		current = current->next;
	}
	return (0);
}
