/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:44 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/28 11:31:53 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../../includes/push_swap.h"

int	biggest_smaller_pos(t_stack *stack, int value)
{
	int		i;
	long	big_smaller;
	int		pos;

	big_smaller = -2147483649;
	i = stack->top;
	pos = i;
	while (i >= 0)
	{
		if ((stack->values)[i] > big_smaller && (stack->values)[i] < value)
		{
			big_smaller = (stack->values)[i];
			pos = i;
		}
		--i;
	}
	return (pos);
}

int	smallest_bigger_pos(t_stack *stack, int value)
{
	int		i;
	long	small_bigger;
	int		pos;

	small_bigger = 2147483648;
	i = stack->top;
	pos = i;
	while (i >= 0)
	{
		if ((stack->values)[i] < small_bigger && (stack->values)[i] > value)
		{
			small_bigger = (stack->values)[i];
			pos = i;
		}
		--i;
	}
	return (pos);
}
