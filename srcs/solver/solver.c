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

static void	sort_three(t_stack *a)
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

static void	sort_two_reverse(t_stack *b)
{
	if ((b->values)[b->top] > (b->values)[b->top - 1])
		sb(b);
}

void	big_solve(t_stack *a)
{
	t_stack *b;
	int	cheapest_pos;

	b = ft_emptynewstack(a->top + 1);
	while (b->top != 2)
		pb(a, b);
	sort_two_reverse(b);
	while (a->top > 2)
	{
		cheapest_pos = get_cheapest_pos(a, b);
		place(a, b, cheapest_pos);
	}
	print_stack(b);
	sort_three(a);
	while (b->top >= 0)
		pa(a, b);
	free(b->values);
	free(b);
}
