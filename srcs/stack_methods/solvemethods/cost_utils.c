/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:01:23 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/26 19:14:02 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static void both(int cost1, int cost2, int *cost)
{
	while (cost1 > 0 && cost2 > 0)
	{
		++(*cost);
		--cost1;
		--cost2;
	}
	while (cost1 < 0 && cost2 < 0)
	{
		++(*cost);
		++cost1;
		++cost2;
	}
}

int	calc_cost(int cost1, int cost2)
{
	int	cost;

	both(cost1, cost2, &cost);
	while (cost1 != 0 || cost2 != 0)
	{
		if (cost1 > 0)
			--cost1;
		else if (cost1 < 0)
			++cost1;
		else if (cost2 > 0)
			--cost2;
		else if (cost2 < 0)
			++cost2;
		++cost;
	}
	return (cost);
}
