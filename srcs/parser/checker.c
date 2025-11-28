/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:10:11 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/28 12:43:26 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

int	check_values(int *values, size_t size)
{
	size_t	i;
	size_t	k;
	int		*tmp;

	i = 0;
	tmp = (int *)ft_calloc(sizeof(int), size + 1);
	if (!tmp)
		return (0);
	while (i < size)
	{
		k = 0;
		while (k < i)
		{
			if (values[i] == tmp[k])
			{
				free(tmp);
				return (0);
			}
			++k;
		}
		tmp[i] = values[i];
		++i;
	}
	free(tmp);
	return (1);
}

int	check_ovunflow(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		if (ft_atoi_long(strs[i]) != ft_atoi(strs[i]))
			return (0);
		++i;
	}
	return (1);
}
