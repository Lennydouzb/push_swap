/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:55:59 by ldesboui          #+#    #+#             */
/*   Updated: 2025/12/09 01:04:04 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	*parse_av_to_ints(int *ac, char **av)
{
	char	**strs;
	int		*ints;

	strs = parse_av(*ac, av);
	if (!strs)
		return (NULL);
	*ac = ft_strslen(strs);
	ints = strstoints(strs);
	if (!ints)
		return (NULL);
	return (ints);
}

t_stack	*parse(int ac, char **av)
{
	int		*parsed;
	t_stack	*stack;

	if (check_av(av) == 0)
		return (NULL);
	parsed = parse_av_to_ints(&ac, av);
	if (!parsed)
		return (NULL);
	if (check_values(parsed, ac) == 0)
	{
		free(parsed);
		return (NULL);
	}
	stack = ft_newstack(parsed, ac);
	return (stack);
}
