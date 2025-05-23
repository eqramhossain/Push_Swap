/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:22 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/12 18:38:28 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	ft_printlst(t_stack **lst);

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ft_ac_av_check(av, 1);
		stack_a = ft_create_stack(av, 1);
	}
	else
	{
		av++;
		ft_ac_av_check(av, 0);
		stack_a = ft_create_stack(av, 0);
	}
	ft_algorithm(&stack_a, &stack_b);
	ft_delete_stack(&stack_a);
	return (0);
}

// static void	ft_printlst(t_stack **lst)
// {
// 	t_stack	*head;
//
// 	head = *lst;
// 	while (head)
// 	{
// 		printf("[%d]-->", head->value);
// 		head = head->next;
// 	}
// }
