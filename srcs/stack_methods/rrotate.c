/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:58:30 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/28 11:28:23 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

void	rra(t_stack *a)
{
	int	tmp;
	int	tmp_top;

	if (a->top > 0)
	{
		tmp_top = 0;
		tmp = (a->values)[0];
		while (tmp_top < a->top)
		{
			(a->values)[tmp_top] = (a->values)[tmp_top + 1];
			++tmp_top;
		}
		(a->values)[a->top] = tmp;
	}
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	int	tmp;
	int	tmp_top;

	if (b->top > 0)
	{
		tmp_top = 0;
		tmp = (b->values)[0];
		while (tmp_top < b->top)
		{
			(b->values)[tmp_top] = (b->values)[tmp_top + 1];
			++tmp_top;
		}
		(b->values)[b->top] = tmp;
	}
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	int	tmp;
	int	tmp_top;

	if (a->top > 0)
	{
		tmp_top = -1;
		tmp = (a->values)[0];
		while (++tmp_top < a->top)
			(a->values)[tmp_top] = (a->values)[tmp_top + 1];
		(a->values)[a->top] = tmp;
	}
	if (b->top > 0)
	{
		tmp_top = 0;
		tmp = (b->values)[0];
		while (tmp_top < b->top)
		{
			(b->values)[tmp_top] = (b->values)[tmp_top + 1];
			++tmp_top;
		}
		(b->values)[b->top] = tmp;
	}
	ft_printf("rrr\n");
}
