/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pause.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 09:33:43 by ehossain          #+#    #+#             */
/*   Updated: 2025/04/14 13:32:13 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	pid;

	pid = getpid();
	if (pid <= 0)
	{
		printf("PID Error\n");
		return (1);
	}
	printf("Current porcess PID = %d\n", pid);
	printf("Waiting for Signal\n");
	while (1)
		pause();
	return (0);
}
