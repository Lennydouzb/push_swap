/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:08:00 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 17:47:14 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	cost_to_push(stack_t *stack, int value)
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

int	cost_to_get(t_stack *stack, int value)
{

}
