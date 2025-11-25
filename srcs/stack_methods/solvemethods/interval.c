/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:44 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 16:58:47 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../../includes/push_swap.h"

int	biggest_smaller_pos(t_stack *stack, int value)
{
	int	i;
	int	big_smaller;
	int	pos;

	big_smaller = value;
	i = stack->top;
	pos = i;
	while (i >= 0)
	{
		if((stack->values)[i] > big_smaller && (stack->values)[i] < value)
		{
			big_smaller = (stack->values)[i];
			pos = i;
		}
		--i;
	}
	return (pos);
}
