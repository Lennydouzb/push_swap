/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:28:36 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/28 12:44:41 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	count_numbers(char **strs)
{
	int	k;

	k = 0;
	while (strs[k])
		++k;
	return (k);
}

static void	strstostr(int ac, char **av)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (i < ac - 1)
	{
		while (av[1][k])
			++k;
		av[1][k] = ' ';
		++k;
		++i;
	}
}

static int	checkstrs(char **av)
{
	int	i;
	int	k;
	int	passsign;

	i = 0;
	while (av[i])
	{
		k = 0;
		passsign = 1;
		while (av[i][k])
		{
			while ((av[i][k] == '-' || av[i][k] == '+') && passsign)
			{
				passsign = 0;
				++k;
			}
			if (!ft_isdigit(av[i][k]))
				return (0);
			++k;
		}
		++i;
	}
	return (1);
}

char	**parse_av(int ac, char **av)
{
	char	**str;

	strstostr(ac, av);
	str = ft_split(av[1], ' ');
	if (!str)
		return (NULL);
	if (checkstrs(str) == 0)
		return (NULL);
	if (check_ovunflow(str) == 0)
		return (NULL);
	return (str);
}

int	*strstoints(char **strs)
{
	int	*ints;
	int	i;

	i = 0;
	ints = ft_calloc(sizeof(int), count_numbers(strs) + 1);
	if (!ints)
	{
		freeall_strs(strs);
		return (NULL);
	}
	while (strs[i])
	{
		ints[i] = ft_atoi(strs[i]);
		++i;
	}
	freeall_strs(strs);
	return (ints);
}
