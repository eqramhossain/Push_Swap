/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 02:39:42 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/08 12:51:21 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_lstnew(int value);
static t_stack	*ft_lstadd_head(t_stack *head, int value);
static int		ft_is_duplicate(t_stack **stack_a);
static void		ft_error(t_stack **stack_a, char **av, int is_malloced);

t_stack	*ft_create_stack(char **av, int is_malloced)
{
	t_stack	*stack_a;
	long	value;
	int		len;

	stack_a = NULL;
	len = ft_count_av(av) - 1;
	while (len >= 0)
	{
		value = ft_atol(av[len]);
		stack_a = ft_lstadd_head(stack_a, value);
		len--;
	}
	if (ft_is_duplicate(&stack_a))
		ft_error(&stack_a, av, is_malloced);
	if (ft_is_sorted(stack_a))
		ft_free_exit(&stack_a, av, is_malloced);
	if (is_malloced)
	{
		ft_free_str(av);
		free(av);
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

static int	ft_is_duplicate(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*tmp;

	current = *stack_a;
	while (current != NULL)
	{
		tmp = current->next;
		while (tmp != NULL)
		{
			if (tmp->value == current->value)
				return (1);
			tmp = tmp->next;
		}
		current = current->next;
	}
	return (0);
}

static void	ft_error(t_stack **stack_a, char **av, int is_malloced)
{
	if (is_malloced)
	{
		ft_free_str(av);
		free(av);
	}
	ft_delete_stack(stack_a);
	ft_putstr_fd("Error:\n", 2);
	exit(EXIT_FAILURE);
}
