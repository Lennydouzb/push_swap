/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:08:00 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 19:03:50 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static int	cost_to_push(t_stack *stack, int value)
{
	int	pos;

	pos = 0;
	if (is_new_max(stack, value))
		pos = max_pos(stack);
	if (is_new_min(stack, value))
		pos = min_pos(stack);
	if (pos < stack->top - pos)
		pos = (pos + 1) * -1;
	else
		pos = stack->top - pos;
	return (pos);
}

static int	cost_to_get(t_stack *stack, int pos)
{
	if (pos < stack->top - pos)
		pos = (pos + 1) * -1;
	else
		pos = stack->top - pos;
	return (pos);
}

int	cost(t_stack *sender, t_stack *receiver, int pos_s, int	value_s)
{
	int	cost_get;
	int	cost_push;

	cost_push = cost_to_push(receiver, value_s);
	cost_get = cost_to_get(sender, pos_s);
	return (cost_push - cost_get);
}
