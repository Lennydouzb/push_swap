/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extremum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:05:54 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 16:33:21 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int is_new_max(t_stack *stack, int value)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		if (value < (stack->values)[i])
			return (0);
		--i;
	}
	return (1);
}

int	is_new_min(t_stack *stack, int value)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		if (value > (stack->values)[i])
			return (0);
		--i;
	}
	return (1);
}

int	max_pos(t_stack *stack)
{
	int	max;
	int	i;

	max = (stack->values)[stack->top];
	i = stack->top;
	while (i >= 0)
	{
		if ((stack->values)[i] > max)
			max = (stack->values)[i];
		--i;
	}
	return (i);
}

int	min_pos(t_stack *stack)
{
	int	min;
	int	i;

	min = (stack->values)[stack->top];
	i = stack->top;
	while (i >= 0)
	{
		if ((stack->values)[i] < min)
			min = (stack->values)[i];
		--i;
	}
	return (i);
}
