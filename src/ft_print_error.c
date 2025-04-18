/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:37:02 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/16 15:22:40 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_error(const char *str)
{
	ft_putstr_fd(RED "Error:\n", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd(END, 2);
	exit(EXIT_FAILURE);
}
