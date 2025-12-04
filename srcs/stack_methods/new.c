/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:07:33 by ldesboui          #+#    #+#             */
/*   Updated: 2025/12/04 09:59:10 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rev(int *values, size_t size)
{
	size_t	i;
	int		tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = values[i];
		values[i] = values[size - i - 1];
		values[size - i - 1] = tmp;
		++i;
	}
}

t_stack	*ft_newstack(int *values, size_t size)
{
	t_stack	*stack;

	stack = ft_calloc(sizeof(t_stack), 1);
	if (!stack)
	{
		free(values);
		return (NULL);
	}
	rev(values, size);
	stack->values = values;
	stack->top = size - 1;
	return (stack);
}

t_stack	*ft_emptynewstack(size_t size)
{
	t_stack	*stack;

	stack = ft_calloc(sizeof(t_stack), 1);
	if (!stack)
		return (NULL);
	stack->values = ft_calloc(sizeof(int), size);
	if (!stack->values)
	{
		free(stack);
		return (NULL);
	}
	stack->top = -1;
	return (stack);
}
