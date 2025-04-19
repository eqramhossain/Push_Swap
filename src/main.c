/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:22 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/19 07:05:03 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*stack_a;

	ft_ac_av_check(ac, av);
	stack_a = ft_stack_init(ac, av);
	while (stack_a != NULL)
	{
		printf("stack_a->value = %d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}
