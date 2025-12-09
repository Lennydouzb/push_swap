/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:51:19 by ldesboui          #+#    #+#             */
/*   Updated: 2025/12/09 01:09:16 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../srcs/printf/ft_printf.h"
# include "../srcs/libft/libft.h"

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
t_stack	*parse(int ac, char **av);
t_stack	*ft_emptynewstack(size_t size);
int		check_a(t_stack *a);
int		is_new_max(t_stack *stack, int value);
int		is_new_min(t_stack *stack, int value);
int		min_pos(t_stack *stack);
int		max_pos(t_stack *stack);
int		biggest_smaller_pos(t_stack *stack, int value);
int		smallest_bigger_pos(t_stack *stack, int value);
int		cost(t_stack *sender, t_stack *receiver, int pos_s, int value_s);
int		cost_to_get(t_stack *stack, int pos);
int		cost_to_push(t_stack *stack, int value);
int		get_cheapest_pos(t_stack *a, t_stack *b);
void	place(t_stack *a, t_stack *b, int pos_a);
int		big_solve(t_stack *a);
int		cost_to_push_back(t_stack *stack, int value);
void	rrotation(int cost_a, int cost_b, t_stack *a, t_stack *b);
void	rotation(int cost_a, int cost_b, t_stack *a, t_stack *b);
int		calc_cost(int cost1, int cost2);
void	align(t_stack *a);
int		small_solve(t_stack *a);
int		abs(int nb);
int		check_ovunflow(char **strs);
void	free_stack(t_stack *stack);
int		check_av(char **av);


#endif
