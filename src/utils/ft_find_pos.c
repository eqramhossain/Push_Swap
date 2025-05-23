/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:07:48 by ehossain          #+#    #+#             */
/*   Updated: 2025/05/20 17:09:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_find_pos(t_stack *head, int pos)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp)
	{
		if (tmp->pos == pos)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
