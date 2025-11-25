/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:30:48 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/17 15:25:50 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (b->top != -1)
	{
		(a->values)[a->top + 1] = (b->values)[b->top];
		a->top += 1;
		(b->values)[b->top] = 0;
		b->top -= 1;
	}
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->top != -1)
	{
		(b->values)[b->top + 1] = (a->values)[a->top];
		b->top += 1;
		(a->values)[a->top] = 0;
		a->top -= 1;
	}
	ft_printf("pb\n");
}
