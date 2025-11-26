/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:08:00 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/26 20:14:18 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	cost_to_push(t_stack *stack, int value)
{
	int	pos;

	pos = 0;
	if (stack->top == -1)
		return (0);
	if (is_new_max(stack, value) || is_new_min(stack, value))
		pos = max_pos(stack);
	else
		pos = biggest_smaller_pos(stack, value);
	if (pos < stack->top - pos)
		pos = (pos + 1) * -1;
	else
		pos = stack->top - pos;
	return (pos);
}

int	cost_to_push_back(t_stack *stack, int value)
{
	int	pos;
	if (is_new_max(stack, value) || is_new_min(stack, value))
		pos = min_pos(stack);
	pos = smallest_bigger_pos(stack, value);
	if (pos < stack->top - pos)
		pos = (pos + 1) * -1;
	else
		pos = stack->top - pos;
	return (pos);
}

int	cost_to_get(t_stack *stack, int pos)
{
	if (pos < stack->top - pos)
		pos = (pos + 1) * -1;
	else
		pos = stack->top - pos;
	return (pos);
}

int	get_cheapest_pos(t_stack *a, t_stack *b)
{
	int	i;
	int	cheapest_pos;
	int	cheapest_cost;
	int	current_cost;

	cheapest_pos = 0;
	cheapest_cost = cost(a, b, 0, (a->values)[0]);
	i = 1;
	while (i <= a->top)
	{
		current_cost = cost(a, b, i, (a->values)[i]);
		if (ABS(current_cost) < ABS(cheapest_cost))
		{
			cheapest_cost = current_cost;
			cheapest_pos = i;
		}
		i++;
	}
	return (cheapest_pos);
}

int	cost(t_stack *sender, t_stack *receiver, int pos_s, int value_s)
{
	int	cost_get;
	int	cost_push;
	int	cost;

	cost_push = cost_to_push(receiver, value_s);
	cost_get = cost_to_get(sender, pos_s);
	cost = calc_cost(cost_push, cost_get);
	return (cost);
}
