/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extremum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:05:54 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/26 20:09:07 by ldesboui         ###   ########.fr       */
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
	int	pos;

	max = (stack->values)[stack->top];
	i = stack->top;
	pos = 0;
	while (i >= 0)
	{
		if ((stack->values)[i] > max)
		{
			max = (stack->values)[i];
			pos = i;
		}
		--i;
	}
	return (pos);
}

int	min_pos(t_stack *stack)
{
	int	min;
	int	i;
	int	pos;

	min = (stack->values)[stack->top];
	i = stack->top;
	pos = 0;
	while (i >= 0)
	{
		if ((stack->values)[i] < min)
		{
			min = (stack->values)[i];
			pos = i;
		}
		--i;
	}
	return (pos);
}
