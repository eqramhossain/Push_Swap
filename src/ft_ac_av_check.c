/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ac_av_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:58:16 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/16 16:00:56 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_all_argv_is_integer(char **av);
static void	ft_str_to_number(int ac, char **av);

void	ft_ac_av_check(int ac, char **av)
{
	if (ac < 3)
		ft_print_error("Expected 2 or more than 2 integer");
	if (ft_isdigit(av[1][0]) == 0)
		ft_print_error("Only integer is accepted");
	if (ft_strnstr(av[1], "--", ft_strlen(av[1])))
		ft_print_error("Double minus sign found");
	ft_check_all_argv_is_integer(av);
	ft_str_to_number(ac, av);
}

static void	ft_check_all_argv_is_integer(char **av)
{
	int	i;
	int	j;

	i = 1;
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

static void	ft_str_to_number(int ac, char **av)
{
	long	value;

	ac = ac - 1;
	while (ac > 0)
	{
		value = ft_atol(av[ac]);
		if (value < INT_MIN || value > INT_MAX)
			ft_print_error("There is a value more or less than INT_MIN/INT_MAX");
		printf("value = %ld\n", value);
		ac--;
	}
}
