/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:18:43 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 15:27:03 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_a(t_stack *a)
{
	int	max;
	int	i;

	i = a->top;
	max = (a->values)[a->top];
	while (i >= 0)
	{
		if ((a->values)[i] < max)
			return (0);
		max = (a->values)[i];
		--i;
	}
	return (1);
}
