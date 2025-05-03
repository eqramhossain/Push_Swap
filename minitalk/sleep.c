/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:48:49 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/11 13:11:03 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 5)
	{
		sleep(i);
		printf("sleeping for %d sec\n", i);
		i++;
	}
	return (0);
}
