/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ac_av_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:58:16 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/05 16:34:58 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_is_all_integer(char **av, int is_malloced);
static void	ft_check_min_max(char **av, int is_malloced);
static void	ft_error_ac_av(char **av, int is_malloced);

void	ft_ac_av_check(char **av, int is_malloced)
{
	int	ac;

	ac = ft_count_av(av);
	if (ac == 1)
		ft_error_ac_av(av, is_malloced);
	if (!av[0])
		ft_error_ac_av(av, is_malloced);
	ft_is_all_integer(av, is_malloced);
	ft_check_min_max(av, is_malloced);
}

int	ft_count_av(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

static void	ft_is_all_integer(char **av, int is_malloced)
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
				ft_error_ac_av(av, is_malloced);
			j++;
		}
		i++;
	}
}

static void	ft_check_min_max(char **av, int is_malloced)
{
	long	value;
	int		i;

	i = 0;
	while (av[i])
	{
		value = ft_atol(av[i]);
		if ((value < (long)INT_MIN) || (value > (long)INT_MAX))
			ft_error_ac_av(av, is_malloced);
		i++;
	}
}

static void	ft_error_ac_av(char **av, int is_malloced)
{
	if (is_malloced)
	{
		ft_free_str(av);
		free(av);
	}
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
