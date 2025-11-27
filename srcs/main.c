/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:51:05 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/26 19:33:32 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "libft/libft.h"

void	print_stack(t_stack *a)
{
	int	i;
	i = a->top ;
	while (i >= 0)
	{
		ft_printf("%d\n", (a->values)[i]);
		i--;
	}
	ft_printf("----\n");
}

int	main(int ac, char **av)
{
	t_stack *stack;

	if (ac > 1)
	{
		stack = parse(ac - 1, av);
		if (!stack)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		if (stack->top < 5 && check_a(stack) == 0)
			small_solve(stack);
		else if (stack->top >= 5 && check_a(stack) == 0)
			big_solve(stack);
		free(stack->values);
		free(stack);
		return (0);
	}
	else
		write(2, "Error\n", 6);
}