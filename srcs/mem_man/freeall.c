/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:45:14 by ldesboui          #+#    #+#             */
/*   Updated: 2025/12/04 10:00:34 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	freeall_strs(char **param)
{
	int	i;

	i = 0;
	while (param[i])
	{
		free(param[i]);
		param[i] = NULL;
		++i;
	}
	free(param);
}

void	free_stack(t_stack *stack)
{
	free(stack->values);
	free(stack);
}
