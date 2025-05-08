/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 09:05:07 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/04 09:07:11 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_exit(t_stack **stack_a, char **av, int is_malloced)
{
	if (is_malloced)
	{
		ft_free_str(av);
		free(av);
	}
	ft_delete_stack(stack_a);
	exit(EXIT_FAILURE);
}
