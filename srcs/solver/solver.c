/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:13:27 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/26 20:09:51 by ldesboui         ###   ########.fr       */
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
static void	sort_two(t_stack *b)
{
	if ((b->values)[b->top] < (b->values)[b->top - 1])
		sb(b);
}
void	align(t_stack *a)
{
	int	min;
	int	rotations;

	min = min_pos(a);
	if (min + 1 < a->top - min)
	{
		rotations = min + 1;
		while (rotations-- > 0)
			rra(a);
	}
	else
	{
		rotations = a->top - min;
		while (rotations-- > 0)
			ra(a);
	}	
}

void	big_solve(t_stack *a)
{
	t_stack *b;
	int		cheapest_pos;
	int		cost_back;

	b = ft_emptynewstack(a->top + 1);
	if (!b)
		return ;
	while (b->top != 1)
		pb(a, b);
	while (a->top > 2)
	{
		cheapest_pos = get_cheapest_pos(a, b);
		place(a, b, cheapest_pos);
	}
	sort_three(a);
	while (b->top >= 0)
	{
		cost_back = cost_to_push_back(a, (b->values)[b->top]);
		rotation(cost_back, 0, a, b);
		rrotation(cost_back, 0, a, b);
		pa(a, b);
	}
	free(b->values);
	free(b);
	align(a);
}

void	small_solve(t_stack *a)
{
	t_stack *b;
	int		cost_back;

	b = ft_emptynewstack(a->top + 1);
	if (!b)
		return ;
	while (a->top > 2)
		pb(a, b);
	if (a->top == 2)
		sort_three(a);
	else if (a->top == 1)
		sort_two(a);
	while (b->top >= 0)
	{
		cost_back = cost_to_push_back(a, (b->values)[b->top]);
		rotation(cost_back, 0, a, b);
		rrotation(cost_back, 0, a, b);
		pa(a, b);
	}
	free(b->values);
	free(b);
	align(a);
}
