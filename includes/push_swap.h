/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:51:19 by ldesboui          #+#    #+#             */
/*   Updated: 2025/11/25 19:04:20 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../srcs/printf/ft_printf.h"
#include "../srcs/libft/libft.h"

typedef struct s_stack
{
	int	*values;
	int	top;
}	t_stack;

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sort_two(t_stack *a);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
char	**parse_av(int ac, char **av);
int		*strstoints(char **av);
t_stack	*ft_newstack(int *values, size_t size);
int		check_values(int *values, size_t size);
void	freeall_strs(char **param);
t_stack *parse(int ac, char **av);
void	sort_three(t_stack *a);
t_stack *ft_emptynewstack(size_t size);
int		check_a(t_stack *a);
int		is_new_max(t_stack *stack, int value);
int		is_new_min(t_stack *stack, int value);
int		min_pos(t_stack *stack);
int		max_pos(t_stack *stack);
int		biggest_smaller_pos(t_stack *stack, int value);
int		cost(t_stack *sender, t_stack *receiver, int pos_s, int	value_s);

#endif
