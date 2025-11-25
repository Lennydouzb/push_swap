/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:00:00 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/17 13:51:39 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->top > 0)
	{
		tmp = (a->values)[a->top];
		(a->values)[a->top] = (a->values)[(a->top) - 1];
		(a->values)[(a->top) - 1] = tmp;
	}
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->top > 0)
	{
		tmp = (b->values)[b->top];
		(b->values)[b->top] = (b->values)[(b->top) - 1];
		(b->values)[(b->top) - 1] = tmp;
	}
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	int	tmp;
	int atmp;

	if (b->top > 0)
	{
		tmp = (b->values)[b->top];
		(b->values)[b->top] = (b->values)[(b->top) - 1];
		(b->values)[(b->top) - 1] = tmp;
	}
	if (a->top > 0)
	{
		atmp = (a->values)[a->top];
		(a->values)[a->top] = (a->values)[(a->top) - 1];
		(a->values)[(a->top) - 1] = atmp;
	}
	ft_printf("ss\n");
}
