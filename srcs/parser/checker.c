/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:10:11 by ldesboui          #+#    #+#             */
/*   Updated: 2025/12/09 14:23:58 by ldesboui         ###   ########.fr       */
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

static int	check_nb_presence(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_isdigit(av[i]) == 1)
			return (1);
		++i;
	}
	return (0);
}

static int	do_checks(char *av, int k)
{
	if (!check_nb_presence(av))
		return (0);
	if (ft_isdigit(av[k]) == 1)
	{
		if (ft_isdigit(av[k + 1]) == 0 && av[k + 1] != ' ' && av[k + 1] != '\0')
			return (0);
	}
	if (av[k] == '-' || av[k] == '+')
	{
		if (ft_isdigit(av[k + 1]) == 0)
			return (0);
	}
	return (1);
}

int	check_av(char **av)
{
	int	i;
	int	k;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
			return (0);
		k = 0;
		while (av[i][k])
		{
			if (do_checks(av[i], k) == 0)
				return (0);
			++k;
		}
		++i;
	}
	return (1);
}
