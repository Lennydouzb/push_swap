/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:43:00 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/26 15:20:25 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void rrotation(int cost_a, int cost_b, t_stack *a, t_stack *b)
{
    while (cost_a < 0 && cost_b < 0)
    {
        rrr(a, b);
        cost_a++;
        cost_b++;
    }
    while (cost_a < 0)
    {
        rra(a);
        cost_a++;
    }
    while (cost_b < 0)
    {
        rrb(b);
        cost_b++;
    }
}
void rotation(int cost_a, int cost_b, t_stack *a, t_stack *b)
{
    while (cost_a > 0 && cost_b > 0)
    {
        rr(a, b);
        cost_a--;
        cost_b--;
    }
    while (cost_a > 0)
    {
        ra(a);
        cost_a--;
    }
    while (cost_b > 0)
    {
        rb(b);
        cost_b--;
    }
}

void    place(t_stack *a, t_stack *b, int pos_a)
{
    int cost_a;
    int cost_b;

    cost_a = cost_to_get(a, pos_a);
    cost_b = cost_to_push(b, (a->values)[pos_a]);
    rotation(cost_a, cost_b, a, b);
    rrotation(cost_a, cost_b, a, b);
    pb(a, b);
}
