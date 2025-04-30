/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:29:22 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/30 22:50:55 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*tmp;

	if (ac < 2)
		ft_print_error("Use case --> ./push_swap 2 1 3 6 5 8");
	if (ac == 2)
		av = ft_split(av[1], ' ');
	else
		av++;
	if (!av[0])
		ft_print_error("No Input.");
	ft_ac_av_check(av);
	stack_a = ft_stack_init(av);
	tmp = stack_a;
	while (tmp != NULL)
	{
		printf("[%d]\n", tmp->value);
		printf(" ↓\n");
		tmp = tmp->next;
	}
	return (0);
}
