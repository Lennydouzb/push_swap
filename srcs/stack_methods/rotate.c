/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:44:37 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/17 13:57:09 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack *a)
{
	int	tmp;
	int	temp_top;

	temp_top = a->top;
	if (a->top > 0)
	{
		tmp = (a->values)[a->top];
		while (temp_top >= 0)
		{
			(a->values)[temp_top] = (a->values)[temp_top - 1];
			--temp_top;
		}
		(a->values)[0] = tmp;
	}
	ft_printf("ra\n");
}


void	rb(t_stack *b)
{
	int	tmp;
	int	temp_top;

	temp_top = b->top;
	if (b->top > 0)
	{
		tmp = (b->values)[b->top];
		while (temp_top >= 0)
		{
			(b->values)[temp_top] = (b->values)[temp_top - 1];
			--temp_top;
		}
		(b->values)[0] = tmp;
	}
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	int	tmp;
	int	temp_top;

	temp_top = b->top + 1;
	if (b->top > 0)
	{
		tmp = (b->values)[b->top];
		while (--temp_top >= 0)
			(b->values)[temp_top] = (b->values)[temp_top - 1];
		(b->values)[0] = tmp;
	}
	temp_top = a->top;
	if (a->top > 0)
	{
		tmp = (a->values)[a->top];
		while (temp_top >= 0)
		{
			(a->values)[temp_top] = (a->values)[temp_top - 1];
			--temp_top;
		}
		(a->values)[0] = tmp;
	}
	ft_printf("rr\n");
}
