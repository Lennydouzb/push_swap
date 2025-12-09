/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:51:05 by ldesboui          #+#    #+#             */
/*   Updated: 2025/12/09 01:00:43 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "libft/libft.h"

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac > 1)
	{
		stack = parse(ac - 1, av);
		if (!stack)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		if (stack->top < 5 && check_a(stack) == 0)
			ac = small_solve(stack);
		else if (stack->top >= 5 && check_a(stack) == 0)
			ac = big_solve(stack);
		if (check_a(stack) == 1)
		{
			free_stack(stack);
			return (0);
		}
		free_stack(stack);
		if (ac == 1)
			return (0);
	}
	write(2, "Error\n", 6);
	return (1);
}