/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usleep.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 09:10:05 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/12 09:15:38 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	i;

	i = 1000000;
	// 1000000 micoseconds == 1 seconds
	while (i <= 5000000)
	{
		usleep(i);
		printf("sleeping for %d microsecond\n", i);
		i = i + 1000000;
	}
	return (0);
}
