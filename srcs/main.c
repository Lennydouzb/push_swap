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
		big_solve(stack);
		print_stack(stack);
		return (0);
		//t_stack *a = malloc(sizeof(t_stack));
		//a->values = malloc(sizeof(int) * 500);
		//a->top = 8;
		//t_stack *b = malloc(sizeof(t_stack));
		//b->values = malloc(sizeof(int) * 500);
		//b->top = 9;
		//int k =1;
		//int i =0;
		//while (k < 10)
		//{
		//	(a->values)[k - 1]	= k;
		//	++k;
		//}
		//while (i < 10)
		//{
		//	(b->values)[i] = k;
		//	--k;
		//	++i;
		//}
		//i = 0;
		//ft_printf("base\n");
		//while ((a->values)[i])
		//{
		//	ft_printf("a -> %d\n", (a->values)[i]);
		//	++i;
		//}
		//i = 0;
		//while ((b->values)[i])
		//{
		//	ft_printf("b -> %d\n", (b->values)[i]);
		//	++i;
		//}
		//ft_printf("\n tests a\n");
		//rrr(a, b);
		//i = 0;
		//while ((a->values)[i])
		//{
		//	ft_printf("a -> %d\n", (a->values)[i]);
		//	++i;
		//}
		//i = 0;
		//ft_printf("\n tests b \n");
		//while ((b->values)[i])
		//{
		//	ft_printf("b -> %d\n", (b->values)[i]);
		//	++i;
		//}

	}
	else
		write(2, "Error\n", 6);
}
