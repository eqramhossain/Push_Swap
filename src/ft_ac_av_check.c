/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ac_av_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:58:16 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/01 16:07:33 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_all_argv_is_integer(char **av);
static void	ft_str_to_number(char **av);

int	ft_ac_av_check(char **av)
{
	int	ac;

	ac = ft_count_av(av);
	if (ac == 1)
		return (1);
	if (!av[0])
		return (1);
	ft_check_all_argv_is_integer(av);
	ft_str_to_number(av);
	return (0);
}

int	ft_count_av(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

static void	ft_check_all_argv_is_integer(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (j == 0 && av[i][j] == '-')
				j++;
			if (ft_isdigit(av[i][j]) == 0)
				ft_error_exit();
			j++;
		}
		i++;
	}
}

static void	ft_str_to_number(char **av)
{
	long	value;
	int		i;

	i = 0;
	while (av[i])
	{
		value = ft_atol(av[i]);
		if ((value < (long)INT_MIN) || (value > (long)INT_MAX))
			ft_error_exit();
		i++;
	}
}
