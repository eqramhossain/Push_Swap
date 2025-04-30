/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ac_av_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:58:16 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/30 23:05:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_av(char **av);
static void	ft_check_all_argv_is_integer(char **av);
static void	ft_str_to_number(char **av);

void	ft_ac_av_check(char **av)
{
	int	ac;

	ac = ft_count_av(av);
	if (ac < 2)
		ft_print_error("There is only one integer.");
	ft_check_all_argv_is_integer(av);
	ft_str_to_number(av);
}

static int	ft_count_av(char **av)
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
				ft_print_error("Only integer is accepted as values");
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
			ft_print_error("There is a value more or less than INT_MIN/INT_MAX");
		i++;
	}
}
