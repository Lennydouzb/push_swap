/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:13:27 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 18:18:07 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_stack *a)
{
	if ((a->values)[a->top] > (a->values)[a->top - 1])
	{
		if ((a->values)[a->top] < (a->values)[a->top - 2])
			sa(a);
		else
		{
			if ((a->values)[a->top - 1] > (a->values)[a->top - 2])
			{
				sa(a);
				rra(a);
			}
			else
				ra(a);
		}
	}
	else if ((a->values)[a->top - 1] > (a->values)[a->top - 2])
	{
		if ((a->values)[a->top] > (a->values)[a->top - 2])
			rra(a);
		else if ((a->values)[a->top] < (a->values)[a->top - 1])
		{
			sa(a);
			ra(a);
		}
	}
}

void	sort_two_reverse(t_stack *b)
{
	if ((b->values)[b->top] > (b->values)[b->top - 1])
		sb(b);
}

int	big_solve(t_stack *a)
{
	t_stack *b;

	b = ft_emptynewstack(a->top + 1);
	while (b->top != 2)
		pb(a, b);
	sort_two_reverse(b);
	while (check_a(a) == 0)
	{
		a = 0;
	}
	return (0);
}
